/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (min(var_11, 25));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
        var_12 = (min(var_12, 25));
        var_13 = 0;
        arr_5 [i_0] = (arr_3 [i_0] [i_0]);
        var_14 = (min(var_14, (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_8 [17] = var_3;
        var_15 = (max(var_15, (-12711 + var_7)));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = (arr_12 [i_2 + 1] [i_2 - 1]);

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_16 = -var_5;
            var_17 = -49;
            arr_18 [i_2] = (((arr_16 [i_3 + 1] [i_2 + 1] [i_2 + 1]) ? 7516164193855485064 : 0));
            var_18 *= (arr_0 [19]);
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_19 = arr_12 [i_4] [i_5];
            var_20 = (max(var_20, (arr_9 [i_4] [i_5])));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_21 = (min(((max(56197, 64))), (arr_9 [i_4] [i_6])));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_34 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((223 >> (-25517 + 25523)));
                            var_22 = (min(var_22, ((((((-1505350503 % (arr_30 [i_8 + 2] [i_8 + 2] [i_9] [i_9] [i_9])))) && ((min(var_1, (arr_30 [i_8 + 2] [i_9] [i_9] [i_9] [i_9])))))))));
                        }
                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            var_23 = -5;
                            arr_38 [i_4] [i_6] [i_7] [i_8 - 1] [i_10] = ((!((max(var_0, ((215 ? (arr_33 [i_8 - 1]) : var_4)))))));
                            arr_39 [i_4] [i_4] [i_4] [15] [i_7] [15] [i_10] = var_4;
                            arr_40 [i_4] [i_6] [16] [i_8 + 1] [i_10] = ((3234841540 ? (arr_1 [i_4]) : ((1 ? var_7 : var_7))));
                        }
                        arr_41 [3] [i_6] [i_6] [i_7] [i_8] = ((((((-999250624 + 2147483647) >> (((arr_20 [i_6]) - 51))))) == -var_7));
                    }
                }
            }

            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                arr_45 [i_4] [4] [i_11] [i_11] = -954316127680698418;
                arr_46 [i_4] = ((((((~-1999127870) ? 127 : ((var_8 ? var_5 : (arr_27 [i_4] [i_6] [i_6] [i_6])))))) ? (min((arr_22 [i_4]), 62237)) : (((-(arr_14 [i_6] [i_11]))))));
                var_24 = var_4;
            }
        }
        for (int i_12 = 1; i_12 < 18;i_12 += 1)
        {
            var_25 ^= 5849984943585308967;
            var_26 = (min(var_26, (arr_49 [i_12 + 1] [i_12] [i_12 + 1])));
            arr_51 [i_4] [i_4] = (((((480 ? (720644962 * 2097136) : (((min((arr_23 [i_12] [i_4]), 1))))))) ? ((max(var_3, ((max(var_0, var_1)))))) : 18446744073709551615));
            var_27 = (min((arr_22 [i_4]), (((arr_50 [i_4] [i_4]) ? 14 : 2143580643))));
        }
        arr_52 [i_4] = 2147483647;
        arr_53 [i_4] = min((((((-2147483642 - (arr_9 [i_4] [i_4]))) + var_4))), (((arr_32 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (arr_32 [i_4] [15] [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_32 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))));
    }
    var_28 = 89;
    var_29 = var_9;
    #pragma endscop
}
