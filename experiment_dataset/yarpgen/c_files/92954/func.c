/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92954
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
    var_16 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((int) ((((/* implicit */int) var_5)) > (2147483647))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1652673934U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? ((~(((/* implicit */int) arr_0 [(short)7])))) : (((/* implicit */int) (short)-550)))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) var_5);
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        var_19 += ((/* implicit */long long int) ((((arr_3 [i_1] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) | (43031510U)));
        arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])) ? (((/* implicit */long long int) arr_3 [i_1] [i_1 + 1])) : (var_8)))) ? (arr_4 [i_1 - 1] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))));
    }
    var_20 = ((/* implicit */unsigned long long int) -1297666699);
}
