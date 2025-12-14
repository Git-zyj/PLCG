/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6558
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
    var_16 = ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((unsigned int) ((signed char) var_11)));
        var_18 = ((signed char) var_4);
        arr_3 [i_0] = ((/* implicit */unsigned int) var_10);
        arr_4 [i_0] = ((/* implicit */short) var_15);
        var_19 = ((/* implicit */unsigned short) ((signed char) var_11));
    }
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */short) var_4)), (var_3)));
    var_21 ^= ((/* implicit */signed char) min((min((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_1))))), (((int) var_0)))), (min((var_14), (min((((/* implicit */int) var_12)), (var_14)))))));
    var_22 = ((/* implicit */int) var_6);
}
