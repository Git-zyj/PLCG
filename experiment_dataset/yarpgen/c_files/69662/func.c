/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69662
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
    var_13 |= ((/* implicit */_Bool) 2972230918U);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)11])) ? (((/* implicit */long long int) 1322736386U)) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_0]))));
    }
    var_14 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (2972230887U) : (var_0)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
}
