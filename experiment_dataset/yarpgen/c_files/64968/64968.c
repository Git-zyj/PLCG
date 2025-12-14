/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 -= (((((arr_2 [i_1 + 2] [i_1 + 1]) != 0)) ? 12015 : ((min(213, (arr_5 [i_1 + 2] [i_1 + 1] [i_1 - 1]))))));
                    var_11 = (var_9 && 9);
                }
            }
        }
    }

    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {
        var_12 = (arr_7 [i_3]);
        var_13 = ((~((((arr_8 [i_3] [i_3 + 2]) == (arr_8 [i_3] [i_3 - 2]))))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_12 [i_4] = ((-((14336 ? (var_7 + 11698388064108202945) : (var_1 || 0)))));
        var_14 = ((40 >= ((max(var_3, 1)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_15 = (min(var_15, -74));
            var_16 = (32704 % 4410724686585463557);
            var_17 = (min(var_17, (-14888 | 8755)));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_18 |= 42837;
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_19 = ((-(19 & var_0)));
                            arr_26 [i_5] [i_6] [i_7] [i_6] [i_9] [i_8] [i_9] = -58;
                            var_20 = var_3;
                        }
                    }
                }
                var_21 = (0 | 0);
                var_22 = (min(var_22, (((var_4 && (!-92))))));
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                arr_29 [16] [i_6] [i_6] [i_10] = (-9223372036854775807 - 1);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 17;i_12 += 1)
                    {
                        {
                            arr_37 [i_12] [i_11] [i_10] [i_6] [i_5] = (var_8 / var_2);
                            var_23 ^= (-6147 < var_8);
                            arr_38 [i_5] = (558446353793941504 - 1766555835);
                            var_24 ^= -3275978063152041621;
                        }
                    }
                }
                var_25 = (min(var_25, 29360128));
            }
        }
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            var_26 = (max(var_26, ((((var_0 != 2747547497) == -558446353793941528)))));

            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                var_27 = -8726;
                var_28 = (min(var_28, -8755));
            }
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        {
                            var_29 = (var_9 | 8754);
                            var_30 = -114;
                        }
                    }
                }
            }
            var_31 = (max(var_31, ((((var_4 | 0) || 1547419798)))));
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 19;i_19 += 1)
            {
                {
                    var_32 = (min(var_32, (arr_40 [i_5] [i_18] [i_19])));
                    arr_62 [i_5] [i_5] [i_18] = (var_3 - 10732);
                }
            }
        }
        var_33 += ((((((arr_28 [4]) <= var_1))) + 108));

        for (int i_20 = 2; i_20 < 18;i_20 += 1)
        {
            arr_65 [i_20] [i_5] [i_5] = -558446353793941504;
            var_34 = 51309;
        }
    }
    #pragma endscop
}
