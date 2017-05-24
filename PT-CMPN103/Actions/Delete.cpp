#include "Delete.h"



Delete::Delete(ApplicationManager* pApp)
	:Action(pApp) {
}

void Delete::ReadActionParameters(){
}

void Delete::Execute()
{
	int size;
	Output* pOut = pManager->GetOutput();
	pManager->GetSelectedFigCount(size);
	if (size == 0)
	{
		pOut->PrintMessage("ERROR !!! the chosen operation will make no change ");
		Sleep(800);
	}
	else
	{
		pManager->deleteSelected();
		pManager->UpdateInterface();
	}

}
Delete::~Delete()
{
}
