/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_15));
    var_19 = (max(var_19, var_1));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_20 = ((var_8 % var_9) - (var_2 | var_16));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_21 = (-19157 ^ 19161);
                        arr_11 [i_0] [i_0] = (((((var_10 + var_11) % var_16)) - (((var_4 >= (var_17 / var_17))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = var_1;
                        arr_13 [i_0 - 1] [i_0 - 1] [i_0] = (((var_5 % var_7) + (var_1 * var_0)));
                    }
                    for (int i_4 = 4; i_4 < 6;i_4 += 1)
                    {
                        var_22 *= var_13;
                        var_23 = (((var_14 || var_13) << ((((var_6 >> (var_8 - 134))) - 934))));
                        var_24 = var_11;
                    }
                    for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        var_25 = var_16;
                        var_26 = (((var_8 / var_15) >> (((var_15 | var_15) - 201))));

                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_0] [i_6] = (((var_2 - var_15) <= (var_1 * var_11)));
                            var_27 = (((var_12 != var_5) - (var_17 != var_1)));
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, (var_17 & var_9)));
                            var_29 = (var_6 - var_2);
                        }
                        for (int i_8 = 3; i_8 < 9;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_0] [i_2] [i_2] [i_8] [i_0] = var_16;
                            var_30 *= (((((var_16 >= var_1) ^ var_11)) >= (var_17 > var_3)));
                            arr_30 [i_0] [i_0] [i_2 - 1] [i_0] [i_0] [i_0] [i_0] = ((var_15 != (var_14 - var_5)));
                            arr_31 [i_0] [i_0] [i_2] [i_0] [i_8] = (((var_15 ^ var_4) != (var_1 ^ var_16)));
                        }
                        arr_32 [i_0] [i_1] [i_1 - 1] = ((var_4 - (var_14 + var_8)));
                    }
                    for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_2] = ((((((var_15 <= (var_15 - var_3))))) <= (var_2 / var_0)));
                        var_31 = (((var_8 % var_3) == (var_4 % var_15)));
                        arr_37 [i_0] [4] [i_0] = (((var_2 / (var_16 != var_10))) ^ (((var_9 << (var_2 - 9040368947283067974)))));
                        arr_38 [i_1] [i_0] = (6785618069369372787 >= 1);
                        arr_39 [i_0] [i_1] [i_0] = (((var_10 - var_13) == (-19168 != 15)));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 6;i_11 += 1)
                        {
                            {
                                arr_44 [3] [i_1 + 1] [8] [8] [i_0] = var_15;
                                var_32 = ((var_6 != (var_13 - var_8)));
                            }
                        }
                    }
                }
            }
        }
        arr_45 [i_0] = (((var_6 ^ var_4) != var_3));
        arr_46 [i_0] [i_0] = (((1 - 19157) <= (((var_13 + var_10) ^ var_10))));
    }
    for (int i_12 = 3; i_12 < 14;i_12 += 1)
    {
        var_33 = ((var_12 * ((var_4 - (var_15 < var_17)))));

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_34 *= (((var_8 / var_7) >= (var_14 / var_17)));
            var_35 = var_7;
        }
        for (int i_14 = 1; i_14 < 14;i_14 += 1)
        {
            arr_55 [i_14] [i_12 - 3] = ((var_7 - ((((var_17 > ((var_15 << (var_13 - 3125)))))))));
            arr_56 [i_12] = (((var_0 + var_14) + var_9));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 14;i_16 += 1)
                {
                    {
                        var_36 = ((((var_17 << (var_14 + 301723644542278372))) ^ (var_3 ^ var_13)));

                        for (int i_17 = 1; i_17 < 15;i_17 += 1)
                        {
                            var_37 = var_10;
                            arr_64 [i_12] [i_17] = (var_14 % var_16);
                        }
                        arr_65 [i_12] [i_16] [i_12] [i_12] [i_16 + 2] = ((((var_0 << (var_16 - 26165))) != ((var_0 >> (var_12 - 766398944365289079)))));

                        for (int i_18 = 2; i_18 < 14;i_18 += 1)
                        {
                            var_38 *= (((var_16 == var_11) * (var_4 < var_1)));
                            var_39 -= (var_15 || var_12);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
