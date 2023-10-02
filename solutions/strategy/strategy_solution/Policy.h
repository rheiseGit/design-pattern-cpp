#ifndef POLICY
#define POLICY

#include "MergeSort.h"
#include "QuickSort.h"
#include "Context.h"

class Policy
{
	private:
	    // TODO 4: Declare the missing attribute (hint: check the constructor).
		Context* context;	

	public:
		// TODO 5: Instantiate the missing attribute.
		Policy(Context* context) : context(context) {}

		virtual void configure(bool timeIsImportant, bool spaceIsImportant)
		{
		// TODO 6: Add implementation for choosing the appropriate sorting algorithm.
			if (timeIsImportant && !spaceIsImportant)
				context->setSortAlgorithm(new MergeSort);
			else if (timeIsImportant && spaceIsImportant)
				context->setSortAlgorithm(new QuickSort);
		}
};

#endif	//#ifndef POLICY
