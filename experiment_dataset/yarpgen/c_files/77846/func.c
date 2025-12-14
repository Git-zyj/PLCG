/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77846
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) max((var_14), (((/* implicit */short) (unsigned char)15)))))))) ? (max((((((/* implicit */int) (unsigned char)206)) ^ (((/* implicit */int) var_4)))), (((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned char)63)))))) : (min((((((/* implicit */int) (signed char)7)) << (((((-1527659135) + (1527659166))) - (10))))), (max((var_3), (((/* implicit */int) (unsigned short)58182)))))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)-18983)) ? (arr_2 [i_0 - 1] [i_0 - 4]) : (arr_0 [i_0 - 1]))), (((/* implicit */unsigned int) min((1072101611), (((int) var_14)))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) arr_1 [i_0]))))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2046089982)))))), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned long long int) 2176758099539633551LL)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned int) (unsigned char)32)) ^ (((/* implicit */unsigned int) ((int) -2046089998)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */short) (signed char)37))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_3 [i_1])))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2046089969)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [12] [i_1])))))));
        var_22 -= ((/* implicit */unsigned short) (+((-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))));
    }
}
