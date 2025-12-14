/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_2] [i_1] [i_2] = ((~(!1)));
                    var_15 = (((arr_1 [i_0 - 1] [i_0 - 1]) >> (arr_4 [i_0 - 3] [i_1])));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0 - 1] = (min(((max(1, (arr_0 [i_0 + 1])))), ((1 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 2])))));
                    arr_12 [i_1] = 63688;

                    for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_4] [i_1] [i_1] [i_4] = (((((1 ? (arr_7 [i_0 - 2] [i_4 - 1] [i_4 - 1] [i_4]) : var_13))) ? (arr_3 [i_0 - 2] [i_4 - 1]) : (!1)));
                        var_16 = (arr_13 [i_4] [i_4] [i_0 - 3] [i_4] [i_0 - 3]);
                    }
                    for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_3] = var_6;
                        var_17 = (((((arr_0 [i_5 - 1]) || (arr_13 [i_5 + 1] [i_5 + 1] [i_5] [i_1] [i_1]))) ? var_8 : ((((var_8 > var_1) == (((arr_18 [i_5 - 1] [22] [i_1] [i_0]) ? (arr_15 [i_1] [i_1] [i_1] [i_0]) : -6281977553949058217)))))));

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_23 [i_0 - 1] = (((((((min(1, 1))) - (~187)))) ? ((32306 ? 27088 : (max(-381109783, (arr_0 [i_3]))))) : ((min(19847, 63688)))));
                            arr_24 [4] [i_6] = (((((arr_18 [i_0] [i_0 + 2] [i_0] [i_0 - 3]) > (min((arr_3 [i_3] [10]), 381109791)))) ? ((((arr_18 [i_5 + 1] [i_5 + 1] [21] [21]) << (((arr_13 [i_0 - 2] [i_1] [i_6] [i_1] [i_6]) + 7))))) : (min(var_9, (max((arr_17 [19] [24] [i_1] [i_0 - 1]), (arr_15 [i_0] [i_0] [i_1] [i_0])))))));
                            var_18 = min(((((var_8 ^ (arr_2 [i_3]))) * (-57 && var_10))), var_1);
                            arr_25 [i_3] = (max(0, 1));
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_19 &= (((min(4294967290, (((arr_34 [i_0] [i_7] [i_8] [i_9]) / 65535)))) != ((((arr_21 [i_9] [3] [17] [i_9] [i_9 + 2] [3]) ? (0 * 0) : (max(1, var_13)))))));
                                arr_37 [5] [i_1] [i_8] [i_8] [i_9] = var_12;
                            }
                        }
                    }
                    var_20 = (var_9 ? (((1 + var_2) << ((((var_9 ? 33554431 : var_10)) - 33554398)))) : ((((arr_26 [3] [i_1] [i_1] [i_7]) * ((((arr_29 [i_0] [i_1] [i_0]) > -92)))))));
                    arr_38 [2] = ((((2430747990 <= 4611686018427387904) ? ((max(1, -14))) : (1 | 1))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_43 [i_0] [i_0] [i_7] [i_10] [i_11] [i_10] |= ((-((-(arr_2 [i_11 + 1])))));
                                arr_44 [22] [i_7] = (~var_8);
                            }
                        }
                    }
                }
                for (int i_12 = 1; i_12 < 23;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            {
                                var_21 = (max((((arr_51 [i_0] [i_1] [i_13]) ? (arr_28 [i_12] [i_1] [i_12] [i_13 + 2]) : ((((arr_9 [i_14]) > 4611686018427387909))))), (arr_26 [i_0 + 2] [i_0] [5] [i_0 - 3])));
                                var_22 = ((!((1 > (arr_29 [i_0 - 1] [i_12 + 1] [i_13 + 3])))));
                            }
                        }
                    }
                    var_23 = ((((max(52, 19743))) < (!-10684)));
                    arr_55 [i_1] [i_1] = (min(((0 ? -16494 : 999831675)), 27088));
                }
                arr_56 [20] [20] = (min(1, (max(-10692, ((-(arr_51 [i_0] [i_1] [i_1])))))));
                var_24 = (max((max(-19, (arr_6 [i_1] [i_0] [i_0]))), 2763877048));
            }
        }
    }
    var_25 ^= (((((((max((-2147483647 - 1), 9223372036854775807))) ? ((255 ? 384 : var_0)) : (((min(2040, var_6))))))) ? var_3 : (((var_6 * (0 ^ 77))))));
    #pragma endscop
}
