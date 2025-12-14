/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71547
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 + 2]);
        var_16 &= ((/* implicit */_Bool) ((signed char) arr_0 [i_0 + 1] [i_0 + 2]));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_18 = ((/* implicit */long long int) ((((((/* implicit */int) var_12)) / (((/* implicit */int) arr_2 [i_0] [(signed char)11])))) <= (((/* implicit */int) (_Bool)0))));
        var_19 = ((/* implicit */unsigned int) ((signed char) arr_1 [i_0] [i_0 + 2]));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_20 = ((/* implicit */signed char) arr_5 [i_1]);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((unsigned int) arr_5 [i_1])) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27448))) % (arr_5 [i_1]))))))));
        var_22 = ((/* implicit */long long int) var_5);
    }
    var_23 = ((/* implicit */signed char) var_9);
}
