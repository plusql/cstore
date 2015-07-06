/*
 *  Opt_Comparison_Gt.cpp
 *  C-Store - Optimimzation
 *
 *  Created by Nga Tran on 11/01/05.
 * 
 *  Questions, ask Nga Tran at nga@brandeis.edu or Tien Hoang at hoangt@brandeis.edu
 *	
 *  This class implements a equal comparison
 */

#include "Opt_Comparison_Gt.h"

// Default constructor
Opt_Comparison_Gt::Opt_Comparison_Gt() : Opt_Comparison()
{
}
		
// Provide column and table names
Opt_Comparison_Gt::Opt_Comparison_Gt(Opt_Object* ptrLeft, Opt_Object* ptrRight) : Opt_Comparison(ptrLeft, ptrRight, ">")
{
}

// Default Destructor
Opt_Comparison_Gt::~Opt_Comparison_Gt()
{
}

// Clone
Opt_Comparison_Gt* Opt_Comparison_Gt::clone()
{
	Opt_Object* ptrLeft = NULL;
	Opt_Object* ptrRight = NULL;
	
	if (m_ptrLeft != NULL) ptrLeft = m_ptrLeft->clone();
	if (m_ptrRight != NULL) ptrRight = m_ptrRight->clone();
	
	return new Opt_Comparison_Gt(ptrLeft, ptrRight);
}


// Clone with new table names, new table alias
Opt_Comparison_Gt* Opt_Comparison_Gt::clone(string sTableName, string sTableAlias)
{
	Opt_Object* ptrLeft = NULL;
	Opt_Object* ptrRight = NULL;
	
	if (m_ptrLeft != NULL) ptrLeft = m_ptrLeft->clone(sTableName, sTableAlias);
	if (m_ptrRight != NULL) ptrRight = m_ptrRight->clone(sTableName, sTableAlias);
	
	return new Opt_Comparison_Gt(ptrLeft, ptrRight);
}


