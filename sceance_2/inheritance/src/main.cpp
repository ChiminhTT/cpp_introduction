#include <MITPerson.h>
#include <MITStudent.h>

int main(int argc, char const *argv[])
{
  // Construct parent class instance
  auto const mit_person = Person::MITPerson("michael", 142, "345 W Easton");
  mit_person.display_profile();

  // Construct herited instance
  auto const mit_student = Person::MITStudent("paul", 134, "3 E Easton", 101, 2015);
  mit_student.display_profile();

  return 0;
}
