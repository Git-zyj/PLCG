/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8318
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
    var_18 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)26548)) : (((/* implicit */int) (unsigned short)768))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((((/* implicit */_Bool) 511U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38988))) : (4283083142U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_1 [(short)13]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 3])) % ((~(((/* implicit */int) arr_2 [i_0])))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_0 [i_0 - 2]))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)23692))))) ? (max((arr_4 [i_0 - 1] [i_1]), (((/* implicit */int) var_5)))) : (((/* implicit */int) var_1))))));
            }
        } 
    } 
}
