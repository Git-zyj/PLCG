/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75017
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
    var_15 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) << (((((/* implicit */int) arr_2 [i_0] [i_0])) - (13714)))));
        var_17 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_6 [(short)6] [(short)6] |= ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        var_18 = ((/* implicit */_Bool) max((var_18), ((!(((/* implicit */_Bool) arr_0 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (+(2891196177U)));
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3583875656U))));
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 1403771112U)) ? (((arr_9 [i_2]) | (min((arr_9 [i_2]), (arr_9 [i_2]))))) : (1403771139U)));
        arr_10 [i_2] = ((/* implicit */long long int) (+(((unsigned int) arr_9 [i_2]))));
    }
}
