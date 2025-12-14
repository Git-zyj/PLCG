/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [16] [16] [i_3] = (arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 1]);
                            arr_11 [1] |= ((((max(0, (arr_4 [i_2 - 3])))) ? (arr_5 [11]) : var_5));
                            var_12 = (max((((arr_5 [i_2 + 2]) <= (arr_5 [i_2 - 1]))), (arr_5 [i_2 - 1])));
                        }
                    }
                }
                var_13 ^= ((var_5 <= (arr_4 [i_0])));
                var_14 *= 19568;
                var_15 = (~var_10);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_4] [4] [i_4] [5] [i_4] = (max((max((arr_14 [i_4] [i_6 + 2] [9] [i_6] [i_6 + 2]), (45963 / -27891))), (((arr_20 [i_0] [i_0] [i_0] [1] [i_0]) ? (arr_19 [i_4] [i_6 + 2] [i_6 + 2] [i_0] [i_0] [i_4]) : 27905))));
                                arr_22 [i_0] [i_0] [i_0] [i_4] [11] [i_4] = (max(30231, 1));
                                arr_23 [i_4] [i_4] [i_5] [15] = (max((arr_8 [1] [i_4] [i_4] [9]), (arr_8 [i_6 + 2] [i_0] [i_1] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_8, (((!((max(var_5, var_6))))))));
    #pragma endscop
}
