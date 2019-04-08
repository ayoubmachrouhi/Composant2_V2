#pragma once
#ifndef _BLOC_H

//
// bloc.h  version 1.0
//
// projet blockchain M2IF 2016
//

#define KEY_SIZE 4 // taille en byte des cle (publique, privee)

class TXI
{
	public:
		unsigned int nBloc;
		unsigned int nTx;
		unsigned int nUtxo;
		unsigned char signature[64];
};

class UTXO
{
	public:
		float montant;
		unsigned char dest[KEY_SIZE];  //compte destinataire
		unsigned char hash[64];    // hash(nBloc,nTx,nUTXO,montant,destinataire) pour securisation de l'UTXO
};

class TX { // transaction standard
	public :
		TXI txi[4];
		UTXO utxo[2];
};

class TXM { // transaction du mineur
	public:
		UTXO utxo[1];
};

class Bloc
{
	public:
		char hash[64]; // hash des autres champs

		char previous_hash[64];
		unsigned int nonce;
		int num; // numero du bloc, commence a zero
		TX tx1; //  transaction du bloc
		TXM tx0; // transaction du mineur (coinbase)
};

#endif