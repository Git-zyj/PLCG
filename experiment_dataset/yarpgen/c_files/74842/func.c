/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74842
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) arr_0 [i_0]);
        var_12 += max((((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-121)))) < (((/* implicit */int) ((signed char) 549754765312LL)))))), (var_8));
        var_13 = ((/* implicit */long long int) (unsigned short)18473);
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_14 = min((((((/* implicit */int) (signed char)13)) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) var_3)))) - (117))))), (var_6));
        arr_4 [i_1] = ((/* implicit */unsigned short) (signed char)11);
    }
}
