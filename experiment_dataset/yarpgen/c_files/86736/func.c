/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86736
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
    var_14 = var_10;
    var_15 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_3 [(short)0] = ((short) ((short) arr_0 [i_0]));
        var_16 = ((/* implicit */short) max((var_16), (arr_0 [(short)4])));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_17 = var_3;
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_18 = var_8;
            arr_9 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */int) arr_2 [i_1])), ((-(((/* implicit */int) var_13))))));
            var_19 = arr_7 [i_1];
            var_20 = arr_5 [i_1] [i_2];
        }
        for (short i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            var_21 = (short)28098;
            arr_12 [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((((short) (short)32767)), (min((var_13), (var_1)))))) ? ((~(((/* implicit */int) max((var_4), (arr_7 [i_3])))))) : (((/* implicit */int) var_0))));
        }
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)6385))))) ? (((/* implicit */int) (short)28098)) : (((/* implicit */int) ((short) var_2)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_14 [i_4]))));
        arr_16 [i_4] = ((short) var_4);
    }
    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        arr_19 [i_5] [i_5] &= ((short) (!(((/* implicit */_Bool) max((var_10), (arr_8 [i_5] [i_5]))))));
        arr_20 [i_5] [i_5] = max((((short) (-(((/* implicit */int) var_11))))), (((short) max((var_8), (var_12)))));
    }
    var_23 -= max((var_5), ((short)-32255));
}
