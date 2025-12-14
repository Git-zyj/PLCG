/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81303
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)32767))));
        var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) var_1)))))), (((/* implicit */int) arr_1 [i_0]))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) | (((/* implicit */int) arr_0 [(unsigned short)4] [i_0]))));
    }
    for (short i_1 = 3; i_1 < 22; i_1 += 1) 
    {
        arr_5 [(short)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2])) ? ((-(((/* implicit */int) arr_4 [i_1 - 1])))) : ((-(((/* implicit */int) ((short) var_13)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_4))));
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_8))))));
        var_17 = ((unsigned short) arr_0 [i_2] [(unsigned short)16]);
        var_18 = var_12;
        var_19 = var_6;
        arr_9 [i_2] [i_2] = ((/* implicit */signed char) arr_3 [i_2] [i_2]);
    }
    for (unsigned short i_3 = 2; i_3 < 24; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) var_10)), (var_3))))))) ? ((-(((/* implicit */int) (short)-17157)))) : (((/* implicit */int) ((short) arr_10 [i_3])))));
        var_21 = ((/* implicit */short) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_2))))))));
        var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17154)) ? (((/* implicit */int) (short)8631)) : (((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */int) min((var_8), (((/* implicit */short) var_6))))) : (((/* implicit */int) arr_10 [i_3]))))));
    }
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_13))));
}
