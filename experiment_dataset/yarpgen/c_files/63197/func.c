/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63197
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
    var_20 = var_18;
    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)35))) : (-1LL))) : (max((((/* implicit */long long int) var_15)), (var_12))))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)35))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_17))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_16)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [(short)14] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_1 [i_0] [i_0]))));
        var_25 -= ((/* implicit */signed char) (+(((/* implicit */int) (short)17978))));
        arr_3 [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_0 [(short)8])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)47))) : (5268377268037160644LL))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_26 |= ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [3LL] [3LL])) ? (((/* implicit */int) (short)22765)) : (((/* implicit */int) (short)-22766))))) | (((((/* implicit */_Bool) 5268377268037160622LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6004))) : (5268377268037160644LL))));
        var_27 = ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]));
    }
}
