/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            var_15 = (((((arr_1 [1] [12]) >= var_5)) ? (arr_2 [16] [i_0 - 1]) : (arr_1 [i_0 - 1] [i_0 + 1])));
            arr_5 [i_0] [i_1 + 3] [i_1 - 1] = ((~(((arr_2 [i_0] [22]) ? var_8 : (arr_4 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_2] = (-(!1016));
            var_16 = (((arr_0 [i_0]) ? (arr_0 [i_0 + 1]) : (arr_6 [i_0] [i_0])));
            var_17 = (~var_10);
        }
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
            {
                var_18 &= (arr_12 [10] [i_4]);
                arr_16 [i_0 + 1] [i_3] [i_0 + 1] = (arr_12 [i_0] [i_0]);
                arr_17 [i_0] [i_0 + 1] [i_0] [20] &= ((arr_7 [i_0 + 1] [i_4]) >> ((((var_12 / (arr_7 [i_0] [i_4]))) - 160)));
                var_19 &= (arr_15 [i_3] [i_0 + 1]);
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                arr_20 [i_0] [i_3] [i_5] = (arr_7 [0] [i_5]);
                var_20 = (((~(arr_0 [i_3]))));
                arr_21 [i_0] [i_0 + 1] [i_0] [i_0] = (4095 % 5177554159884747822);
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_21 = (min(var_21, (arr_14 [i_3])));
                            arr_29 [i_0] [i_3] [1] [i_8] [i_8] = ((+(((arr_18 [i_0] [i_0] [i_0]) - var_0))));
                        }
                    }
                }
                arr_30 [i_0] [i_3] [i_6] = (((arr_4 [i_0 + 1]) == (arr_4 [i_0 + 1])));
                var_22 = ((((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? var_6 : var_8)));
                var_23 = (((arr_22 [i_3 + 1] [i_3 + 2] [i_3 + 2] [18]) > (arr_22 [i_3 - 1] [i_3 - 1] [i_3 - 1] [2])));
                arr_31 [i_3] = ((!(((61441 ? -24480 : 96)))));
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_24 = ((119 ? (((var_11 >= (arr_11 [i_0])))) : ((~(arr_0 [i_0])))));
                            arr_39 [i_11] [i_11] = ((+(((arr_35 [i_0] [15]) ? var_3 : var_3))));
                            var_25 = ((!(((-(arr_35 [i_3] [i_10]))))));
                            arr_40 [i_11] [i_10] [6] [i_3 - 1] [i_11] = ((+(((arr_27 [8] [i_10] [i_9] [i_0] [21] [i_0]) ? (arr_8 [i_3] [i_9] [i_10]) : (arr_26 [i_11] [16] [i_9] [i_3] [i_0])))));
                        }
                    }
                }
            }
            arr_41 [i_3] = (((arr_2 [i_3] [i_0]) ? ((((arr_3 [i_0] [i_3] [i_0 - 1]) ? (arr_7 [i_0] [i_0 - 1]) : (arr_10 [i_0])))) : (arr_27 [i_0] [19] [i_3] [i_3 + 1] [i_0] [i_3])));
        }
        var_26 = ((((((arr_14 [8]) ? (arr_38 [14] [i_0] [i_0 + 1] [i_0] [i_0]) : var_5))) ? (!var_12) : ((~(arr_38 [14] [14] [i_0] [i_0] [i_0])))));
        arr_42 [i_0] = (arr_1 [i_0 - 1] [i_0 + 1]);
        var_27 = ((var_3 ? (((arr_37 [20] [18] [2] [i_0] [i_0]) ? (arr_33 [1] [i_0]) : (arr_28 [20]))) : (arr_38 [8] [i_0] [i_0 + 1] [16] [8])));
        var_28 = (((~(arr_12 [i_0] [i_0]))));
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        var_29 = (max(var_29, (arr_15 [i_12] [17])));
        var_30 = ((min(((max((arr_23 [11] [i_12] [i_12] [i_12]), var_6))), (((arr_14 [i_12]) ? (arr_18 [i_12] [i_12] [i_12]) : (arr_6 [i_12] [i_12]))))));
        arr_46 [i_12] [i_12] = ((!(arr_45 [i_12] [i_12])));
        var_31 = (min((min((arr_6 [i_12] [i_12]), (arr_8 [i_12] [i_12] [i_12]))), (((~(arr_8 [i_12] [i_12] [i_12]))))));
    }
    var_32 = var_2;
    #pragma endscop
}
