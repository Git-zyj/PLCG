/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80437
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
    var_20 = ((/* implicit */unsigned long long int) (unsigned char)49);
    var_21 = ((/* implicit */unsigned long long int) var_5);
    var_22 = ((/* implicit */short) max((((/* implicit */unsigned short) (signed char)48)), ((unsigned short)7936)));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((2949007969U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) min((4467570830351532032ULL), (((/* implicit */unsigned long long int) -134217728))));
            }
        } 
    } 
    var_24 -= ((/* implicit */int) var_0);
}
