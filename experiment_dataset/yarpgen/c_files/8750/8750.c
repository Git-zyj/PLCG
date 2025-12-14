/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        arr_11 [i_3] = -45;
                        var_18 = (min(var_18, (((-(arr_9 [1] [i_1] [i_1] [i_1]))))));
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_16 [3] [4] [2] [9] = (!65519);

                        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_19 = (((arr_6 [i_0] [4] [1] [8]) | (arr_6 [i_0] [i_1] [0] [i_4])));
                            var_20 = (max(var_20, (((arr_0 [i_5 + 1] [i_1]) | (arr_0 [i_5 - 1] [2])))));
                            var_21 = ((-(arr_4 [1] [i_5 - 1])));
                        }
                        for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            var_22 = ((-(arr_2 [i_6 + 2])));
                            var_23 = (~0);
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_24 = -1403641600;
                            var_25 = (~16);
                            var_26 |= (-(arr_19 [i_0] [8] [i_2] [6] [i_7] [4] [i_7]));
                        }
                        var_27 = -0;

                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            arr_28 [i_8] [7] [i_2] [0] [i_8] = (((((arr_8 [9] [4] [i_4] [6]) & 65519)) | ((~(arr_7 [9] [1] [i_4] [3])))));
                            var_28 = ((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_8 [4] [i_1] [i_4] [i_8 - 1]));
                            var_29 = ((-(arr_13 [i_8] [i_8 + 2] [i_8 + 1] [i_8] [10])));
                        }
                        var_30 = 0;
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_31 = (((0 ? -22791 : (!30552))));
                                var_32 = ((!(((-6286914415664868216 ? 875034055 : 875034055)))));
                                var_33 = (((((~(arr_19 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10] [10] [i_9] [8])))) ? ((((arr_20 [1] [5] [9] [6] [1] [i_0]) ? 30552 : (arr_20 [6] [i_1] [1] [i_2] [i_10] [i_1])))) : ((588914578 ? (((arr_7 [6] [6] [i_2] [0]) ? 3943145652421259929 : 18446744073709551615)) : (arr_33 [9] [i_10 - 1] [i_9 - 1] [7] [i_9 - 1] [0] [2])))));
                            }
                        }
                    }
                    var_34 = (arr_14 [8] [4]);
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_35 = (max(var_35, (arr_2 [5])));
                            arr_38 [i_12] [9] [i_11] [i_12] [i_11] = (arr_23 [i_0] [i_1] [3] [i_12] [7]);
                            arr_39 [i_0] [1] [0] [i_12] = (arr_7 [5] [i_12] [i_12] [i_12]);
                        }
                    }
                }
                var_36 = (arr_20 [9] [i_0] [i_0] [i_0] [0] [2]);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            arr_46 [2] = ((875034055 ? 1 : ((~(arr_33 [4] [i_14] [0] [i_0] [i_0] [i_0] [i_0])))));
                            var_37 |= ((!((!(!238719710)))));
                        }
                    }
                }
            }
        }
    }
    var_38 = var_16;
    #pragma endscop
}
