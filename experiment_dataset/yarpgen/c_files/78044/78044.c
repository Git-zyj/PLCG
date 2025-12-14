/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (((807809795 >> (((min(var_4, var_9)) - 45832)))) >> (((((1517096224 ? var_2 : var_9))) - 1963670616)));
                    arr_8 [i_0] [i_0] [i_1] = (~15);

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_14 = ((!(1807820558 + 1517096235)));
                        arr_11 [i_0] [i_0] [i_1] [i_0] = (((arr_6 [i_2] [i_2] [i_2]) >= ((((arr_10 [i_0] [16] [i_2] [17]) >> (((arr_6 [i_0] [i_1] [3]) - 2225259713)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [i_2] [1] = (((arr_12 [10] [i_4 - 4] [i_4 - 1] [i_1]) ? 51842 : (arr_10 [i_4] [i_4 - 4] [i_4 - 1] [i_0])));
                        arr_15 [i_0] [i_2] [i_2] [i_1] = (!var_11);

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_15 = (max(var_15, (((arr_17 [i_0] [5] [9] [7] [3]) << (((arr_1 [0] [i_1]) * 17))))));
                            var_16 = (((((1517096224 ? (arr_16 [i_0] [i_0] [16] [i_0] [i_1]) : var_9))) != (arr_9 [11])));
                            var_17 = (max(var_17, (-57 | 564898491)));
                            var_18 = (((arr_3 [i_4 + 2] [i_4 - 2] [i_1]) + (arr_16 [i_4 - 2] [i_4] [15] [i_4 - 1] [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_19 = (max(var_19, 1517096231));
                            var_20 *= ((~(arr_7 [i_0] [i_1] [i_4 - 4] [0])));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_21 = (max(var_21, ((((arr_7 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 2]) != -56)))));
                            var_22 = -115;
                            arr_23 [i_0] [6] [i_1] [i_4] = (arr_1 [i_0] [14]);
                        }
                        arr_24 [i_1] [i_0] [2] [16] = ((var_3 ? var_10 : ((((arr_12 [i_0] [i_1] [i_1] [i_4]) + (arr_10 [i_4] [i_1] [i_4] [i_4]))))));
                        arr_25 [10] [i_1] [i_2] [i_1] &= (-33 % 3364230910336116287);
                    }
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        arr_28 [0] = var_10;

        /* vectorizable */
        for (int i_9 = 4; i_9 < 10;i_9 += 1)
        {
            var_23 = (arr_2 [18] [0] [i_8 + 1]);
            var_24 = (!2777871071);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                var_25 = var_11;
                var_26 = (((arr_33 [i_8]) << (1517096240 - 1517096218)));
            }

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                var_27 *= (((arr_21 [i_8] [i_8] [13] [i_8 - 1] [i_8] [i_8]) ? (arr_21 [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_8 + 1] [18]) : (arr_26 [i_8 + 2])));
                var_28 = (min(var_28, (arr_5 [i_12] [i_10])));
                var_29 = (((arr_36 [i_8 - 1] [i_8] [i_8]) == (arr_4 [i_12] [i_8])));
                var_30 |= (!var_5);
            }
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                var_31 = 2777871049;
                var_32 = (arr_5 [i_13] [i_13]);
                arr_42 [i_8] [i_8] [i_8] [i_8] = (((arr_0 [i_10]) & 69));
            }
        }
        for (int i_14 = 4; i_14 < 11;i_14 += 1)
        {
            var_33 = var_9;
            var_34 = (min(var_34, (arr_4 [18] [18])));
            arr_45 [i_8 - 1] = (min(9590953300014850181, ((-(var_5 & -550278650)))));
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            arr_50 [i_8] [i_8 + 2] [i_8] = ((max(var_7, (arr_10 [i_8] [i_8] [i_8 + 1] [i_15]))));
            var_35 = (min(var_35, (-2147483647 - 1)));
        }
        var_36 = ((!((min((arr_1 [i_8 + 1] [i_8 + 1]), var_11)))));
    }
    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        var_37 = 18097105083209777340;
        var_38 &= arr_52 [i_16];
    }
    var_39 *= (((((var_2 ? 1517096224 : ((2777871071 << (var_6 - 2399651588)))))) | 10162470534619112850));
    #pragma endscop
}
