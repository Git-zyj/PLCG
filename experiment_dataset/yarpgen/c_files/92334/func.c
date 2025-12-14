/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92334
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            var_14 ^= ((/* implicit */signed char) (short)1148);
            arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)7);
            arr_6 [i_0] [i_0] = ((/* implicit */short) var_6);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_2]);
            arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_6))) | (((((/* implicit */int) var_5)) / (((/* implicit */int) (signed char)-7))))));
            arr_11 [i_0] [i_0] [(unsigned short)4] |= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_7 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        }
        var_15 = ((/* implicit */_Bool) arr_1 [i_0 - 1]);
    }
    var_16 = ((/* implicit */unsigned char) (-((((-(((/* implicit */int) (signed char)-4)))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) var_10))))))));
}
