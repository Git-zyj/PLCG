/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96502
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) max((max((arr_1 [i_0]), (arr_1 [i_0]))), (((/* implicit */signed char) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_1)))))))) >> (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) == (2147483647))))))));
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_0 [i_0] [(short)15])), (min((((((/* implicit */_Bool) arr_2 [2ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_8))), (max((9223369837831520256ULL), (((/* implicit */unsigned long long int) 15U))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_1))))) & (max((((/* implicit */long long int) 131071)), (arr_5 [i_1 - 1] [i_1 + 1])))))), (min((((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) var_6))))));
        var_22 = ((/* implicit */int) var_9);
        var_23 = ((/* implicit */unsigned int) 13ULL);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) arr_1 [i_2]))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_9);
        var_25 |= ((/* implicit */short) (+(((/* implicit */int) var_12))));
    }
}
