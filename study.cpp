#include <iostream>
#include <string>

using namespace std;

class Student{
private: 
  int* m_pID = nullptr;
  string name = "";
public:
  Student(int, string);
  Student(const Student& a); 
  ~Student();
  int GetID(){return *m_pID;};
  string GetName(){return name;};
  int* GetIDAd() const {return m_pID};
  static int StudentNum;
  void Tprint(Teacher t){cout << t.GetTHobby() << endl;};

}

int Student::StudentNum = 0;

class Teacher{
private:
  int t_name = "";
  string t_hobby = "yoga";
  friend string GetTHobby(){ return t_hobby; };
public:
  Teacher(int i, string s):t_name = i, t_hobby = s{};
  
}
int main(){
  Student s1 = Student(202111194, "duri");
  Student::StudentNum++;
  Student s2{s1};
  Student::StudentNum++;
  Teacher t1 = Teacher(21, "cook");

  cout << s1.GetID() << s1.GetName() << endl;
  cout << s2.GetID() << s2.GetName() << endl;
}


------------------------------------------------------------


class Complex{
  *int r;
  *int i;
public:
  Complex();
  Complex(int inr);
  Complex(int inr, int ini);
  ~Complex();
  Complex(const Complex& rhs);
  void print() const;
};
Complex::Complex(int inr, int ini){
  r = new int(inr);
  i = new int(ini);
}
Complex::Complex():Complex(0,0) {}
Complex::
