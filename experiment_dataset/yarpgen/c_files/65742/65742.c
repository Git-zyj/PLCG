/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {
                        arr_16 [2] [2] [i_2] [i_0] = (((arr_0 [i_0 - 1] [i_3 + 1]) << (((9223372036854775807 / 28753) - 320779467772213))));
                        arr_17 [i_0] [i_1] [i_2] [i_0] = (((((arr_8 [i_3 + 2] [i_3] [i_0]) ^ 61495))) ? (min(6207620134846197009, 875597642488945959)) : -6207620134846197010);
                    }
                }
            }
        }
        arr_18 [i_0] = arr_7 [6] [i_0];
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {

        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            arr_25 [i_4] [i_5] [i_4] = -29548;

            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_31 [7] [7] [7] [i_4] [i_7] [6] = var_10;
                    var_12 = (min(var_12, (!262080)));
                    var_13 = var_4;
                }
                arr_32 [i_4] [i_4] = (-6207620134846197010 / 17598);
            }

            for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
            {
                var_14 = (arr_33 [4] [i_5] [1] [i_4]);
                arr_36 [i_4] [i_4] [0] [i_8] = -6207620134846196993;
            }
            for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
            {
                arr_41 [i_4] [2] [i_4] [i_4] = (arr_30 [4]);
                var_15 = -9223372036854775807;
            }
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            arr_44 [i_4] [9] = (((arr_20 [i_4 - 1] [i_4 - 1]) - var_9));
            arr_45 [i_4] [i_4] = 9223372036854775807;
            arr_46 [i_4] = 6207620134846197009;
            var_16 = (max(var_16, (~var_5)));
        }
        arr_47 [i_4] [i_4] = (arr_30 [i_4]);
        var_17 = var_5;
        var_18 = -var_6;
    }
    var_19 = var_10;

    for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
    {
        var_20 = 17598;
        var_21 += 3060183069;
        var_22 *= 2020963903199898614;
        var_23 = -1522483827;
    }
    for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 18;i_14 += 1)
            {
                {
                    var_24 = ((!(((~(arr_50 [i_13 + 1]))))));
                    arr_58 [i_12] = (((arr_50 [i_13]) != 5));
                }
            }
        }
        var_25 = (arr_53 [i_12]);
    }
    var_26 = (-19658 | var_5);
    var_27 = ((829169482 >= var_5) ? ((min(var_4, (!17592)))) : -83);
    #pragma endscop
}
