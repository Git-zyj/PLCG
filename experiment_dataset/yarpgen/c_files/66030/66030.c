/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -16073;
    var_18 |= (min((!-var_9), ((((min(var_8, var_4))) ? ((min(41, (-32767 - 1)))) : ((var_1 << (var_3 - 12)))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (((-127 - 1) > (((!(!3642550887))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 = var_12;
                        var_20 = (min(var_20, ((min(95, -14441)))));
                    }
                }
            }
        }
        var_21 = ((127 & (min(((var_12 ? var_9 : var_13)), 1))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = (max(var_22, ((((-32767 - 1) ? 65535 : 1)))));
        arr_16 [i_4] = 1;
    }
    var_23 ^= var_9;
    #pragma endscop
}
