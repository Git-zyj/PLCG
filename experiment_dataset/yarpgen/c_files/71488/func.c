/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71488
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
    var_18 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) -1873401230);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)236);
    }
    var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((min((var_9), (((/* implicit */int) (unsigned short)64498)))), (((/* implicit */int) var_14))))), (max((((/* implicit */long long int) var_6)), (var_3)))));
    var_21 -= ((/* implicit */int) max((var_11), (var_14)));
}
