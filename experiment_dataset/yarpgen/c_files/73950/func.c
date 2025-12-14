/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73950
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
    var_18 = ((/* implicit */unsigned long long int) max((-2972476630397879901LL), (((/* implicit */long long int) ((unsigned int) (~(var_3)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_0 - 1]);
        arr_3 [i_0 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)37)), (-431661222876580308LL))))));
        var_20 = ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) != (min((arr_0 [i_0 - 1]), (((/* implicit */unsigned long long int) var_14)))));
        var_21 += ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_7 [i_1] = var_1;
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) && ((!(((/* implicit */_Bool) 0U))))));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_1]))));
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_12 [i_2])))) ? (max((var_3), (((/* implicit */unsigned long long int) arr_12 [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_24 -= max((((/* implicit */long long int) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6)))))), (((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) & (((((/* implicit */_Bool) arr_11 [17ULL])) ? (arr_12 [i_2]) : (arr_11 [i_2]))))));
    }
    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (max((var_10), (var_10))) : (((/* implicit */int) max(((unsigned short)4263), ((unsigned short)4263))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-1)));
}
