/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67678
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) min((((arr_1 [i_0 + 2]) || (arr_1 [i_0 + 2]))), ((!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))));
        var_18 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_2 [i_0 + 1])) / (((/* implicit */int) arr_0 [i_0 + 1]))))));
        var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_11)))) ? (((var_1) << (((var_2) - (2850926757U))))) : (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) arr_0 [(short)1]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) <= (((/* implicit */int) arr_0 [i_0 - 1])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1]))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_15))));
    }
    var_22 &= ((/* implicit */short) var_11);
    var_23 = ((/* implicit */long long int) (+(var_4)));
    var_24 ^= min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) var_5))) > (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (min((var_9), (var_15))))));
}
