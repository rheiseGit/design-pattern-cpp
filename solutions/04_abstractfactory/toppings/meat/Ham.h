#ifndef HAM
#define HAM

#include <string>

namespace abstractfactorytoppings::meat
{
	class Ham : public Meat
	{
	public:
		std::string toString() override
		{
			return "Ham";
		}
	};

}


#endif	//#ifndef
