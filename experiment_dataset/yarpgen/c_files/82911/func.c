/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82911
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
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) arr_2 [i_0 + 2] [i_0])))));
        var_21 = ((/* implicit */int) ((((((long long int) 1321558938U)) + (((/* implicit */long long int) (-(arr_1 [0U])))))) + (((/* implicit */long long int) arr_1 [(short)0]))));
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0 - 1] [i_0]) : (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])))))))));
    }
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_19))));
}
