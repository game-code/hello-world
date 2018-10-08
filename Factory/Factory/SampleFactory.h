#pragma once
#include "Obj.h"
#include <list>
using namespace std;

class SampleFactory
{
public:
	~SampleFactory(void);
public:
	static SampleFactory *GetInstance();
	void AddObj(Obj * pobj);
protected:
	SampleFactory(void);
private:
	static SampleFactory *m_pSampleFa;
	list<Obj *> m_pObj;
};

