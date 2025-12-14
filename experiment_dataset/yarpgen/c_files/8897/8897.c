/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_13 = (((arr_14 [20] [i_0] [i_0] [i_3 + 1] [i_4]) ? (arr_14 [i_2] [i_2] [18] [i_3 + 1] [i_4]) : (arr_14 [i_0] [i_1] [i_1] [i_3 - 1] [i_4])));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [17] [i_0] |= (((arr_14 [i_0] [i_1] [i_2] [i_4 + 1] [i_4]) ? (((arr_4 [1] [i_1]) ? (arr_12 [i_0] [i_1] [7] [i_3 + 1] [i_4] [18]) : 26120)) : (arr_8 [i_0] [22] [i_2] [i_3])));
                            arr_16 [i_4] [i_2] [i_0] = (((arr_6 [i_4 - 1] [i_4] [i_4 + 1]) ? (arr_1 [i_3 - 1]) : (arr_1 [i_3 + 1])));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_14 = (((arr_13 [i_5] [i_0]) ? (arr_10 [i_0]) : (arr_19 [1] [1] [9])));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_26 [i_0] [i_0] [11] [i_0] [i_0] [i_0] = arr_3 [i_0];
                            var_15 = (arr_18 [i_6 - 3] [i_6 + 1] [i_6 - 2]);
                            var_16 = (min(var_16, ((((((arr_23 [9] [i_1] [i_5] [i_6 - 2] [i_5]) ? (arr_6 [4] [11] [i_5]) : (arr_14 [i_7] [i_1] [i_5] [i_1] [i_0])))) ? (((arr_3 [19]) ? 5280828888425152665 : 19339)) : (arr_14 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [23])))));
                            arr_27 [i_0] [i_0] [i_5] [12] [i_7] = (((arr_12 [i_7] [i_7] [i_7] [i_6 + 1] [i_6] [i_6]) ? (arr_6 [i_6] [i_6 - 1] [i_6 + 1]) : (arr_21 [i_6] [1] [i_6 - 3] [i_6 - 1] [i_5] [i_1])));
                        }
                    }
                }
                arr_28 [20] [i_1] [i_1] &= (((arr_17 [i_0] [i_1] [i_5]) ? (arr_17 [i_0] [i_0] [i_5]) : (arr_10 [i_0])));
            }
            var_17 = (arr_18 [12] [15] [6]);
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
        {
            var_18 = (((arr_25 [1] [5] [i_0] [i_8] [i_0] [i_0]) ? (arr_10 [16]) : (arr_30 [i_8])));
            var_19 = ((((((arr_1 [i_0]) ? (arr_24 [i_0] [23]) : (arr_2 [i_0] [i_8])))) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [22]) : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_8] [11])));
            var_20 = (((arr_30 [i_0]) ? (arr_24 [i_0] [i_0]) : (arr_10 [i_0])));
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
        {
            var_21 *= (((arr_5 [12] [i_9]) ? (arr_3 [i_9]) : (arr_25 [i_0] [13] [i_9] [i_0] [i_0] [i_0])));
            var_22 = (((arr_8 [i_9] [i_9] [i_9] [i_0]) ? (arr_13 [i_0] [i_0]) : (arr_13 [i_0] [i_9])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        arr_40 [i_0] [i_0] [1] [i_0] = (((arr_18 [i_0] [i_9] [1]) ? (arr_21 [i_0] [11] [i_0] [15] [i_0] [i_0]) : (((arr_1 [6]) ? (arr_20 [i_0] [7] [i_0] [7] [i_0]) : (arr_5 [i_10] [i_11])))));
                        arr_41 [17] [17] [i_10] [i_11] = ((arr_29 [i_10] [i_9]) ? (arr_13 [i_10] [i_9]) : (arr_13 [i_9] [i_10]));
                        arr_42 [i_0] [i_9] [i_10] [3] = (((arr_33 [i_0] [i_0] [i_0]) ? ((0 ? 32745 : 5280828888425152665)) : ((((arr_30 [i_0]) ? (arr_22 [i_10]) : (arr_13 [0] [24]))))));
                    }
                }
            }
        }
        arr_43 [i_0] [i_0] = ((((((arr_20 [i_0] [5] [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_8 [4] [4] [i_0] [10])))) ? (arr_33 [i_0] [6] [4]) : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_23 = var_3;
    #pragma endscop
}
