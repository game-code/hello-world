#include "StdAfx.h"
#include "SampleFactory.h"

SampleFactory * SampleFactory::m_pSampleFa = NULL;

SampleFactory::SampleFactory(void)
{
}

SampleFactory::~SampleFactory(void)
{
	delete m_pSampleFa;
	m_pSampleFa = NULL;
}

SampleFactory * SampleFactory::GetInstance()
{
	if (m_pSampleFa == NULL)
	{
		m_pSampleFa = new SampleFactory();
	}

	return m_pSampleFa;
}