/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94800
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_0 [i_0] [i_0]))))) : (max((((/* implicit */unsigned int) arr_1 [i_0])), (var_0)))))) ? (max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_14))))));
        var_19 *= ((/* implicit */unsigned int) var_10);
        var_20 *= ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) min(((~(((/* implicit */int) var_16)))), (((/* implicit */int) var_7))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_0))));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) arr_9 [i_2]);
        var_22 = ((/* implicit */short) arr_9 [i_2]);
    }
    var_23 = ((/* implicit */int) var_11);
}
