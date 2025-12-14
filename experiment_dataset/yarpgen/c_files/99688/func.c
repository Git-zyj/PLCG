/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99688
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
    var_19 -= ((/* implicit */short) (~(((/* implicit */int) var_9))));
    var_20 ^= ((/* implicit */signed char) 423246746);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [(short)20] |= ((/* implicit */unsigned int) var_9);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))), (((int) arr_0 [i_0] [i_0]))))) ? ((~(((/* implicit */int) ((short) arr_1 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) -1884966137)))))))));
        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)71))));
    }
    for (short i_1 = 4; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = var_10;
        var_22 = (-(((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_1])) + (2147483647))) << (((((/* implicit */int) (unsigned char)71)) - (71)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_4 [1]) : (var_12))))))));
    }
}
