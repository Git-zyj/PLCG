/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = var_7;
        arr_2 [10] &= min((((!(!-785289814)))), (arr_1 [i_0] [8]));
        arr_3 [i_0] = (139 + 0);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_2 + 2] = (32541 && var_6);
                            var_16 = ((var_6 < (~var_3)));
                            var_17 = (min(var_17, ((((var_12 ? var_9 : (arr_0 [i_2 + 1] [i_2])))))));
                            var_18 = (((var_9 != (arr_9 [i_0] [i_3] [1] [i_0]))));
                        }
                        arr_15 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] = var_9;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_5] = ((((!(0 == var_13))) ? ((204 ? 0 : 0)) : (17839 - 36028797018963968)));
                        arr_20 [i_0] [i_2] [i_1] [i_0] = ((!((min((((1 && (arr_11 [i_0] [i_0] [i_2] [i_5] [i_1] [i_0])))), (min(2147483647, var_4)))))));
                        var_19 = arr_18 [i_0] [i_0];
                        var_20 = (var_8 / 1);

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_21 = var_3;
                            arr_24 [i_0] [i_1] [3] [i_0] [i_6] = ((((((var_10 - (arr_6 [i_0] [i_0] [i_2 - 1])))) ? (var_13 + 208) : 21575)));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_22 = var_0;
                            arr_29 [i_0] [i_1 + 1] [i_1] [i_1] [i_1] = ((((min(-12307, 2671805160525240108))) ? (!-1014294297) : -748783614));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_23 = (min(var_23, (((!-var_2) ? var_11 : (((!((min(var_9, 9381952187935092499))))))))));
                            var_24 = 1;
                            arr_34 [i_0] [i_0] [i_1] [i_1] [i_0] = ((((~(arr_6 [i_0] [i_0] [i_0])))));
                            arr_35 [i_0] [i_1] = (arr_13 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 - 2]);
                            var_25 ^= ((((var_7 >= (((arr_7 [i_0]) - var_10)))) ? -1823918728 : (0 * 4150)));
                        }
                    }
                    var_26 += (max((min((max(var_4, 536870400)), var_2)), (!1)));
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_27 = (~-1);
        var_28 *= var_0;
        var_29 = (~-902156968);
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 1; i_11 < 17;i_11 += 1)
        {
            arr_44 [i_10] = (-1 >= 31790);
            arr_45 [0] [6] |= -16128;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        arr_51 [i_10 - 1] [i_11] [i_10] [i_13] = (((2732665919 ? 56395 : var_9)) - 1);
                        arr_52 [i_11] [i_12] [i_10] = var_12;

                        for (int i_14 = 1; i_14 < 16;i_14 += 1)
                        {
                            arr_55 [i_10] [i_10] [i_10] [i_12] [i_10] [i_10] = ((~(arr_36 [i_10 - 1] [i_11 + 2])));
                            var_30 = ((261632 >= (8589869056 | var_0)));
                            var_31 = ((0 ? (arr_53 [i_10 - 1] [i_11] [9] [i_11] [i_14 - 1] [i_14 + 1] [i_11 - 1]) : 16384));
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_32 = (min(var_32, var_12));
                            arr_58 [i_10 - 1] [i_11] [i_12] [i_10] [i_15] = var_3;
                        }
                        for (int i_16 = 1; i_16 < 18;i_16 += 1)
                        {
                            var_33 = (min(var_33, 33745));
                            var_34 |= (arr_53 [i_10] [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10] [i_10]);
                        }
                        for (int i_17 = 3; i_17 < 17;i_17 += 1)
                        {
                            arr_65 [8] [i_11] [i_10] [i_13] [i_17] = ((var_7 * (arr_49 [i_17 - 3] [i_11] [i_17 - 3] [i_10 - 1])));
                            var_35 += ((var_8 ? (arr_56 [i_11 + 1] [i_17 - 1]) : (arr_56 [i_11 + 1] [i_17 - 1])));
                        }
                    }
                }
            }
        }
        var_36 = (((arr_37 [i_10 - 1]) ? (arr_37 [i_10 - 1]) : var_3));

        for (int i_18 = 1; i_18 < 1;i_18 += 1)
        {
            var_37 = (max(var_37, (((1031797939 / (arr_40 [14]))))));
            var_38 = ((~(~var_9)));
        }
    }
    #pragma endscop
}
