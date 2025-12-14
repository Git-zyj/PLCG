/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [4] = ((var_6 ? ((-(((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))) : -8784950));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, (((~((var_4 ? -9933 : -8784928)))))));
                    var_11 |= max((((((var_5 ? 1167852192 : 34308))) ? (arr_3 [i_1]) : 255)), 246);
                    var_12 = ((!((min((arr_6 [i_2] [i_1] [i_0] [i_2]), (arr_6 [i_2] [i_1] [i_0] [i_2]))))));
                    var_13 = min(55087, (arr_5 [i_2] [i_1] [i_2]));
                    arr_7 [i_2] [i_1] [2] = ((((!((min(var_5, var_3)))))));
                }
            }
        }
        var_14 *= (((arr_5 [8] [i_0] [8]) ? (max((((arr_6 [12] [i_0] [i_0] [12]) + (arr_1 [i_0]))), (61871 && 32767))) : ((((arr_0 [i_0]) == (arr_1 [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_15 += ((((min((arr_9 [i_3]), var_9))) && ((min((arr_9 [i_3]), (arr_9 [i_3]))))));
        var_16 = (((arr_8 [i_3]) ? (arr_9 [i_3]) : (min((arr_8 [i_3]), (arr_10 [i_3] [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        arr_20 [i_5] [i_6] [9] [i_6] = 171977637;

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_17 = ((var_1 && (arr_15 [i_6 + 2] [i_6 + 2] [i_6] [i_6 + 1])));
                            var_18 = ((arr_17 [i_3] [i_4] [i_6 - 1] [i_6]) ? (arr_17 [i_3] [i_4] [i_6 - 1] [i_6 + 4]) : -1135706933);
                        }
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_26 [i_3] [7] [i_3] = ((+((min((arr_19 [i_3] [i_5] [i_4] [i_3] [i_3]), (arr_19 [i_3] [6] [i_4] [i_5] [i_8]))))));
                        var_19 = 255;
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_20 += ((((min((max((arr_25 [i_4] [i_4] [i_4] [i_4] [i_4]), (arr_23 [i_10]))), (((arr_16 [i_3] [i_4] [i_5] [i_5]) ? 75 : 65514))))) ? -1768932839 : (arr_18 [i_10] [i_5] [i_4] [i_3])));
                            var_21 += (-((((arr_30 [i_3] [i_4] [i_5] [i_10]) > (arr_30 [i_3] [i_4] [i_5] [i_9])))));
                            var_22 = (~833830585);
                        }
                        var_23 = (min(var_23, 125098852));
                    }
                    arr_33 [8] [i_4] [i_4] [i_4] = (~(((!(((-1 ? 96 : 79)))))));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        var_24 = ((!(((((2135578124 ? (arr_32 [i_11] [i_11] [i_11] [i_11] [i_11]) : (arr_28 [i_11] [i_11] [i_11] [i_11] [8] [i_11]))) & (min((arr_10 [i_11] [i_11]), var_8)))))));
        var_25 = (min(var_25, ((max((min((arr_36 [i_11] [i_11]), (9592 & -668322997))), ((max(250, -32754))))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            var_26 = 255;
            var_27 = ((+((var_4 << (((arr_39 [i_12] [i_13] [i_12]) - 25019))))));
        }
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            var_28 = (max(var_28, ((((((arr_43 [i_12] [i_14] [i_14]) + 2147483647)) >> (((!(-2147483647 - 1)))))))));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        {
                            var_29 = (arr_39 [i_16] [i_15] [i_12]);
                            var_30 = var_7;
                            arr_52 [i_17] [i_16] [0] [8] [i_14] [i_12] |= -14748;
                            var_31 = (((arr_39 [11] [i_12] [i_12]) ? (arr_39 [i_17] [i_14] [i_12]) : var_6));
                            arr_53 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] |= (((arr_38 [i_12]) && 255));
                        }
                    }
                }
            }
        }
        arr_54 [i_12] = ((65519 >> (((arr_41 [6] [i_12] [i_12]) - 150))));
    }
    var_32 = ((22763 / 368829580) ? ((var_2 ? ((min((-32767 - 1), 34552))) : 32767)) : var_8);
    var_33 = var_4;
    #pragma endscop
}
