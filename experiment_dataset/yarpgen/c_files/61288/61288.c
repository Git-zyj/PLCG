/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 -= ((-((min(0, var_16)))));
                                var_19 = (var_2 && var_13);
                            }
                        }
                    }
                    arr_13 [i_0] = var_8;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_20 = (min(var_20, 106));
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_21 |= (var_6 >= var_6);
                            arr_26 [i_8] = var_11;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
