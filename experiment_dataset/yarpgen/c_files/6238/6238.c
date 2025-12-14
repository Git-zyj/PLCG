/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_12 ^ var_1) ? ((var_8 | (5 ^ 17847159382758831351))) : var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 + 1] [i_1] = (((((arr_4 [i_0] [i_1 - 1]) + 17847159382758831352)) == (((((arr_5 [i_0] [i_1 - 1]) == 599584690950720263))))));
                arr_7 [i_1] [i_1 + 1] = (17847159382758831348 + 1);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_14 = (var_11 - var_11);
                    arr_18 [i_3] [i_2] [i_2] [i_2 - 3] = ((!(((arr_16 [i_2] [i_3] [i_4]) == 42960))));
                    var_15 = -3414820941296294780;
                }
            }
        }

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                arr_24 [i_2] [i_2] = (var_9 + 126);
                arr_25 [i_2] = (9644 % var_1);
                var_16 = (((10 == (arr_14 [i_2] [i_2] [i_2] [i_2]))));
            }
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                arr_28 [i_2] = (-9223372036854775807 - 1);
                arr_29 [i_2] = -29130;
            }
            var_17 = (arr_8 [i_2 - 1] [i_5]);
            arr_30 [i_2] [i_5] = (((arr_16 [i_2] [i_2] [i_2 - 3]) == (arr_23 [i_2 + 1] [i_2 - 3] [i_2 + 1] [13])));
        }
        for (int i_8 = 4; i_8 < 15;i_8 += 1)
        {
            var_18 = ((var_5 == (!599584690950720263)));
            arr_33 [i_8] [i_8] [i_8] |= (((arr_15 [i_8] [i_2] [i_8 - 2] [i_2]) ? (arr_17 [i_2] [i_8 - 2] [i_2 + 1]) : ((var_4 ? var_4 : var_5))));
            arr_34 [i_2] [i_2] [i_2] = (arr_27 [i_2] [i_2 - 3] [i_2]);
            arr_35 [i_2] [i_2] = (arr_17 [i_2 - 3] [i_8] [i_8 - 1]);
        }
    }
    var_19 = (max(-3414820941296294780, var_5));
    #pragma endscop
}
