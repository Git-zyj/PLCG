/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (~8873186299242609641);
                    var_20 ^= (((~(arr_6 [i_1] [i_2]))));
                }
            }
        }
    }
    var_21 = (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (8873186299242609640 - 8873186299242609640)));
    var_22 = ((((var_9 ? var_15 : 10565))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_23 = (min(var_23, ((((((8873186299242609641 ? -8873186299242609649 : -8873186299242609650))) ? (arr_11 [i_3] [8]) : ((-4945740153382097050 / (arr_13 [8] [i_3]))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_24 -= 4945740153382097058;
                    arr_21 [2] [i_4] [i_4] [i_3] &= ((-(arr_20 [2] [i_5] [i_4] [i_3])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_27 [i_6] [i_6] [i_7] = (arr_25 [i_7]);
            var_25 = (arr_23 [i_6]);
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_26 = (max(var_26, (((~8873186299242609659) >= (arr_25 [i_8])))));
            arr_31 [i_6] [i_6] [i_6] = (~-31654);
            var_27 = (arr_25 [i_6]);
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_28 = (-127 - 1);
            var_29 = (max(var_29, ((1 / ((32649 ? 118 : 669902379))))));
            arr_34 [i_9] |= 0;
            arr_35 [i_6] [i_9] = ((((!(arr_32 [i_9] [4])))));
            var_30 = 1;
        }
        var_31 -= (((arr_25 [i_6]) || (arr_22 [i_6] [i_6])));
        arr_36 [i_6] [i_6] = ((-31658 ? -113 : 1));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_32 = (max(var_32, (-var_1 / 8873186299242609641)));
                        var_33 += -111;
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_34 = (max(var_34, var_7));
                                var_35 = (~17);
                                var_36 = arr_47 [1] [i_11 - 2] [i_10] [i_11 - 2] [6] [i_10];
                            }
                        }
                    }
                }
            }
        }
        arr_52 [i_10] = (~-61);
        var_37 = (!8873186299242609659);
        var_38 -= ((((-1558 && (arr_51 [i_10]))) ? (((var_12 < (arr_41 [i_10] [i_10] [2])))) : (((!(arr_23 [i_10]))))));
        arr_53 [i_10] [i_10] = ((((((arr_23 [i_10]) ? 17 : var_16))) ? (~var_1) : var_11));
    }
    #pragma endscop
}
