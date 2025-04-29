#include <cmath>

typedef float vec_t;
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];

#define VOLUME_BOUNDS > | < 0.1f

class Volume
{
public:
 Volume();
 ~Volume();
 
 virtual void CreateVolume(vec3_t * vMins, vec3_t * vMaxs, int * id) = 0;
 virtual void TransformVolume(vec3_t * mins, vec3_t * maxs) = 0;
 virtual void ScaleVolume(vec3_t * mins, vec3_t * maxs) = 0;
 virtual int VolumeType() = 0;
};