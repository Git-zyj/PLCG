/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_10 = (min((((arr_4 [i_0 + 2]) ? (arr_4 [i_0 + 1]) : 213)), (min(1, (arr_4 [i_0 - 1])))));
                var_11 = (max(((min(51, 0))), (min((arr_1 [i_2]), 16273481824737439134))));
                var_12 = (((arr_6 [i_0 - 3] [i_0 - 1]) >= 1));
            }
            var_13 = (((arr_2 [i_0 - 3]) ? (((arr_7 [i_0] [i_0] [i_0] [i_1]) ? 1 : 2041)) : ((((((arr_1 [i_0]) < (arr_5 [i_1])))) & var_1))));
            arr_8 [i_0] = (max(47, 0));
        }
        arr_9 [i_0 + 2] [i_0 + 2] = ((44305 ? (~-2029) : 0));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_14 [i_3] = (min((((((var_4 ? var_5 : 181))) ? (arr_6 [i_3] [i_3]) : (91 | var_7))), ((min((arr_12 [i_3]), (arr_12 [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_14 = 1;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_15 = (min(-21538, 1));
                                arr_27 [i_3] [4] [1] [i_3] = (((-(((arr_0 [21]) ? 2041 : 56822)))));
                                var_16 = ((-(max((arr_13 [i_3]), -722632900))));
                                arr_28 [i_3] [i_3] [i_5] [i_3] [i_7] = ((arr_10 [i_3]) * -123);
                            }
                        }
                    }

                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_17 = (min(877076316, (max((((arr_24 [i_3] [i_3] [i_3] [i_5] [i_8]) ? 92 : (arr_23 [i_4 - 2] [i_4] [i_5] [9] [12]))), 69))));
                        arr_31 [i_4] [i_3] = (min(((min((arr_23 [i_4 - 3] [i_8 + 1] [i_4 - 3] [9] [i_8]), (arr_23 [i_4 - 2] [i_8 + 1] [i_5] [i_8] [i_4 - 1])))), ((~(arr_23 [i_4 + 1] [i_8 + 1] [i_5] [i_4] [i_8])))));
                        arr_32 [i_5] [i_3] [i_3] = (((min(3137253893, 3137253892)) % (((~(arr_26 [i_3] [i_4] [7] [i_3] [i_8 + 1]))))));
                        var_18 = (-((var_7 ? (arr_11 [16] [16]) : (arr_22 [i_8] [1] [1] [i_3]))));
                    }
                }
            }
        }
    }
    var_19 = var_5;
    #pragma endscop
}
