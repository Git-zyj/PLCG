/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97689
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_6))));
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_0)), (var_6)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) var_3);
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (arr_0 [i_0])));
        var_14 -= ((/* implicit */short) ((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (((/* implicit */int) var_10))));
    }
    var_15 = ((/* implicit */short) min(((_Bool)1), (((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967290U)) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) >= (var_3)))));
}
