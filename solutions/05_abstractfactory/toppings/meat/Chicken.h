#ifndef CHICKEN
#define CHICKEN

#include <string>

namespace abstractfactorytoppings::meat
{
	class Chicken : public Meat
	{
	public:
		std::string toString() override
		{
			return "Chicken";
		}
	};

}


#endif	//#ifndef 
