/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79216
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
    var_15 *= ((/* implicit */signed char) max((-8403839421328252498LL), (((/* implicit */long long int) 622063147U))));
    var_16 = ((/* implicit */signed char) ((unsigned long long int) var_7));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) var_6))) % (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -453639461)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)8784))))) : (max((483381703367009423ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 - 1]))))))));
                var_18 += ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0] [i_1 + 1]))), (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 1])), (18446744073709551599ULL)))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */long long int) var_7)) : (arr_0 [i_1 + 2] [i_1 + 1])))) ? (max((18279894759948838472ULL), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (arr_0 [i_1 + 1] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 2]))))))));
                arr_8 [0ULL] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (max((((/* implicit */long long int) var_0)), (arr_0 [0ULL] [i_0]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((var_6) >> (((((/* implicit */int) var_8)) + (142)))));
}
