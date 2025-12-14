/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87268
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((var_7), (var_7))))) - (var_4)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) | (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_14 += var_3;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_15 ^= arr_0 [i_0] [i_0 + 1];
        var_16 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) == (var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [(unsigned char)18]))))) : (((((/* implicit */_Bool) arr_2 [14U])) ? (var_9) : (arr_2 [i_0]))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1)))) | (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_2 [i_0])))))));
    }
    for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_1] [i_1]))))), (((var_10) - (((/* implicit */unsigned long long int) arr_4 [2U]))))))) ? (var_11) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_11) : (((/* implicit */long long int) arr_2 [(short)7]))))) ? (((/* implicit */long long int) arr_2 [i_1])) : (var_4))))))));
        var_18 += ((/* implicit */unsigned short) ((min((arr_3 [i_1] [i_1 - 2]), (arr_3 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (min((((unsigned long long int) var_3)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 1])) : (var_10)))))));
    }
    var_19 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_3)) ? (var_11) : (var_4))) > (min((((/* implicit */long long int) var_7)), (var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))), (max((((/* implicit */unsigned long long int) var_6)), (var_10)))))));
    var_20 = ((/* implicit */unsigned int) var_11);
}
