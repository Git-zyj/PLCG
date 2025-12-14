/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64275
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
    var_14 = ((/* implicit */long long int) max((var_14), (var_3)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) var_4))));
        var_16 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3960816659U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)24819))))) : (((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24819))) : (var_1))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [(unsigned char)0]);
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)90)), (arr_1 [i_0])))), ((+(var_10)))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_7 [i_1] [10] = ((/* implicit */unsigned short) min(((-(((2633674454U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (1661292841U) : (var_1)))) > (((unsigned long long int) var_1)))))));
        arr_8 [i_1] = ((/* implicit */short) (-(((((334150637U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)24826))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
        arr_9 [i_1] [i_1] &= ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))), (arr_0 [i_1])));
        var_17 = ((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */_Bool) (short)-24820)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))) : (1661292822U))) + (((/* implicit */unsigned int) var_0)))));
    }
}
