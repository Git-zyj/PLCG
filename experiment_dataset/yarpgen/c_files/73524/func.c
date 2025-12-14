/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73524
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_0), (var_2))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))) : ((-(((/* implicit */int) var_8))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-30777))));
        var_12 = ((/* implicit */short) min(((~(((/* implicit */int) arr_3 [i_0] [(signed char)15])))), (((((/* implicit */_Bool) max((var_3), (((/* implicit */short) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_6))))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) max((arr_6 [(short)12]), (var_2)))) : ((~(((/* implicit */int) arr_0 [i_1]))))))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((arr_6 [i_1]), (((/* implicit */short) var_5)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_3 [(short)8] [(short)6])) : (((/* implicit */int) arr_3 [(signed char)8] [(signed char)8])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_6 [i_1]), (var_7)))) ? ((+(((/* implicit */int) arr_2 [(signed char)10])))) : (((/* implicit */int) var_10))))) ? (max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)10] [(short)10]))))))) : (((((/* implicit */_Bool) max((var_2), (arr_2 [i_1])))) ? (((/* implicit */int) max((arr_1 [i_1]), (arr_1 [(signed char)1])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_1] [(signed char)10]))))))));
        arr_8 [i_1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (var_1)))))))));
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_15 += ((/* implicit */signed char) max((((((/* implicit */int) var_4)) & (((/* implicit */int) arr_11 [i_2])))), ((+(((((/* implicit */int) arr_9 [(signed char)7])) - (((/* implicit */int) arr_11 [i_2]))))))));
        var_16 = ((/* implicit */signed char) min((var_4), ((short)24176)));
        arr_13 [i_2] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)30798)))))))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_10 [(signed char)1])) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_2])))))) : (((/* implicit */int) var_7))));
    }
    var_17 = var_8;
}
