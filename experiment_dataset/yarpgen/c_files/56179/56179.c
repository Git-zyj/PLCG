/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((-24 > (min(262143, (min(18446744073709551615, 262143))))));
                    var_20 = (((arr_5 [i_0] [i_1]) ? var_10 : (var_8 - var_10)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                arr_15 [i_3] = ((max(262154, 2868978162312665530)) <= 0);
                var_21 = (max((((~-5920) && (!var_17))), ((!(var_10 && var_1)))));
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_21 [i_3] [i_4] [8] [i_4] [i_4] = ((var_17 & (((var_13 << (var_7 - 390674352))))));
                            arr_22 [i_3] [10] [i_6] [8] &= (max(2868978162312665523, 262161));
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_16, var_4));
    #pragma endscop
}
