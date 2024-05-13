#include <iostream>

class SinivelCap
{
public:
    void Take() const { std::cout << "콧물이 나았다" << std::endl; }
};

class SneezeCap
{
public:
    void Take() const { std::cout << "재채기 나았다" << std::endl; }
};

class SnuffleCap
{
public:
    void Take() const { std::cout << "코가 뚫렸다" << std::endl; }
};

class ColdPatient
{
public:
    void TakeSinivelCap(const SinivelCap &cap) const { cap.Take(); }
    void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
    void TakeSnuffleCap(const SnuffleCap &cap) const { cap.Take(); }
};

int main(void)
{
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient sufferer;
    sufferer.TakeSinivelCap(scap);
    sufferer.TakeSneezeCap(zcap);
    sufferer.TakeSnuffleCap(ncap);

    return 0;
}