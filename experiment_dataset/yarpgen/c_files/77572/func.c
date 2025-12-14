/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77572
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) == (((/* implicit */int) (!(((/* implicit */_Bool) 893996126U)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) (-(arr_0 [i_0])));
        var_20 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1 - 1] = ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1] [i_1 - 1])));
        var_21 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_1 - 1]))));
    }
    for (unsigned short i_2 = 4; i_2 < 23; i_2 += 4) 
    {
        arr_9 [i_2] |= ((/* implicit */unsigned short) max(((-(3400971170U))), (((/* implicit */unsigned int) ((arr_6 [i_2] [i_2]) > (((893996126U) / (arr_6 [(short)13] [i_2]))))))));
        var_22 = ((/* implicit */int) ((unsigned char) 893996123U));
    }
}
