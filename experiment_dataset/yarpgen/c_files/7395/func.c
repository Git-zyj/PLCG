/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7395
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (-(arr_1 [i_0])));
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
    }
    for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        arr_7 [i_1 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) var_11))));
        var_19 = ((/* implicit */int) var_12);
        var_20 ^= (+(((arr_6 [i_1 - 2]) ? (((/* implicit */int) arr_6 [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 + 1])))));
        var_21 *= ((/* implicit */unsigned int) var_10);
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-19479))));
}
