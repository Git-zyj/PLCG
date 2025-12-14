/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_19 = (arr_1 [i_0]);
        arr_3 [i_0] = ((+((+(max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))))));
        var_20 = (min(var_20, ((max((--1), ((((var_12 <= (arr_2 [i_0] [i_0]))))))))));
        var_21 = (((~(arr_0 [i_0] [i_0]))));
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_10 [0] [i_2] [i_2] = -23427;
            var_22 = ((!(arr_9 [i_2] [i_2] [i_1])));
            var_23 = ((-((var_15 & (arr_2 [i_1] [i_1])))));
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    {
                        var_24 -= (-(arr_9 [i_1] [i_1] [i_1]));

                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            arr_21 [0] [i_4] [i_4] [i_5] [i_6 + 2] = var_18;
                            var_25 = (min(var_25, ((((850315297 || 1) << (((((arr_2 [i_4] [5]) ? var_8 : (arr_5 [i_4] [i_3]))) - 584461516833557275)))))));
                            arr_22 [i_1] [i_3 - 1] [i_4] [11] [11] = (arr_11 [2]);
                        }
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            var_26 = (max(var_26, (arr_24 [i_7 - 1] [i_7 - 1] [i_5 - 2] [i_4] [i_3 + 2] [i_1])));
                            arr_26 [i_7] [1] [i_4] [i_4] [i_3 + 2] [i_1] = -252346287;
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                arr_29 [i_1] [i_1] [i_3] [i_8] |= (arr_2 [i_8] [i_3]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 9;i_10 += 1)
                    {
                        {
                            arr_36 [i_10] [0] [i_8] [4] [3] = (arr_11 [i_10]);
                            var_27 = ((1716913477 ? 2395768366 : 102));
                        }
                    }
                }
                var_28 = ((!(arr_2 [i_1] [i_3 - 1])));

                for (int i_11 = 3; i_11 < 10;i_11 += 1)
                {
                    var_29 += var_16;
                    var_30 = (max(var_30, ((~(arr_11 [i_3 + 2])))));
                    var_31 = (min(var_31, (arr_2 [11] [i_3])));
                    arr_39 [i_11] [i_8] [i_8] [i_3] [i_1] [i_1] = (arr_31 [i_8] [i_3] [i_3 - 1] [3] [i_11 - 1] [9]);
                }
            }
            arr_40 [i_1] [i_3] [i_3] = (((arr_33 [i_1] [5] [i_1] [i_1] [i_1]) ? (arr_33 [i_1] [i_1] [i_1] [i_1] [1]) : (arr_33 [7] [i_3 + 2] [i_1] [i_1] [i_3 + 1])));
            arr_41 [i_1] = (arr_34 [i_3 + 1] [i_1] [i_3 - 1] [i_3] [i_3 - 1] [4] [i_3]);
            arr_42 [9] = (-(arr_2 [i_3 + 1] [i_3 - 1]));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            var_32 |= (arr_34 [i_1] [i_12] [i_1] [i_12] [i_12] [i_12] [i_12]);
            arr_45 [i_1] [i_1] [i_1] = (((((var_16 ? (arr_20 [0] [i_12] [2] [i_1] [i_1] [1]) : var_6))) ? (arr_18 [1] [i_1] [1] [1] [i_12]) : ((9991960524284204948 ? 350772764 : 8454783549425346667))));
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            arr_49 [i_1] [i_13] = var_8;
            var_33 -= ((~(arr_34 [i_1] [i_1] [i_1] [i_1] [i_13] [1] [i_13])));
            var_34 = ((36 ? 1 : 218));
            var_35 ^= (!(arr_44 [i_1]));
        }
        arr_50 [1] = arr_7 [i_1] [i_1];
        arr_51 [i_1] = ((!(arr_27 [i_1])));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_36 = (max(var_36, (arr_52 [i_14] [i_14])));
        var_37 = ((((!(arr_52 [i_14] [i_14]))) ? 24214 : (arr_53 [i_14])));
    }
    var_38 *= var_0;
    var_39 = var_2;
    #pragma endscop
}
