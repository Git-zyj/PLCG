/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75424
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((var_2) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_2 [i_0])))))))));
        var_16 += ((/* implicit */unsigned int) arr_0 [i_0 - 4]);
        var_17 = ((/* implicit */unsigned short) (~(arr_0 [i_0])));
        var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 3209911245U)))) ? ((-(((/* implicit */int) (unsigned char)7)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((1085056035U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249)))))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))), ((-(arr_5 [i_1] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) arr_4 [i_1])))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (arr_4 [i_1])))))))) : (((((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((arr_4 [i_1]) ? (((/* implicit */unsigned int) arr_5 [i_1] [i_1])) : (1085056050U))) : (((/* implicit */unsigned int) arr_5 [i_1 - 1] [i_1 + 1]))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned char) 1194147081U)))));
        var_22 = ((/* implicit */unsigned long long int) arr_5 [13ULL] [13ULL]);
    }
}
