/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74201
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        arr_2 [(signed char)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)49)) || (((/* implicit */_Bool) var_6))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_19 -= ((/* implicit */unsigned int) ((var_14) << (((arr_4 [i_1]) - (3571358827U)))));
        arr_7 [i_1] = ((/* implicit */int) arr_3 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */long long int) var_9);
    }
}
