/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60497
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
    var_18 += ((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_17))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [(short)14]);
        var_19 = ((_Bool) ((12465308081648372669ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = min((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [19LL]))) : (arr_3 [i_1] [i_1]))), (((/* implicit */long long int) ((arr_4 [i_1] [i_1]) <= (min((9223372036854775793LL), (arr_3 [i_1] [i_1])))))));
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_1] [i_1])), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) var_3)) : (arr_4 [i_1] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */long long int) ((var_17) <= (2296338333U)))), (max((arr_3 [i_1] [i_1]), (((/* implicit */long long int) arr_1 [i_1] [i_1]))))))));
    }
    var_21 += ((/* implicit */unsigned int) var_8);
    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) 161849758))));
}
