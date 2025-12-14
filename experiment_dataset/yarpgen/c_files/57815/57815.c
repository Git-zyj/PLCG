/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (((var_6 % var_9) % (var_1 > var_4)));
                    arr_9 [i_0] [i_1] [i_2] = ((var_11 != var_6) - var_9);
                    var_16 = var_0;
                    arr_10 [5] [i_2] = ((var_10 ^ (var_1 * var_11)));
                    arr_11 [i_1] = (((var_8 | var_13) | var_14));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_17 = ((max((max(-92, 95794175930737345)), var_11)) + 3168528532721651331);
                    var_18 = (max(((((var_15 | var_5) || ((min(var_12, var_11)))))), (((min(var_13, var_7)) | var_14))));
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    arr_18 [i_1] [i_1] = ((min(var_15, (var_11 + var_3))) | (((max(((max(var_11, var_6))), (max(var_12, var_10)))))));
                    arr_19 [i_0] [i_1] [i_4] = var_14;

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_1] [i_4] [i_4] [i_5] = min(((min((var_12 != var_6), (min(var_8, var_14))))), var_13);
                        arr_24 [i_1] &= ((max((min(var_5, var_0)), (var_12 | var_14))) | (((min(var_11, var_13)) * (var_7 >= var_3))));
                        arr_25 [i_1] [i_4] [i_5] |= var_10;
                        var_19 = (max((((var_13 > var_3) % (min(var_3, var_3)))), var_12));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_1] = (((((max(var_13, var_11)) ^ var_14)) * (((var_7 | var_1) / (var_12 % var_10)))));
                        var_20 |= (min(((((var_4 * var_4) >> ((var_10 >> (var_0 - 103)))))), (max((min(3168528532721651331, 1500357211)), ((max(96, -40)))))));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_21 = (((((min((var_12 == var_7), (min(var_9, var_9)))))) >= (min((max(var_5, 0)), ((max(-16211, 15)))))));
                        var_22 = (min(var_22, ((var_1 - (((((var_8 >> (var_14 + 113))) * var_7)))))));
                        arr_31 [i_7] [i_7] [i_1] [i_7] [i_0] = ((((((((max(var_3, var_4))) && ((min(var_15, var_8))))))) ^ (((min(var_5, var_9)) + (max(var_2, var_5))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_23 += (max((min((var_10 + var_4), (max(var_5, var_2)))), (((var_12 > var_6) ^ (var_5 * var_1)))));
                                arr_36 [6] [i_1] [i_4] [i_8] [i_9] = (((max((min(var_15, var_5)), (var_7 + var_6))) ^ ((max(var_3, (((var_7 >> (var_10 - 25652)))))))));
                                var_24 -= (max((max(((min(var_0, var_3))), var_1)), ((max((var_14 | var_8), (var_2 % var_3))))));
                                var_25 = (min(((min((max(var_14, var_7)), (var_13 >= var_14)))), (max(var_0, var_4))));
                                var_26 = var_12;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    arr_39 [i_1] = (((var_5 || var_1) && (var_11 && var_3)));
                    arr_40 [i_1] = var_15;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_27 = (((var_2 >= var_13) * (var_3 + var_8)));
                                var_28 = ((var_6 % (var_12 + var_10)));
                            }
                        }
                    }
                    arr_45 [i_0] [i_1] [i_1] [i_10] = (((var_14 && var_14) * ((var_4 << (var_14 + 106)))));
                }
                var_29 = (max(var_29, ((((min((min(var_1, var_4)), var_13)) ^ ((((var_10 * var_11) >> (((var_14 | var_0) + 12))))))))));
                var_30 = ((var_5 || (((min(var_5, var_9)) == (var_1 + var_12)))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                            {
                                arr_53 [i_15] [i_13] [i_13] [i_0] = var_0;
                                arr_54 [i_13] [14] [i_13] = var_13;
                                arr_55 [i_0] [i_1] [i_13] [i_14] [13] [i_14] [i_15] = var_1;
                                arr_56 [i_13] [i_13] [i_15] = var_7;
                                arr_57 [i_0] [i_1] [i_13] [18] |= (((var_6 + var_5) == var_0));
                            }
                            /* vectorizable */
                            for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                            {
                                arr_61 [i_16] [i_13] [i_0] [i_13] [i_0] = ((var_0 != var_10) - var_2);
                                var_31 = (((var_12 * var_0) | (143 | -2147483636)));
                            }
                            for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                            {
                                arr_64 [i_0] [i_1] [i_1] [i_1] [i_1] [i_17] [i_17] &= (min(((((((var_0 >> (var_4 - 3117477037)))) | (max(var_14, var_15))))), ((var_5 >> (((min(var_8, var_4)) - 44789))))));
                                arr_65 [i_17] [i_14] [i_13] [10] [i_0] = (((((min((max(var_11, var_10)), (var_0 && var_1))))) == (((var_2 ^ var_5) & (min(var_13, var_1))))));
                                var_32 = (max(var_32, ((((max((min(var_8, var_9)), (min(var_7, var_10))))) - var_9))));
                            }
                            arr_66 [i_0] [i_1] [12] [i_13] = var_10;
                            var_33 -= (min(((((max(var_6, var_11)) || ((min(var_7, var_7)))))), (min(((min(var_0, var_14))), (min(var_2, var_15))))));
                        }
                    }
                }
            }
        }
    }
    var_34 = max(var_6, ((((max(var_11, var_9))) + (var_2 - var_14))));
    #pragma endscop
}
