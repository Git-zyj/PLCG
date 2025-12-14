/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0 + 2] [i_0] |= ((arr_2 [i_0 - 1] [i_0 + 1]) ? var_11 : (arr_0 [i_0 + 2]));

            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_14 = var_2;
                    var_15 = (-30580 / var_4);
                }
                var_16 = (min(var_16, ((((arr_11 [i_0 + 1] [i_0 + 1]) ? (arr_9 [i_0 + 1] [i_2 - 1] [i_2 - 4] [i_2]) : (arr_9 [i_0 + 2] [i_2 - 1] [5] [i_2]))))));
            }
            var_17 = ((52 ? 0 : (arr_3 [2] [i_0 + 2] [i_0])));
        }
        arr_12 [i_0] = (((arr_10 [i_0 + 2] [i_0] [6] [i_0 + 2] [i_0 + 1] [i_0]) ? var_6 : (arr_10 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 1] [i_0 - 1])));
        var_18 = (arr_11 [i_0] [i_0]);
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_19 = ((1 == (arr_15 [i_4] [i_4])));
        arr_16 [i_4] = (((max(((var_11 ? var_5 : 2712788821405256836)), ((-(arr_13 [i_4]))))) > (((((((arr_14 [i_4] [i_4]) != var_8)) || (((0 ? 1 : (arr_4 [i_4 + 2]))))))))));
        var_20 = ((((((arr_2 [7] [i_4 + 2]) ? (arr_14 [i_4] [i_4]) : var_11)) > 1)) && ((((0 ? var_8 : 20144)))));
        var_21 = (arr_0 [i_4 - 1]);
        arr_17 [i_4] [i_4] = (arr_8 [i_4] [i_4] [i_4] [3]);
    }

    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        var_22 = ((+(((arr_19 [i_5 - 1]) - (arr_19 [i_5 - 3])))));

        for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
        {
            var_23 = (max(var_23, ((-var_8 ? 1 : ((-((max((arr_20 [i_5 - 2]), (arr_21 [i_5] [i_5 + 1] [i_6]))))))))));
            arr_24 [i_6] [i_5] [i_5] = (~var_9);
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        arr_30 [i_6] [i_7] [i_6] [i_6] [i_6 - 2] [i_6] = 0;
                        var_24 = (min(((var_1 ? (1 + var_8) : (arr_18 [i_7 + 2]))), ((((var_4 <= 1) == -4301016832011406624)))));
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
        {
            arr_33 [i_9] [i_9] [i_9] = 1;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_25 = 40;
                            arr_43 [i_9] [i_10] [i_11] [i_12] = var_3;
                            var_26 = (max(((((((arr_22 [i_5] [i_5]) ? (arr_38 [i_5] [i_9]) : 3492481519)) > var_8))), (((arr_35 [i_9] [i_9 - 2]) / 1))));
                            var_27 = (min((arr_27 [i_9] [i_9] [i_9 + 3]), var_6));
                        }
                    }
                }
            }
        }
    }

    for (int i_13 = 1; i_13 < 21;i_13 += 1)
    {
        arr_46 [i_13] = ((!((!(arr_37 [20] [i_13] [i_13] [i_13 + 1])))));
        var_28 = var_12;
    }
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        arr_50 [i_14] [i_14] = (max((((arr_32 [i_14] [16]) ? ((min((arr_48 [i_14]), -463447773))) : var_4)), (!var_2)));
        var_29 *= 1;

        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            var_30 = ((((min(-1, 1))) && (arr_47 [i_15])));
            var_31 = 1529988363;
            arr_55 [i_14] [i_15] [i_15] = ((~((((max(10450, (arr_29 [i_14] [i_15] [i_14] [i_15] [i_14] [10])))) * (1 != 463447773)))));
            arr_56 [i_14] [i_15] = ((((((arr_35 [i_14] [i_15]) ? var_13 : (arr_35 [i_14] [i_14])))) ? (((((((arr_47 [i_14]) ? 463447772 : (arr_18 [i_14])))) || (arr_28 [i_14] [i_14] [i_14] [i_14] [i_14])))) : ((((var_7 == (arr_42 [i_14] [i_14] [i_14] [i_14] [i_15] [i_14] [i_14]))) ? (arr_45 [i_14]) : ((158 << (2684326639 - 2684326636)))))));
        }
        var_32 = (var_13 ? ((var_1 ? 1 : (arr_40 [i_14] [i_14] [i_14] [14] [8]))) : 1);
    }
    var_33 = var_0;
    #pragma endscop
}
