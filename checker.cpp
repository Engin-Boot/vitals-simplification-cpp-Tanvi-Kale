#include <assert.h>

bool vitalsRangeIsOk(float value,int lowerLimit,int upperLimit)
{
    return (value >= lowerLimit && value <= upperLimit);
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
    return (vitalsRangeIsOk(bpm,70,150) && vitalsRangeIsOk(spo2,90,100) && vitalsRangeIsOk(respRate,30,95));
}
        
int main() {

  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
  return 0;
}
