/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96619
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
    var_17 ^= ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */int) (_Bool)1);
                var_19 *= ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) var_15)) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56263))) : (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
            }
        } 
    } 
}
