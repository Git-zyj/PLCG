/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7560
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
    var_17 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [(unsigned short)16] [i_1 - 1] [i_2]))))) : (((((/* implicit */_Bool) 3924048951U)) ? (((/* implicit */unsigned int) ((arr_8 [i_0] [21LL] [i_0] [(_Bool)1]) ? (((/* implicit */int) (_Bool)1)) : (var_12)))) : (8388604U)))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) min((2147483640), (((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))), (((var_8) ? (((/* implicit */unsigned int) 2147483622)) : (var_10)))))))))));
                }
            } 
        } 
    } 
}
