/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94241
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
    var_11 = ((/* implicit */int) var_2);
    var_12 = ((/* implicit */_Bool) max((var_12), (((((/* implicit */int) var_10)) < (((/* implicit */int) var_5))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [10LL])))))));
        var_14 *= ((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) min((arr_0 [(_Bool)1]), (((/* implicit */short) arr_2 [(unsigned short)14] [(unsigned short)14])))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((arr_5 [i_1] [i_1 - 1]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        var_16 = ((/* implicit */signed char) var_3);
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [24])) - (((/* implicit */int) arr_0 [(signed char)12])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_4 [i_1 - 1])) <= (var_9)));
    }
}
