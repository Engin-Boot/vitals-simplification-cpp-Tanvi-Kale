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

int main() {
  assert(vitals_bpm(80) == true);
  assert(vitals_spo2(95) == true);
  assert(vitals_respRate(60) == true);
  
    return 0;
}
