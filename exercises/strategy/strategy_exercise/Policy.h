#ifndef POLICY
#define POLICY

#include "MergeSort.h"
#include "QuickSort.h"
#include "Context.h"

class Policy
{
	private:
	    // TODO 4: Declare the missing attribute (hint: check the constructor).

	public:
		// TODO 5: Instantiate the missing attribute.
		Policy(Context* context) {}

		virtual void configure(bool timeIsImportant, bool spaceIsImportant)
		{
		// TODO 6: Add implementation for choosing the appropriate sorting algorithm.
		}
};

#endif	//#ifndef POLICY
