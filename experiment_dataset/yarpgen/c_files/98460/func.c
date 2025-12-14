/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98460
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 2555959912U)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) var_16))));
                var_21 = (~(((int) (+(var_10)))));
                var_22 ^= ((/* implicit */int) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) -581700321)) : (6992223706007316046ULL))), (arr_1 [i_1] [i_1])));
            }
        } 
    } 
    var_23 = var_16;
    var_24 = ((/* implicit */signed char) var_7);
}
