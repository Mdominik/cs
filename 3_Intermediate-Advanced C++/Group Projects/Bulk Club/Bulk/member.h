#ifndef MEMBER_H
#define MEMBER_H

class Member
{
    public:
        Member();
};

class ExecutiveMember : public Member {
    public:
        ExecutiveMember();
    private:

};

class RegularMember : public Member {
    public:
        RegularMember();
    private:

};

#endif // MEMBER_H
