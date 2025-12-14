/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56663
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
    var_10 = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) + (-1731269818)))) > (2157327936U)))) : (((/* implicit */int) ((short) arr_1 [i_0 - 2] [i_0])))));
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) arr_1 [i_0] [i_0]))));
    }
    var_12 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)244)) - (((/* implicit */int) (short)-4973))));
}
