/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98345
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))));
        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 + 1])) >= (((/* implicit */int) arr_1 [i_0 + 1]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 2]))));
        var_15 = ((/* implicit */int) (+(var_7)));
    }
    var_16 -= ((((/* implicit */int) var_4)) > (((((/* implicit */int) var_12)) & (((((/* implicit */int) var_5)) & (((/* implicit */int) var_12)))))));
}
