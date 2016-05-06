/*----------------------------------------------
Programmer: Alberto Bobadilla (labigm@gmail.com)
Date: 2015/06
----------------------------------------------*/
#ifndef __MyOctant_H_
#define __MyOctant_H_
#define MAXOBJECTSINOCTANT 3

#include "RE\ReEng.h"
#include "MyBOManager.h"

//System Class
class MyOctant
{
	int m_nChildCount = 0;
	vector3 m_v3Position;
	float m_fSize = 0.0f;
	vector3 m_v3Size;
	MeshManagerSingleton* m_pMeshMngr = nullptr;
	MyBOManager* m_pBOMngr = nullptr;

	//banana
	std::vector<MyBOClass> m_lNumOfObjs = std::vector<MyBOClass>();

	
public:
	static bool m_bHead;
	MyOctant* m_pChildren = nullptr;
	/*
	Method: MyOctant
	Usage: Constructor
	Arguments: ---
	Output: class object
	*/
	MyOctant(void);
	MyOctant(std::vector<MyBOClass> a_lObjs);
	MyOctant(float a_fSize);
	/*
	Method: MyOctant
	Usage: Copy Constructor
	Arguments: class object to copy
	Output: class object instance
	*/
	MyOctant(MyOctant const& other);
	/*
	Method: operator=
	Usage: Copy Assignment Operator
	Arguments: class object to copy
	Output: ---
	*/
	MyOctant& operator=(MyOctant const& other);
	/*
	Method: ~MyOctant
	Usage: Destructor
	Arguments: ---
	Output: ---
	*/
	~MyOctant(void);

	/*
	Method: Swap
	Usage: Changes object contents for other object's
	Arguments:
	other -> object to swap content from
	Output: ---
	*/
	void Swap(MyOctant& other);

	void Display(void);

	void Subdivide(void);
	void ReleaseChildren(void);
	void CheckForObjs(void);

private:
	/*
	Method: Release
	Usage: Deallocates member fields
	Arguments: ---
	Output: ---
	*/
	void Release(void);
	/*
	Method: Init
	Usage: Allocates member fields
	Arguments: ---
	Output: ---
	*/
	void Init(void);
};


#endif //__MyOctant_H__