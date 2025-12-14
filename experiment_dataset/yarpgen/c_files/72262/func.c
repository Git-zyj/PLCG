/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72262
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
    var_16 = (short)64;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_0);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)-27163))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (max((((/* implicit */int) arr_0 [(_Bool)1] [i_0])), (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-24833))))))));
        var_17 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        arr_6 [(short)4] [(short)4] = ((/* implicit */short) var_0);
        arr_7 [i_1 - 1] = ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (short)-24841)) : (((/* implicit */int) (_Bool)1)))) > (((((/* implicit */_Bool) (short)-24841)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))));
    }
    var_18 = ((/* implicit */_Bool) var_6);
}
