#include<iostream>
#include<string>
using namespace std;

class Course {
public:
	Course(const string& courseName, int capacity) {
		numberOfStudents = 0;
		this->courseName = courseName;
		this->capacity = capacity;
		students = new string[capacity];
	}
	~Course() {
		delete[] students;
	}
	void doubleCapacity() {
		string* newStudents = new string[capacity*2];
		for (int i = 0; i < numberOfStudents; i++)
			*(newStudents + i) = *(students + i); 
		students = newStudents;
	}
	string getCourseName() const {
		return courseName;
	}
	void addStudent(const string& name) {
		students[numberOfStudents] = name;
		numberOfStudents++;
	}
	void dropStudent(const string& name) {
		//½Ç½ÀÀ¸·Î ³²°ÜµÖ? ¿ì¾¾
		int index = 0;
		for (int i = 0; i < numberOfStudents; i++)
			if (students[i] == name)
				index = i;
		for (int i = index; i < numberOfStudents-1; i++)
			students[i] = students[i + 1];
		numberOfStudents--;
	}
	void clear() {
		numberOfStudents = 0;
	}
	string* getStudents() const {
		return students;
	}
	int getNumberOfStudent() const {
		return numberOfStudents;
	}
	int getCapacity() const {
		return capacity;
	}
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
};
int main() {
	Course course1("course1", 3);
	course1.addStudent("sujeong");
	course1.addStudent("abc");
	course1.addStudent("def");
	course1.dropStudent("def");
	if (course1.getCapacity() < course1.getNumberOfStudent())
		course1.doubleCapacity();
	for(int i = 0 ; i < course1.getNumberOfStudent() ; i++)
		cout << *(course1.getStudents() + i) << " ";
	cout << endl;
	system("pause");
	return 0;
}