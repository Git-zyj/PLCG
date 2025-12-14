/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        var_16 = ((((min((!151568127), (arr_1 [i_0])))) ? ((((!((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))))))) : (((((var_4 ? var_14 : (arr_0 [i_0] [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))) : ((var_0 - (arr_0 [i_0] [1])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_17 *= (((arr_7 [i_1] [i_1] [3] [i_1]) ? (arr_9 [i_3]) : (((arr_6 [i_1] [i_1] [i_1]) ? (arr_10 [i_1] [i_1] [i_3]) : (arr_2 [4] [i_2])))));
                arr_11 [i_1] [i_1] [i_1] = ((-151568121 ? 151568127 : 4294967286));
                arr_12 [i_1] = (arr_8 [i_1] [i_2] [i_1]);
            }
            arr_13 [i_2] = (((arr_3 [i_1]) ? (arr_7 [i_2] [i_1] [i_1] [0]) : (arr_6 [i_1] [i_2] [i_1])));
        }
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                var_18 = (arr_4 [i_5 - 1]);
                arr_18 [i_4] [i_4] = arr_3 [i_4];
                arr_19 [i_1] [1] [i_4] = ((((((arr_2 [i_1] [i_4]) ? (arr_6 [i_5] [i_4] [0]) : (arr_8 [i_1] [i_4 - 1] [i_1])))) < (min((((arr_2 [8] [i_4]) ? var_11 : -1)), (arr_10 [i_4 - 1] [i_5 + 1] [11])))));
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_29 [i_1] [i_4] = (arr_10 [i_4] [i_4] [i_4]);
                            var_19 = ((((((arr_17 [i_4]) <= var_9))) ^ (arr_20 [i_1] [16] [i_7])));
                            var_20 = (((-(arr_17 [i_8]))));
                        }
                    }
                }
                var_21 *= (min(var_10, ((((((arr_28 [i_1] [i_1] [2] [i_4]) / (arr_23 [8] [16] [16])))) ? (arr_16 [8] [i_4 + 1] [i_4 + 1]) : (arr_9 [i_1])))));
                var_22 = (max(var_22, (((((((arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (arr_27 [i_4 - 1] [i_4 + 1] [2] [i_4 + 1]) : (arr_16 [14] [i_4 - 1] [i_6])))) ? ((max(((((arr_5 [i_4]) > (arr_8 [9] [i_1] [i_1])))), var_2))) : ((min((arr_20 [i_1] [i_4 + 1] [14]), (arr_21 [i_1] [i_4 + 1] [4])))))))));
                var_23 = var_12;
            }
            var_24 = arr_17 [i_4];
            var_25 = ((+((((arr_27 [i_1] [i_1] [i_4] [i_4 + 1]) ? (arr_6 [i_1] [i_4] [i_4]) : (arr_23 [i_4] [i_4] [0]))))));
        }
        arr_30 [i_1] [i_1] = ((-(arr_14 [i_1] [i_1] [4])));
        arr_31 [11] = -4294967286;
        var_26 = (arr_24 [i_1] [i_1]);
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_27 *= (215 || 186);
                                var_28 = (arr_27 [i_9] [i_10] [i_11] [i_12]);
                            }
                        }
                    }
                    var_29 = ((min(((-(arr_3 [i_9]))), (((arr_2 [i_9] [i_9]) ? var_14 : (arr_39 [i_9] [i_9]))))) < (((!(arr_32 [i_9] [i_9])))));
                    arr_45 [i_11] [i_11] [i_11] = (2147483647 ? 65533 : 6015146308164651653);
                    arr_46 [1] [i_11] = (min(((((arr_37 [i_11] [i_11] [i_11]) && var_9))), ((-(arr_37 [1] [i_10] [i_10])))));
                }
            }
        }
        arr_47 [15] = (min((arr_26 [i_9] [i_9] [2] [12]), (arr_32 [i_9] [i_9])));
    }
    var_30 = 48;
    #pragma endscop
}
