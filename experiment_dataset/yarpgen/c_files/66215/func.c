/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66215
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (-(0U))))) ? (min((arr_0 [i_0 + 2] [i_0 - 1]), (arr_0 [(unsigned char)10] [i_0 + 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
        var_20 = ((/* implicit */unsigned int) (+(max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 1])))));
        var_21 |= ((/* implicit */unsigned char) var_13);
    }
    var_22 = ((/* implicit */int) var_9);
    var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) (-(min((((/* implicit */int) var_15)), (var_14)))))) : (var_18)));
}
