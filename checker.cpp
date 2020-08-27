#include <assert.h>

bool vitals_bpm(float bpm)
{
    if(bpm < 70 || bpm > 150) {
    return false;
    }
  return true;
}
  
bool vitals_spo2(float spo2)
{
  if(spo2 < 90) {
  return false;
  }
  return true;
}
  
bool vitals_respRate(float respRate)
{
  if(respRate < 30 || respRate > 95) {
  return false;
  }
  return true;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  if(bpm < 70 || bpm > 150) {
    return false;
  } else if(spo2 < 90) {
    return false;
  } else if(respRate < 30 || respRate > 95) {
    return false;
  }
  return true;
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
