/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (min(((((1 ? 126 : 1)) - (min(139, -538016365)))), -24246));
        var_10 = var_3;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            var_11 ^= 64512;
                            var_12 = var_8;
                            arr_17 [i_3] = var_0;
                        }
                        arr_18 [i_4] [6] [i_4 - 3] [i_4] [i_4 - 3] &= (arr_16 [i_1] [i_1] [i_2] [i_1] [1] [1] [i_4]);

                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            arr_22 [i_1] [i_3] [i_3] [i_3] [i_4 + 1] [i_3] [i_6 - 1] = (((arr_6 [i_6 - 1]) ? 1 : 1));
                            arr_23 [i_1] [i_2] [i_2] [i_3] [i_3] [i_6] = ((var_3 ? 0 : (arr_7 [i_1] [i_2])));
                            var_13 -= (6 != 14510810825427662160);
                        }
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_3] = (39208 | 76);
                            arr_29 [i_1] [i_1] [i_3] [i_3] = var_5;
                        }
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            var_14 = ((var_7 == 227) - ((~(arr_10 [i_4 - 2]))));
                            var_15 = (min(var_15, ((((arr_26 [12] [i_8 + 1] [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_8 + 1] [i_8 - 1]) == var_6)))));
                            var_16 = -88;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_37 [i_3] = (62 * 16);
                            arr_38 [i_1] [i_1] [i_3] [i_1] = var_7;
                        }
                        arr_39 [i_1] [i_3] [i_1] [i_3] = ((((1 ? -101 : 254)) - (26297 + var_7)));

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_17 = (-((var_1 ? var_9 : 56)));
                            var_18 ^= 940170819;
                            arr_44 [i_1] [i_2] [i_1] [i_3] [i_2] [i_2] = arr_11 [i_3];
                        }
                    }
                    var_19 = ((((((arr_32 [i_3] [i_2] [i_3]) ? 1083624639 : var_4))) ? var_0 : -1));
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_20 = ((arr_21 [i_1] [i_1] [i_1] [i_11] [i_12] [i_1] [i_3]) == var_2);
                                var_21 = (max(var_21, (!var_5)));
                                arr_51 [i_1] [i_3] [i_2] [i_3] [i_1] [i_3] [i_12] = ((220 | (arr_27 [i_1] [i_2] [i_3] [i_11 + 4] [i_12])));
                                var_22 = (min(var_22, (((var_4 < ((1 ? (arr_12 [10] [i_3] [10] [i_12]) : var_1)))))));
                            }
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            {
                                var_23 = (((((arr_9 [i_13]) >= var_8)) ? var_0 : (min((min(6732015841547685398, var_5)), ((min(255, var_5)))))));
                                var_24 = (max(var_24, var_4));
                                arr_59 [i_13] [i_2] = ((((var_9 ? (51 != var_7) : (-1489237538 ^ 524287)))) ? (var_1 + var_2) : (max(var_7, ((var_7 ? 12390 : var_9)))));
                                var_25 = 37;
                            }
                        }
                    }
                    arr_60 [i_13] = ((((((arr_53 [i_13] [i_2]) ? var_9 : var_5)) - ((var_8 * (arr_20 [i_1] [i_1] [i_13] [i_2] [i_1]))))));
                }
                var_26 = (min((min((var_0 % var_0), var_6)), var_2));
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 18;i_17 += 1)
                    {
                        for (int i_18 = 4; i_18 < 18;i_18 += 1)
                        {
                            {
                                var_27 = ((11714728232161866213 >> (-524306 + 524361)));
                                arr_71 [i_17] [i_17] [i_16] [i_17] [i_16] = (min(((((arr_34 [i_18 - 4] [i_18 + 1] [i_18 + 2] [i_17 + 1] [i_17 + 1]) * 1))), (((((var_6 >> (var_5 + 24861)))) ? 68 : var_3))));
                            }
                        }
                    }
                }
                arr_72 [i_1] [i_1] [i_1] |= ((((min((!var_9), (arr_34 [i_1] [i_1] [i_2] [i_2] [i_2])))) ? ((((((var_5 ? 2147483647 : var_1))) && ((min(39233, 24276)))))) : ((((min(-1294310094, -24224))) ? (!var_7) : (max(-1319586775, 65523))))));
                var_28 = (min(var_28, (((((((arr_15 [i_1] [i_2] [i_2] [i_2]) + ((min(-89, 1294310110)))))) ? (-24250 / 24236) : var_1)))));
            }
        }
    }
    #pragma endscop
}
