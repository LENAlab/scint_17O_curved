//--------------------------------------------------------------------
// PhysicsList.hh
//
// Description: The physics list include file, from TestEm4
// Changes: 7/18/05 None yet
//--------------------------------------------------------------------

#ifndef PhysicsList_h
#define PhysicsList_h 1

#include "G4VUserPhysicsList.hh"
#include "G4VPhysicsConstructor.hh"
#include "globals.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class PhysicsList: public G4VUserPhysicsList
{
  public:
    PhysicsList();
   ~PhysicsList();

  protected:
 
    void SetCuts();
    
  protected:
    // these methods Construct particles 
  void ConstructBaryons();
    void ConstructBosons();
    void ConstructLeptons();

  protected:
  // these methods Construct physics processes and register them
    void ConstructGeneral();

public:
    // Construct particle and physics
    virtual void ConstructParticle();
    virtual void ConstructProcess();
    

private:

  G4VPhysicsConstructor* emPhysicsList;

  void AddIonGasModels();


};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif



