#include "MinfBox.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MinfBox
MinfBox::MinfBox()
{
}

MinfBox::~MinfBox()
{
}

BaseBox* MinfBox::CreateObject()
{
	return new MinfBox();
}
