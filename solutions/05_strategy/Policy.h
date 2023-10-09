#ifndef POLICY
#define POLICY

#include "MergeSort.h"
#include "QuickSort.h"
#include "Context.h"

class Policy
{
	private:
	    // TODO: Declare the missing attribute (hint: check the constructor).
		Context* context;	// part of solution

	public:
		// TODO: Instantiate the missing attribute.
		Policy(Context* context) : context(context) {} // part of solution

		virtual void configure(bool timeIsImportant, bool spaceIsImportant)
		{
		// TODO: Add implementation for choosing the appropriate sorting algorithm.
		// If time is important and space is not, use MergeSort else Quicksort
			if (timeIsImportant && !spaceIsImportant) // part of solution
				context->setSortAlgorithm(new MergeSort);
			else 
				context->setSortAlgorithm(new QuickSort);
		}
};

#endif	//#ifndef POLICY
