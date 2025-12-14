/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_4;
    var_15 ^= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 = (-var_13 | 0);
                var_17 *= ((var_10 ? (min(18446744073709551615, -1311868680)) : ((var_11 | ((var_8 ? -1311868680 : 239199091199347003))))));
            }
        }
    }
    var_18 = ((((((var_10 ? var_4 : 0) < (((min(var_4, var_4)))))))));
    #pragma endscop
}
