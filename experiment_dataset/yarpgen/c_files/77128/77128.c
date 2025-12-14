/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [1] [i_0] [i_1] &= var_6;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_10 += var_4;
                                arr_16 [i_1] = ((~((var_6 ? ((var_4 ? 16876 : var_7)) : var_2))));
                                arr_17 [i_0] [i_1] = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_11 = (~var_0);
    var_12 = var_9;
    var_13 = ((((max(2366981138, var_2))) ? var_5 : var_4));
    var_14 = (1927986157 ^ var_0);
    #pragma endscop
}
