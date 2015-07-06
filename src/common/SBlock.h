/* Copyright (c) 2005, Regents of Massachusetts Institute of Technology, 
 * Brandeis University, Brown University, and University of Massachusetts 
 * Boston. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions are met:
 *
 *   - Redistributions of source code must retain the above copyright notice, 
 *     this list of conditions and the following disclaimer.
 *   - Redistributions in binary form must reproduce the above copyright 
 *     notice, this list of conditions and the following disclaimer in the 
 *     documentation and/or other materials provided with the distribution.
 *   - Neither the name of Massachusetts Institute of Technology, 
 *     Brandeis University, Brown University, or University of 
 *     Massachusetts Boston nor the names of its contributors may be used 
 *     to endorse or promote products derived from this software without 
 *     specific prior written permission.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED 
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR 
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR 
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef SBLOCK_H
#define SBLOCK_H

#pragma once

#include "Constants.h"
#include "SPair.h"

class Cursor;
class Operator;

// Interface for data object passed between operators
class SBlock{
public:	
	SBlock();
	SBlock(const SBlock&);
	virtual ~SBlock();	

	//virtual SBlock* clone(SBlock&) = 0;

	// Iterator access to block
	virtual bool hasNext()=0;
	// returns true if has next value and next value is equal to value_ 
	//virtual bool hasNext(int value_)=0;
	virtual SPair* getNext()=0;
	//virtual Pair* peekNext()=0;

	// Zero indexed, gets the pair at this loc and points that 
	// Cursor to the following pair
	/*virtual Pair* getPairAtLoc(unsigned int loc_)=0;
	virtual int getCurrLoc()=0;

	// return size of block		
	virtual int getSize()=0;
	virtual int getSizeInBits()=0;
	virtual Pair* getStartPair()=0;
	
	virtual void resetBlock()=0;

	// Stream properties
	virtual bool isValueSorted()=0;	
	virtual bool isPosSorted()=0;
	
	// Block properties
	virtual bool isOneValue()=0;
	virtual bool isPosContiguous()=0;
	virtual bool isBlockValueSorted()=0;	
	virtual bool isBlockPosSorted()=0;*/

protected:
};

#endif // SBLOCK_H
