/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91446
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)37024)) * (((/* implicit */int) var_13))))))) & (((min((((/* implicit */unsigned int) var_4)), (4294967295U))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
    var_21 = ((/* implicit */signed char) var_2);
    var_22 = ((/* implicit */int) var_10);
    var_23 = ((/* implicit */int) var_18);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) var_6))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_9))));
    }
}
