#ifndef OC_CHORDS_H_
#define OC_CHORDS_H_

#include "OC_chords_presets.h"


namespace OC {

typedef OC::Chord Chord;

class Chords {
public:

  static const int NUM_CHORDS;
  static const int NUM_CHORDS_PROPERTIES;

  enum CHORD_SLOTS
  {
    CHORDS_USER_0,
    CHORDS_USER_1,
    CHORDS_USER_2,
    CHORDS_USER_3,
    CHORDS_USER_4,
    CHORDS_USER_5,
    CHORDS_USER_6,
    CHORDS_USER_7,
    CHORDS_USER_LAST
  };

  enum QUALITY 
  {
    CHORDS_FIFTH,
    CHORDS_TRIAD,
    CHORDS_SEVENTH,
    CHORDS_SUSPENDED,
    CHORDS_SUSPENDED_SEVENTH,
    CHORDS_SIXTH,
    CHORDS_ADDED_NINTH,
    CHORDS_ADDED_ELEVENTH,
    CHORDS_UNISONO,
    CHORDS_QUALITY_LAST
  };

  enum CHORDS_TYPE 
  {
    CHORDS_TYPE_MONAD,
    CHORDS_TYPE_DYAD,
    CHORDS_TYPE_TRIAD,
    CHORDS_TYPE_TETRAD,
    CHORDS_TYPE_LAST
  };

  enum VOICING 
  {
    CHORDS_CLOSE,
    CHORDS_DROP_1,
    CHORDS_DROP_2,
    CHORDS_DROP_3,
    //CHORDS_DROP_1P,
    //CHORDS_DROP_2P,
    //CHORDS_DROP_3P,
    CHORDS_SPREAD,
    CHORDS_VOICING_LAST
  };

  enum INVERSION
  {
    CHORDS_INVERSION_NONE,
    CHORDS_INVERSION_FIRST,
    CHORDS_INVERSION_SECOND,
    CHORDS_INVERSION_THIRD,
    CHORDS_INVERSION_LAST 
  };

  static void Init();
  static const Chord &GetChord(int index);
};


extern Chord user_chords[OC::Chords::CHORDS_USER_LAST];
extern Chord dummy_chord;

};

#endif // OC_CHORDS_H_