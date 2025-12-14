/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 *= (((max(1, var_3))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_1] [10] [10] [i_1] [i_1] = (arr_9 [3] [3] [i_1] [i_2] [3]);
                        var_13 = (((arr_4 [i_1] [i_2] [i_3]) * ((2173532453 ? var_8 : 1))));
                        arr_11 [7] [i_0] [i_1] [i_2] [i_2] [i_2] = 1;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_14 [i_0] [i_4] [i_0] |= (arr_6 [i_4] [i_2] [i_1]);
                        arr_15 [i_0] [i_0] [i_2] [i_4] = (1 >= var_0);
                        var_14 = (-((var_1 ? (arr_9 [i_4] [i_4] [15] [i_0] [i_0]) : 51563)));
                        arr_16 [10] [10] [i_4] = (var_7 / 30641);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_5] [1] = (min((!var_0), (max((!var_1), (arr_2 [11])))));
                        arr_20 [i_5] [i_5] [i_5] [i_0] = (max((var_8 <= var_6), var_0));
                        arr_21 [1] [i_5] [i_2] [i_1] [i_5] [i_0] = ((var_2 ? (arr_13 [i_0] [i_1] [i_1] [i_1] [i_5]) : -14454));
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5] = (arr_3 [i_2]);
                    }

                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        var_15 = (max((((((max(var_2, 4476))) ? (~14) : 7644))), var_2));
                        var_16 = (arr_2 [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_7] [1] [i_8] = ((1 >> (var_1 + 7358197335762429321)));
                            var_17 = (((((((1 ? (arr_4 [i_8] [i_8] [i_8]) : var_8))) ? var_11 : (((var_6 == (arr_4 [i_2] [i_2] [i_2]))))))) <= var_8);
                            var_18 = ((1073741823 ? (!45245) : ((((var_1 == (arr_17 [i_1] [i_2] [i_1] [i_0])))))));
                        }
                        arr_31 [i_0] [i_1] [i_2] [i_7] = (arr_2 [i_1]);
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_19 = -0;

                        for (int i_10 = 0; i_10 < 0;i_10 += 1)
                        {
                            var_20 -= (min(-2137640957, (!0)));
                            var_21 ^= (max(((var_3 ? (~var_8) : var_4)), (((102 ? (arr_36 [i_2] [i_10] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1]) : (((min(var_10, var_3)))))))));
                            arr_39 [i_10] [i_10] [i_2] [i_1] [i_10] [i_0] = (min(((((arr_17 [i_10] [i_10 + 1] [i_10] [i_10]) ? 224668953071088223 : (arr_5 [i_9] [i_9] [14])))), (((((arr_13 [i_0] [12] [i_2] [i_9] [12]) ? 18309312170513402548 : (arr_18 [i_0] [i_1] [i_10] [3] [1] [1]))) ^ (arr_9 [i_9] [i_9] [i_9] [i_9] [i_9])))));
                            var_22 = (arr_36 [i_0] [i_0] [i_1] [1] [i_9] [2] [i_10]);
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_23 -= 224668953071088222;
                            var_24 &= (min((max((arr_5 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_1] [i_2]))), var_3));
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [2] = var_1;
                        }
                        for (int i_12 = 3; i_12 < 15;i_12 += 1)
                        {
                            arr_46 [i_0] [i_0] = (max(((((arr_29 [i_0] [i_2] [i_12] [i_9] [i_9] [i_12 - 3]) && var_8))), (((arr_29 [i_1] [i_12] [i_2] [i_12] [i_12] [i_12 + 1]) << (((arr_29 [i_0] [15] [i_0] [i_2] [15] [i_12 + 2]) - 190))))));
                            var_25 ^= var_2;
                            var_26 -= (((16383 ? var_4 : -var_10)));
                        }
                        for (int i_13 = 2; i_13 < 14;i_13 += 1)
                        {
                            arr_51 [10] [12] [12] [i_9] [i_13 + 2] = (min((((arr_38 [i_13 + 2] [i_13 + 2] [i_13] [i_13 - 2] [i_13 + 2] [i_13 + 2]) << (var_7 - 38224))), ((max(40985, (arr_50 [i_9] [i_1]))))));
                            var_27 = (~224668953071088222);
                        }
                        arr_52 [i_0] |= (!var_6);
                        var_28 += min((((var_7 ? var_5 : (arr_50 [i_1] [i_2])))), (((arr_13 [i_0] [i_1] [i_0] [i_2] [i_9]) ? (arr_18 [i_9] [i_2] [i_0] [i_0] [2] [i_0]) : var_6)));
                    }
                }
            }
        }
    }
    var_29 &= ((((var_2 == (((var_8 ? var_4 : 1)))))));
    var_30 = var_8;
    var_31 = var_10;
    #pragma endscop
}
