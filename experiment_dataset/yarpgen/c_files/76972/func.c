/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76972
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */int) max(((unsigned short)16320), (((/* implicit */unsigned short) var_0)))))))), (var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_4 [(short)15] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0])) >= (((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */_Bool) (signed char)(-127 - 1));
    }
}
