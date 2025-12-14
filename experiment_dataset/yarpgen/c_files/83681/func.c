/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83681
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
    var_20 |= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) <= (max((var_3), (var_3)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (var_12)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) -8755988589734711071LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))) / (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned char) var_4)))))));
                arr_5 [i_1] [i_0] &= ((/* implicit */short) arr_0 [13LL]);
            }
        } 
    } 
}
