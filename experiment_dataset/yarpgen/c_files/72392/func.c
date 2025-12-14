/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72392
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
    var_13 = (-(((/* implicit */int) (unsigned char)13)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [16] [16]) : (((/* implicit */int) var_8))))) ? (arr_2 [i_0]) : ((~(arr_2 [i_0])))));
        var_15 *= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) var_8)))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    var_16 |= ((/* implicit */unsigned char) var_0);
}
