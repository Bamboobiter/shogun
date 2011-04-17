/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 2011 Sergey Lisitsyn
 * Copyright (C) 2011 Berlin Institute of Technology and Max-Planck-Society
 */

#ifndef EVALUATION_H_
#define EVALUATION_H_

#include "features/Labels.h"

namespace shogun {

/** @brief The class Evaluation
 * a main class for other classes
 * used to evaluate labels, e.g. accuracy of classification or
 * mean squared error of regression.
 *
 * This class provides only interface for evaluation with
 * no proposed implementation.
 *
 */
class CEvaluation: public CSGObject
{
public:
	/** constructor */
	CEvaluation(): CSGObject() {};

	/** destructor */
	virtual ~CEvaluation() {};

	/** evaluate labels
	 * @param labels labels for evaluating
	 * @param labels_valid labels assumed to be correct
	 * @return evaluation result
	 */
	virtual float64_t evaluate(CLabels* labels, CLabels* labels_valid) = 0;

	/** get name */
	virtual const char* get_name() const = 0;
};

}

#endif /* EVALUATION_H_ */
