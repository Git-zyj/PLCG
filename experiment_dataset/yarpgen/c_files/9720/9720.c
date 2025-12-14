/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((var_14 ? var_17 : var_4))) ? -5721978397828846043 : (((var_2 ? var_17 : 1)))))) ? var_10 : -2394696082));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [0] [i_1] = (max(((((((((arr_6 [i_1]) ? (arr_4 [3] [i_1 - 1] [i_1]) : 1)) + 2147483647)) >> (((arr_1 [i_0] [i_0]) - 14916810970634628677))))), ((1 ? 4151343193 : ((248 ? 22 : 16513245020267965095))))));
                    arr_10 [i_1] = (((min((arr_1 [i_1 + 1] [i_1 + 2]), (arr_1 [i_1 + 1] [i_1 - 1]))) >> ((41 ? 19 : 1))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            arr_15 [i_3] [1] [i_3] = (((((arr_4 [i_3] [i_3] [22]) ? (8 - 1) : (arr_7 [16] [i_4]))) - 8520412981762260226));
            arr_16 [i_3] = (((arr_1 [i_3 + 1] [i_4 - 1]) ? ((min((arr_6 [14]), (arr_6 [16])))) : var_5));
        }

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_20 [5] [5] [i_5] = 40;

            /* vectorizable */
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_29 [i_3] [i_5] [i_6] [i_7] [i_8] = (((((-23533 ? 234 : (arr_26 [i_3 - 2] [i_5] [i_3 - 2] [i_3 - 2])))) ? (arr_8 [i_8] [i_6 + 1]) : (arr_28 [i_7] [i_7 - 1] [i_6] [i_5])));
                            arr_30 [8] [7] [2] [2] [2] = 16513245020267965095;
                        }
                    }
                }
                arr_31 [i_3] = (((arr_21 [i_6]) ? (2835624876 / var_12) : (((-40 ? 1084 : 26787)))));
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                arr_35 [2] [2] [i_9] [2] = var_8;
                arr_36 [i_3] [i_5] [i_9] = (((((!40) || ((max(1, -1081063484))))) || var_11));
            }
            arr_37 [i_3] [i_3] = ((((((arr_19 [i_3]) && (arr_28 [i_5] [i_5] [i_3 - 1] [i_3])))) >> (min((arr_4 [i_3] [i_3] [10]), (2434577428 <= 41)))));
        }
        arr_38 [i_3] = (max((((152 - 1) / 83)), 4808));
        arr_39 [i_3] = (min((arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1]), ((((arr_14 [4] [i_3] [i_3 - 1]) < 1084)))));
        arr_40 [i_3] = 776171280;
    }
    /* vectorizable */
    for (int i_10 = 4; i_10 < 22;i_10 += 1)
    {
        arr_43 [15] = ((arr_1 [i_10 + 1] [i_10 - 2]) || (var_2 / 1));
        arr_44 [i_10] [i_10 - 4] = ((((((arr_3 [21] [i_10]) ? -60 : (arr_7 [22] [i_10])))) ? (arr_3 [i_10 - 3] [i_10 - 4]) : (arr_5 [4] [i_10] [i_10])));
    }
    #pragma endscop
}
