#include "StdAfx.h"
#include "stdafx.h"
#include "composant1.h"
#include "composant2.h"
#include "bloc.h"
#include <stdlib.h>
#include <vector>
#include <iostream> 

int _tmain(int argc, _TCHAR* argv[])
{
	UTXO** utxo;
	int j = 0;
	// On reçoit les blocs du composant 1 avec getBlocs
	std::vector<Bloc> blocs = getBlocs();

	utxo = getAllUTXO(blocs);


	
	system("pause");
	return 0;
}