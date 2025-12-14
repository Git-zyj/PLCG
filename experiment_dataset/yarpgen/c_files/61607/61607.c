/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (((arr_1 [i_0]) / (arr_1 [i_0])));
        var_12 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (min(147, 109359268)));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] = (((arr_0 [i_1] [i_0]) ? (max(4185608036, ((min(var_2, 222))))) : ((((min(var_1, 17947)))))));
            var_13 = -109359268;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [i_4] [i_3] [i_1] [i_4] = (arr_11 [i_2] [i_0]);
                            var_14 = (max(var_14, ((((((-1 ? 4185608028 : var_5))) ? ((((max(605080397, (arr_12 [i_0] [i_1] [i_2] [i_0] [i_1])))) ? ((((arr_2 [i_3] [i_3] [i_2]) * 0))) : (((arr_7 [i_1] [i_3] [i_4]) / var_9)))) : (arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4]))))));
                            var_15 = ((((253 ? -1 : 253))) ? ((((max(var_10, var_9))) ? (arr_11 [i_0] [i_0]) : (((1889051385 ? 27 : var_5))))) : var_2);
                        }
                    }
                }
            }
        }
        arr_16 [i_0] = ((((max(var_0, (arr_10 [i_0])))) > (((arr_10 [i_0]) ? 2129692701 : (arr_10 [i_0])))));
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        arr_19 [i_5] = (((((arr_18 [i_5 - 2]) / 98)) / (arr_18 [i_5 + 1])));
        arr_20 [i_5 + 1] = (max((arr_17 [i_5 - 2] [i_5 - 1]), var_6));
        var_16 = (((((arr_18 [i_5 + 1]) | (arr_18 [i_5 - 1]))) >> ((((arr_18 [i_5 - 1]) < (arr_18 [i_5 + 1]))))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {

                        for (int i_9 = 3; i_9 < 20;i_9 += 1)
                        {
                            arr_31 [i_6] [i_6] [i_7] [i_7] [i_8] [i_9] [i_9] = min(0, (max(var_5, (arr_23 [i_9] [i_9] [i_6] [i_9]))));
                            arr_32 [i_6 + 3] [16] [i_8] [16] |= ((((arr_27 [i_5] [i_6] [i_6 + 2] [i_5 + 1]) <= 0)));
                            var_17 = (arr_24 [i_9]);
                        }

                        for (int i_10 = 3; i_10 < 19;i_10 += 1)
                        {
                            arr_35 [i_5] [i_6 + 1] [i_6] [i_7] [i_8] [i_10 + 2] [i_5] = ((~(((arr_18 [i_7]) / ((~(arr_27 [i_6] [i_6] [i_8] [i_10 - 2])))))));
                            arr_36 [i_5] [i_6 + 2] [i_7] [i_6] [i_10] [i_10 + 2] = (((((arr_24 [i_6 + 3]) - var_2)) >> 5));
                        }
                        arr_37 [i_6] [i_7] [i_6] [i_6] [i_5] [i_6] = ((((~(2147483647 & 496943263))) >> (((arr_17 [i_6 + 1] [i_5 - 1]) - 549607857))));
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_18 = (max((max(((-1 | (arr_39 [i_11]))), (arr_39 [i_11]))), ((((((var_9 ? (arr_39 [i_11]) : var_5))) || (~-20))))));
        var_19 = (min(var_19, (((!((max(4185608028, ((((arr_38 [i_11]) >> (((arr_39 [i_11]) - 45821)))))))))))));
        arr_40 [i_11] [i_11] = 0;
        var_20 = max((((251 > ((var_1 ? (arr_38 [i_11]) : (arr_39 [i_11])))))), (max((arr_38 [i_11]), (arr_39 [i_11]))));
    }

    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                {
                    var_21 = ((var_3 ? (max(-29, 25833)) : (arr_33 [i_12] [i_13 - 2] [i_13 - 2] [i_14] [i_12] [i_12])));

                    for (int i_15 = 1; i_15 < 8;i_15 += 1)
                    {
                        arr_50 [i_12] [i_13] [i_15 - 1] = (arr_17 [i_13] [i_12]);
                        arr_51 [i_12] [i_12] = (max(31, ((~(arr_17 [i_13 + 1] [i_13 - 1])))));
                        var_22 = (((arr_46 [i_13 - 1] [i_12] [i_15 + 3]) > (arr_17 [i_12] [i_13])));
                    }
                }
            }
        }
        arr_52 [i_12] = ((!((min(1839081685, (arr_46 [i_12] [i_12] [i_12]))))));
        var_23 |= 4185608028;
        var_24 = (max((arr_49 [i_12] [i_12]), ((((max(3, 163))) + (arr_25 [i_12] [i_12] [i_12] [i_12] [i_12])))));
    }
    #pragma endscop
}
