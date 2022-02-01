#include "HomePhone.h"
#include "MobilePhone.h"
#include "Person.h"
#include "Phone.h"

int main() {
    Person paul { "Paul", 3 };
    // HomePhone phone { paul, 3 };
    // phone.ring();

    // Phone        n_phone { paul };
    HomePhone    phone2 { paul, -10 };
    MobilePhone  m_phone { paul };
    const Phone& normal_phone = phone2;
    normal_phone.ring();

    // --> 8
    // paul.set_position(8);
    // std::cout << paul.get_position() << std::endl;

    return 0;
}
