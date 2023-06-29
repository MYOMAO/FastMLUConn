#include "HepMC3/Data/GenEventData.h"
#include "HepMC3/Data/GenRunInfoData.h"
/* To generate dictionaries for compatibility with HepMC3.0*/
namespace HepMC
{
typedef HepMC3::GenEventData GenEventData;
typedef HepMC3::GenRunInfoData GenRunInfoData ;
typedef HepMC3::GenParticleData GenParticleData ;
typedef HepMC3::GenVertexData GenVertexData ;
typedef HepMC3::FourVector2 FourVector2 ;
typedef HepMC3::Units2 Units2 ;
typedef HepMC3::Setup Setup ;
}
