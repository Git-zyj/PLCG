/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_19 = (~-2226228146258726977);
                        arr_10 [i_0] [i_1] [7] [i_3 + 2] = ((7420 ? 7077369775479156836 : ((var_5 % (arr_5 [15] [i_1] [i_2 + 4])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_20 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                        arr_13 [i_4] [i_1] [i_1] [i_4] = ((28935 / ((((arr_11 [i_0] [i_1] [i_0] [17] [i_4]) != 12938993286116394750)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_21 -= (((arr_7 [i_2 + 3] [i_2 + 2] [i_2 + 1] [i_2 - 1]) ? ((197 & (arr_7 [i_0] [i_1] [i_2] [i_5]))) : ((142 % (arr_15 [i_0] [i_1] [i_1] [i_5] [16])))));
                        arr_17 [14] [i_2 + 4] = (arr_5 [i_2 + 3] [i_2 - 1] [i_2 - 1]);
                        arr_18 [16] [11] [i_2 + 4] [i_2 + 4] [i_1] [i_0] &= (8904 - (arr_12 [i_0]));
                    }
                    arr_19 [i_0] [i_1] [17] = arr_14 [i_1];
                    var_22 -= (arr_7 [16] [i_1] [i_2 + 3] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
