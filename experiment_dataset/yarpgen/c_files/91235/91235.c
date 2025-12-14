/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (3622982923 || var_9);

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = 3888876693;
        var_12 ^= (3888876693 * 0);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_13 = (((((arr_6 [i_1] [15]) + 4142569379)) + (((((((arr_0 [i_1]) / 2944992079)) < 4078))))));
        arr_8 [i_1] = (((-152533480 + 2147483647) >> (((((arr_2 [8] [i_1 + 3]) ? 1641535751 : (arr_2 [16] [i_1 + 2]))) - 1641535745))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_18 [i_2] [i_3] [i_4] [i_4] = (((arr_0 [i_2]) >> (((arr_6 [i_3 + 1] [i_3 + 3]) - 3154804709))));
                    arr_19 [i_2] [i_4] = (arr_9 [i_3 + 3]);
                    var_14 *= var_1;
                    var_15 -= (1220158306 >= 1950155246);
                    var_16 ^= 735463995;
                }
            }
        }
        var_17 = (3824897144 / 3777);

        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            arr_22 [i_5] = 0;

            for (int i_6 = 4; i_6 < 8;i_6 += 1)
            {
                arr_26 [i_2] [i_5] [i_5] [i_6 - 2] = 1;
                var_18 ^= ((var_10 ? 67 : (arr_25 [i_5 - 2] [i_5 + 1] [i_6 - 3] [i_6 - 2])));
                arr_27 [i_5] [i_5 - 2] [i_5] = (((arr_11 [i_5 - 1]) + 0));
                arr_28 [i_5] [i_2] [i_2] [i_5] = 36;
            }
            arr_29 [i_2] [i_5] = 0;
        }
        var_19 = (16007 != 254);
        var_20 -= (54764 == var_2);
    }
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_21 = (max(var_21, (((((arr_1 [i_7 + 2]) == 2484505972))))));
            arr_36 [i_8] [i_7] [i_7] = -1364528776730260883;
            arr_37 [i_7 + 2] [i_8] = arr_31 [i_7];
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_22 -= var_3;
                            arr_50 [i_7] [i_9] [i_7 + 2] [i_7 - 1] = (((var_7 <= var_0) <= (((63297 > (arr_48 [i_9] [i_7 - 1] [i_9] [1]))))));
                        }
                    }
                }
            }
            arr_51 [i_7 + 2] [i_9] = 1;
        }

        /* vectorizable */
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            var_23 = 16783969241321190965;
            arr_54 [i_7] = (3487360190 ? var_9 : 0);
        }
        var_24 = (min(var_24, ((((((arr_48 [2] [i_7 + 1] [i_7 + 1] [10]) ? 3059919045 : var_2)) == (((var_8 << (2331987167 - 2331987153)))))))));
    }
    #pragma endscop
}
