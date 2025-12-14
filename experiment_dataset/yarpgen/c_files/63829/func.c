/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63829
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_18 = (_Bool)0;
        arr_2 [i_0] = ((/* implicit */long long int) ((arr_1 [i_0]) != (arr_1 [i_0])));
        var_19 = var_2;
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((arr_3 [i_1] [i_1]) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))))));
        arr_7 [i_1] [i_1] &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((unsigned long long int) arr_6 [0ULL] [0ULL])))), (((/* implicit */unsigned long long int) var_6))));
        arr_8 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (arr_5 [i_1]))), (((/* implicit */unsigned long long int) var_16))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_21 ^= ((/* implicit */long long int) ((((((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [2ULL]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((arr_0 [i_2] [i_2]), (((/* implicit */short) (_Bool)1))))))) >> (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((7749620337816018372LL) != (((/* implicit */long long int) arr_9 [i_2]))))) : (arr_10 [i_2])))));
        arr_11 [i_2] = ((/* implicit */unsigned int) arr_0 [i_2] [i_2]);
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min(((_Bool)1), (var_17))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (571494938587266674ULL)))))))) : (((((/* implicit */_Bool) 7749620337816018372LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) : (var_13)))));
}
