/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 |= ((var_1 ? ((((!148) >> ((((min(var_5, 62134))) - 62112))))) : 7058956776060017845));
    var_12 = (max(var_12, ((((!2249600790429696) | (!var_1))))));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_13 = ((2249600790429702 ? (((!((((arr_0 [15]) % -85)))))) : (arr_0 [i_0 - 1])));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 = ((!((max((arr_0 [i_0 - 3]), (arr_0 [i_0 - 3]))))));
            var_15 = (~13659);
            var_16 = (arr_3 [i_0] [i_0 - 4]);
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_17 = ((((min(67, (arr_5 [i_0] [1] [i_0])))) ? (max((~-85), var_4)) : ((((var_2 && 4291709512) ? ((~(arr_1 [i_2] [i_2]))) : var_0)))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        var_18 = var_8;
                        var_19 = (((((!(arr_3 [i_0 - 3] [i_2 - 1])))) != (arr_3 [i_0 - 1] [i_2 + 3])));
                        var_20 = -9223372036854775803;
                        var_21 = var_1;
                    }
                }
            }
            arr_12 [i_0] [i_0] [i_2] = var_5;
            arr_13 [i_0] [i_0] = (arr_11 [i_0] [i_2]);
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_22 ^= (~-67);
            arr_16 [i_0] [i_5] [i_5] |= -var_9;
            var_23 = -12429;
            var_24 = -2249600790429705;
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {

                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            arr_29 [i_0 - 3] [i_0] [i_7] [i_8] [i_6] = (arr_10 [12] [12]);
                            var_25 = arr_22 [i_0 - 4] [i_0] [i_0] [i_0];
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_26 = 2147483644;
                            var_27 = var_4;
                            var_28 = ((-(~var_2)));
                            arr_32 [i_0] [i_6 - 1] [i_6] [i_6 - 1] = ((~(arr_11 [i_0 + 1] [i_6 + 4])));
                        }
                        var_29 = ((((16 < (arr_28 [i_0] [i_0] [i_6] [i_7] [i_0] [i_8]))) ? 2249600790429693 : (arr_27 [i_0 - 3] [i_0] [i_0 - 2] [i_0] [i_0 - 4] [i_0 - 3])));
                        arr_33 [i_0 - 1] [i_8] [i_8] [i_8] [i_6] [i_8] = (!81);
                    }
                }
            }
            arr_34 [i_6] = (((var_7 ? var_7 : var_1)));
            arr_35 [i_6] [i_6] = (((arr_30 [i_6] [i_6] [i_0] [i_6] [i_0]) ? (((arr_10 [i_0] [i_0]) ? (arr_3 [19] [i_0]) : (arr_15 [i_0]))) : (!var_1)));
        }
        arr_36 [i_0 + 1] [i_0 + 1] = (((-2249600790429705 ? ((-2249600790429702 ? 2370841276 : -68) : (((~(arr_20 [i_0 - 1] [14]))))))));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        var_30 = arr_9 [i_11] [21] [i_11];
        var_31 = ((((~-2249600790429689) > (arr_9 [i_11] [i_11] [i_11]))) ? ((var_6 + (((9223372036854775798 ? var_0 : var_7))))) : (((+(max((arr_28 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), 72))))));
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_32 = (~1924126020);
        var_33 = -93;
        var_34 = (arr_14 [14] [i_12] [i_12]);
        var_35 = ((-86 & (!-126)));
        var_36 = (((((arr_31 [i_12] [i_12] [i_12] [i_12] [i_12]) - var_8)) / (arr_24 [i_12] [14] [i_12] [i_12])));
    }
    #pragma endscop
}
