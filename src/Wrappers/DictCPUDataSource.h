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
// Dictionary DataSource
// Problems: migfer@mit.edu

#ifndef _DICTCPUDATASOURCE_H_
#define _DICTCPUDATASOURCE_H_

#include "IntDataSource.h"
#include "Decoder/IntDecoder.h"
#include "Decoder/DictByteDecoder.h"
#include "Decoder/DictDelayedDecoder.h"
#include "Decoder/ShortCutDictDelayedDecoder.h"
#include "Decoder/DictMultiDecoder.h"

class DictCPUDataSource  : public IntDataSource
{
public:
	// Construct a datasource that :
	//		-access data through am_
	//		-writes blocks using writer_
	DictCPUDataSource(AM* dictTableAM_, AM* entriesAM_, bool valSorted_);
	
	// Copy constructor
	DictCPUDataSource(const DictCPUDataSource&);		
	
	// Destructor
	virtual ~DictCPUDataSource();

	void setDecodingType(int type);

	/*
	// Gets the next value block from the operator 
	virtual Block* getNextValBlock(int colIndex_);
	
	// Skips to the first block with this value
	// Returns NULL if the value is outside the range of the column
	virtual Block* skipToValBlock(int colIndex_, int val_);
	
	
	// Gets the next position block (bitstring of positions) from the operator
	virtual PosBlock* getNextPosBlock(int colIndex_);
	
	// Skips to the first block with this position
	// Returns NULL if the value is outside the range of the column
	virtual PosBlock* skipToPosBlock(int colIndex_, int pos_);
	

protected:
	void initTable();		
	bool checkOutBlock();
	AM* dictTableAM;
	AM* entriesAM;
	bool valSorted;
	bool init;
	
	BitDecoder* bitDecoder;
	IntDecoder* intDecoder;
	BasicBlock* outBlock;	
	map<unsigned int, unsigned int> entryValueMap;
	*/
	AM* dictTableAM;
};

#endif //_DICTCPUDATASOURCE_H_
