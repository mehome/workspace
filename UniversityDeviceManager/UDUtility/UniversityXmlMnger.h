#pragma once

#include "HeaderData.h"

class UD_EXPORT_CLASS UniversityXmlMnger
{
public:
	UniversityXmlMnger(void);
	~UniversityXmlMnger(void);

	void SetXmlPath(CString csPath);

	bool GetUniversityList(CSNameVec& lstVec);
	CString GetUniversityNameByIndex(int index);
	bool InsertUniversityName(CString csName);
	bool DeleteUniversityName(CString csName);
	bool DeleteUniversityName(int index);
	bool ModifyUniversityName(CString csName);
	bool ModifyUniversityName(int index, CString csName);

private:
	CString m_csXmlPath;
};

