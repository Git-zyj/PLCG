/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_8));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0 - 2]) ? (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 2]))) : (arr_0 [i_0 + 3])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                arr_10 [i_0] = (((arr_1 [i_1]) ? (arr_3 [i_0] [i_0 - 1] [i_2 - 1]) : ((((arr_5 [i_1]) == (arr_6 [i_2 - 1]))))));

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_13 [11] [21] [i_2] [i_3] [i_3] [i_2 - 1] = (((arr_0 [8]) ? (((var_8 ? (arr_1 [i_1]) : (arr_0 [i_0])))) : (arr_5 [i_0 + 3])));
                    var_16 = (((arr_8 [i_2 + 1] [i_1] [20]) == (arr_2 [i_2 + 1] [i_1] [i_2])));
                    var_17 = (((arr_7 [i_0 + 2] [i_2 - 2] [i_2 - 2]) == (arr_9 [i_0 - 2])));
                    var_18 = (((~var_1) ? (arr_1 [i_0 - 1]) : (arr_12 [i_0] [i_0] [i_2 + 1])));
                }
                arr_14 [18] [i_1] [i_0 + 3] &= ((var_7 ? var_2 : (52 / -53)));

                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    var_19 -= ((((((arr_8 [i_0] [i_0] [i_2]) ? (arr_4 [i_4]) : -1))) ? (((arr_6 [19]) ? (arr_18 [i_2] [i_1] [i_1] [i_2]) : (arr_17 [i_0] [i_0] [i_2] [i_4]))) : (arr_6 [i_0 - 3])));
                    arr_19 [i_0] [i_0] [17] [i_4] = ((var_13 ? (!var_2) : (arr_6 [i_0])));
                    arr_20 [i_4] = ((arr_17 [i_0] [i_0] [i_0] [i_0 + 2]) ? (arr_17 [i_0 + 2] [10] [10] [i_0 - 3]) : var_6);
                }
            }
            var_20 = (!-1);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_21 *= var_9;
                        var_22 &= (((((((arr_22 [i_6] [5] [i_5] [i_6]) == (arr_0 [i_6]))))) < (arr_16 [i_0 - 3] [i_0 - 3])));
                        var_23 = (max(var_23, 1613857943));
                        arr_25 [i_6] [i_5] = (((arr_18 [i_6] [i_1] [i_0 - 3] [i_6]) < (arr_18 [i_6] [i_1] [i_0 + 2] [i_6])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_24 = (min(var_24, ((((arr_29 [6] [i_1] [10] [16]) ? (~var_8) : 2681109352)))));
                            arr_34 [11] [i_8] = (((2681109352 ? (arr_7 [i_0] [i_1] [5]) : (arr_27 [17] [17] [i_0]))));
                            var_25 = 9058566556797133444;
                        }
                        for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            arr_38 [15] [15] [15] [i_8 + 1] [i_8] = ((((arr_3 [i_1] [i_8] [i_10 + 3]) ? var_10 : var_2)));
                            var_26 = (((((~(arr_27 [i_0] [i_1] [i_0])))) < ((var_2 ? 71 : 1613857943))));
                        }
                        for (int i_11 = 2; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, var_7));
                            arr_41 [i_8] [i_8] [i_8] = (~var_9);
                        }
                        arr_42 [i_8] [i_7] [i_1] [i_8] = (~var_9);
                    }
                }
            }
        }
    }
    #pragma endscop
}
