/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76531
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_19 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0])))))));
        var_20 += ((/* implicit */long long int) ((unsigned short) (-(var_10))));
    }
    var_21 = ((/* implicit */short) (-(max((((/* implicit */long long int) ((var_18) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_18))))), (max((((/* implicit */long long int) var_11)), (var_15)))))));
    var_22 &= ((/* implicit */int) var_10);
}
