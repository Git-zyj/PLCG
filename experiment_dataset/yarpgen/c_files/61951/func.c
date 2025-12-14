/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61951
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
    var_13 = ((/* implicit */unsigned short) var_3);
    var_14 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)54734))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_7))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28504))) + (var_11))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) >> (((/* implicit */int) (!(var_5))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((max((arr_0 [i_0 + 2] [i_0 + 2]), (arr_0 [i_0 - 1] [i_0 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (short)28492)) - (28488))))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0] [i_0 + 1])))) ? ((+(arr_0 [i_0] [i_0 - 1]))) : (((arr_0 [i_0] [i_0 + 2]) - (arr_0 [i_0 + 2] [i_0 + 1])))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) (-((~(arr_5 [i_1 - 1])))));
        arr_7 [20LL] = ((/* implicit */_Bool) max(((~(arr_6 [i_1 - 1]))), (((((/* implicit */unsigned long long int) 262143U)) & (((((/* implicit */_Bool) (short)-26236)) ? (arr_6 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1 + 1])))))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1 - 1])) ? (((/* implicit */unsigned int) arr_5 [i_1])) : (arr_0 [i_1] [i_1])))) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1])))));
        var_18 = ((/* implicit */unsigned short) (((!(arr_2 [i_1] [i_1 + 1]))) ? (((unsigned int) arr_2 [i_1] [i_1 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1 + 1])))));
    }
}
