#include <string>
class Person
{
	private:
	    string strName;
	    string strAddress;
	public:
	    Person() = default;
	    Person(const string &name, const string &address)
	    {
			strName = name;
			strAddress = address;
		}
		Person(std::istream &is) { is >> *this; }    	    
	public:
	    string getName() const { return strName; }
	    string getAddress() const { return strAddress; }
	    std::istream &read(std::istream &is, Person &per);
	    std::ostream &print(std::ostream &os, const Person &per);
};

std::istream &read(std::istream &is, Person &per)
{
	is >> per.strName >> per.strAddress;
	return is;
}

std::ostream &print(std::ostream &os, const Person &per)
{
	os << per.getName() << per.getAddress();
	return os;
}
