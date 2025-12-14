/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60746
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
    var_19 = ((/* implicit */unsigned long long int) var_18);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 *= ((/* implicit */unsigned char) ((((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-14345)))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((var_12) != (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) var_2))))))))) == (((/* implicit */int) arr_3 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */short) min((((long long int) var_15)), (((/* implicit */long long int) arr_1 [i_0]))));
    }
}
