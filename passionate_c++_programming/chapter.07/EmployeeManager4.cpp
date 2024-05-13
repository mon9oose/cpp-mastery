#include <cstring>
#include <iostream>
#include <vector>

class Employee
{
private:
    char name[100];

public:
    Employee(char *name) { strcpy(this->name, name); }
    void ShowYourName() const { std::cout << name << std::endl; }
    virtual int GetPay() const { return 0; }
    virtual void ShowSalaryInfo() const {}
};

class PermanentWorker : public Employee
{
private:
    int salary;

public:
    PermanentWorker(char *name, int money) : Employee(name), salary(money) {}
    int GetPay() const { return salary; }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        std::cout << "salary : " << salary << std::endl;
    }
};

class TemporaryWorker : public Employee
{
private:
    int _workTime;
    int _payPerHour;

public:
    TemporaryWorker(char *name, int payPerHour) : Employee(name), _workTime(0), _payPerHour(payPerHour) {}
    void AddWorkTime(int hour) { _workTime += hour; }
    int GetPay() const { return _workTime * _payPerHour; }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        std::cout << "salary : " << GetPay() << std::endl;
    }
};

class SalesWorker : public PermanentWorker
{
private:
    int _salesResult;
    double _bonusRatio;

public:
    SalesWorker(char *name, int money, double ratio) : PermanentWorker(name, money), _bonusRatio(ratio) {}
    void AddSalesResult(int result) { _salesResult += result; }
    int GetPay() const { return PermanentWorker::GetPay() + int(_salesResult * _bonusRatio); }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        std::cout << "salary : " << GetPay() << std::endl;
    }
};

class EmployeeHandler
{
private:
    std::vector<Employee *> list;

public:
    EmployeeHandler() {}
    void AddEmployee(Employee *emp) { list.push_back(emp); }
    void ShowAllSalaryInfo() const
    {
        for (const auto emp : list)
        {
            emp->ShowSalaryInfo();
        }
    }
    void ShowTotalSalary() const
    {
        int sum = 0;
        for (const auto emp : list)
        {
            sum += emp->GetPay();
        }
        std::cout << "total salary : " << sum << std::endl;
    }
    ~EmployeeHandler()
    {
        for (const auto emp : list)
        {
            delete emp;
        }
    }
};

int main(void)
{
    EmployeeHandler handler;

    handler.AddEmployee(new PermanentWorker("KIM", 1000));
    handler.AddEmployee(new PermanentWorker("LEE", 1500));
    handler.AddEmployee(new PermanentWorker("JUN", 2000));

    handler.ShowAllSalaryInfo();
    handler.ShowTotalSalary();

    return 0;
}