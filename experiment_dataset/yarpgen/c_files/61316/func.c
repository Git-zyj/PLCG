/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61316
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) arr_1 [i_0]);
        var_18 = ((/* implicit */unsigned long long int) min((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0])))))));
        var_19 = ((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) ((var_5) <= (((/* implicit */long long int) var_10)))))))), (max((max((((/* implicit */long long int) var_14)), (var_16))), (((/* implicit */long long int) var_11))))));
    var_21 = ((/* implicit */signed char) var_0);
    var_22 = ((/* implicit */unsigned int) var_6);
    var_23 = var_16;
}
