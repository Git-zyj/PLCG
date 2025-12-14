/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_11 = var_9;

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_12 = (var_9 >= var_6);
                        arr_13 [i_0] [1] [i_1] [i_0] = var_4;
                    }
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_13 = (((var_4 - var_3) - (var_2 < var_8)));
                    var_14 |= var_7;
                    var_15 &= (((1958370526 == 7231) | ((((var_3 && var_9) >= (1958370513 ^ 31))))));
                    arr_16 [16] [i_0] [i_1] [i_0] = (((-28609 ^ var_7) || (var_2 + var_8)));
                    var_16 *= var_6;
                }
                arr_17 [i_0] = var_2;
            }
        }
    }
    var_17 = var_5;
    var_18 -= ((var_10 != (var_0 ^ var_3)));
    var_19 = var_6;
    var_20 = ((var_9 >> (((var_5 % var_8) - 87))));
    #pragma endscop
}
