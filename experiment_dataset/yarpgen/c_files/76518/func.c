/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76518
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
    var_15 = ((min((((var_0) / (var_7))), (min((var_6), (((/* implicit */int) var_2)))))) / (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_12))))));
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (-1513724178) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((short) var_5)))))) && (((/* implicit */_Bool) var_10))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) arr_1 [i_0])))))))));
        var_19 = ((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0]) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_8)))));
        arr_3 [i_0] = min((((((/* implicit */_Bool) arr_2 [i_0])) ? (min((-452498258), (var_0))) : (var_6))), ((-(((/* implicit */int) (_Bool)0)))));
        arr_4 [i_0] = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_2 [i_0]) : (((/* implicit */int) (signed char)-3)))), (((var_12) ? (var_0) : (arr_0 [i_0]))))), (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        arr_7 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned short)30815))))) ? (arr_5 [i_1 - 2]) : (((/* implicit */int) arr_6 [i_1])));
        var_20 = ((((/* implicit */int) arr_6 [i_1])) - (((((/* implicit */_Bool) -866616694)) ? (var_7) : (arr_5 [i_1 + 1]))));
        var_21 *= ((/* implicit */short) ((((/* implicit */int) (unsigned char)92)) % (((((/* implicit */_Bool) 1312987911)) ? (-1701556003) : (arr_5 [i_1])))));
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_1 + 1]) : (((arr_5 [i_1]) | (((/* implicit */int) (unsigned char)0))))));
    }
    var_22 = var_8;
}
