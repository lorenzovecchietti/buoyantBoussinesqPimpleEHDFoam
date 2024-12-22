#include "dimensionedScalar.H"
#include "IOdictionary.H"
#include "IOobject.H"

// Creazione del dizionario EHDproperties
IOdictionary EHDproperties
(
    IOobject
    (
        "EHDproperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ,
        IOobject::NO_WRITE
    )
);

// Dichiarazione delle variabili con inizializzazione aggiornata
dimensionedScalar rho0
(
    "rho0", 
    dimMass/dimVolume, 
    laminarTransport
);

// Permittività
dimensionedScalar epsilon0
(
    dimensionedScalar("epsilon0", EHDproperties)
);

// Mobilità ionica
dimensionedScalar mobil 
(
    dimensionedScalar("mobil", EHDproperties)
);

