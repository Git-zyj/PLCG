/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_18 = (max(var_18, ((((arr_1 [i_0] [i_1 + 1]) == (arr_1 [i_1] [i_1 + 1]))))));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((((((arr_2 [i_1]) ? var_12 : (arr_2 [i_0])))) ? ((11521740393052910119 ? 74 : 1539225829213323190)) : (arr_3 [i_1 + 1]))))));
                            var_20 -= (0 >= 46644);
                            var_21 = ((var_17 ? (arr_10 [i_1 - 1]) : 927561645));
                        }
                    }
                }
                var_22 = (max(var_22, -57127));
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_23 = (arr_6 [10] [i_6] [i_5] [i_1]);
                            arr_19 [i_6] [i_7] [i_0] [i_6] [i_5] [i_0] [i_6] = (((arr_9 [i_1] [i_1] [i_1] [7] [i_1 + 2]) ? (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1 + 1]) : (arr_9 [i_1] [i_1] [i_1] [10] [i_1 + 1])));
                            arr_20 [i_6] [i_6] [i_6] [i_5] [i_1 + 1] [i_6] = (arr_8 [i_0] [i_0] [i_6]);
                        }
                    }
                }
            }
            arr_21 [i_0] &= (((arr_1 [i_1 + 2] [i_1 + 1]) ? 10216 : (var_2 - var_15)));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_24 = (min(var_24, (~-1)));
            var_25 += ((0 ? 1 : 75));
            arr_26 [i_0] = (((((1235024946 ? 1 : 51579))) ? var_5 : (arr_25 [i_0] [i_0])));
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                {
                    var_26 = (arr_11 [i_0] [i_0] [i_9] [i_9] [i_10] [i_10 + 1] [i_10]);
                    var_27 = 70;
                    var_28 = ((!(var_6 >= 0)));
                }
            }
        }
    }
    var_29 = var_14;
    var_30 = ((17549 ? -74 : 12781884748551385617));
    #pragma endscop
}
