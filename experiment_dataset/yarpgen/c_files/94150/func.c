/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94150
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_11))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        var_17 = ((/* implicit */int) ((signed char) var_9));
        var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_1)), (18101342494578709742ULL)));
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 935285447)), (var_1)))) ? (((/* implicit */long long int) (~(549722256U)))) : (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1)));
    var_20 = ((/* implicit */int) var_6);
}
