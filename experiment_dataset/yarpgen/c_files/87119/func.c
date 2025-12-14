/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87119
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 += ((/* implicit */unsigned char) ((long long int) max((((/* implicit */unsigned long long int) ((long long int) var_6))), (((unsigned long long int) 3896128076U)))));
    var_17 = ((/* implicit */unsigned int) min((max((max((((/* implicit */unsigned long long int) var_13)), (1207434587140107057ULL))), (((/* implicit */unsigned long long int) ((unsigned char) var_4))))), (min((min((((/* implicit */unsigned long long int) 9052021355876934969LL)), (var_9))), (((/* implicit */unsigned long long int) var_3))))));
    var_18 = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */unsigned char) (!(var_5)))), (((unsigned char) var_2)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (-(((((_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) ((signed char) -9177584253679589036LL)))))));
                var_19 ^= ((/* implicit */long long int) ((short) ((_Bool) (~(var_9)))));
            }
        } 
    } 
}
