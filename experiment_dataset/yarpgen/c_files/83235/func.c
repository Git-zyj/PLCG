/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83235
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) (~(max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_0])))));
                var_14 += ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                var_15 = ((/* implicit */signed char) var_7);
                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (short)27137)) <= (((/* implicit */int) var_11)))))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (3588034116592164652ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (max((var_6), (((/* implicit */unsigned long long int) var_12))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_2);
}
