#include <MITStudent.h>

MITStudent::MITStudent(std::string const& _name,
                       Person::UID const& _puid,
                       Person::Address const& _address,
                       uint const& _course_number,
                       int const& _year):
  MITPerson(_name, _puid, _address)
{
  this->course_number = _course_number;
  this->year = _year;
}

void MITStudent::add_class(Class::Course const& new_class) 
{
  classes_taken.push_back(new_class);
}

void MITStudent::display_profile() const
{
  std::cout << "-----------------------------\n";
  std::cout << "Dumping MITStudent profile" << std::endl;
  std::cout << ">> " << this->name << " (name)" << std::endl;
  std::cout << ">> " << this->uid << " (uid)" << std::endl;
  std::cout << ">> " << this->address << " (address)" << std::endl;
	std::cout << "=====\n";
	std::cout << ">> " << this->course_number << " (course number)" << std::endl;	
	std::cout << ">> " << this->year << " (year)" << std::endl;	
	for (auto const& course : this->classes_taken)
	{
		std::cout << ">>> " << course.uid << " (course uid)" <<std::endl;
		std::cout << ">>> " << course.name << " (course name)" <<std::endl;
	}
	
  std::cout << "-----------------------------\n";
}
