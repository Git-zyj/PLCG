/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80537
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
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) ((var_10) <= (((/* implicit */int) var_1))))) > (max((var_10), (((/* implicit */int) var_1))))))), (((int) ((signed char) var_8)))));
    var_13 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) var_3);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
        var_15 = var_6;
        var_16 = ((/* implicit */_Bool) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6))))));
    }
    var_17 = var_3;
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((unsigned int) var_0))))) || (var_3)));
}
