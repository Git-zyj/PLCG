/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [0] &= (min(((((arr_4 [2] [i_2 - 2]) ? 58241 : (((arr_1 [i_1] [i_1]) ? var_4 : 16380))))), (((arr_4 [i_0 + 1] [i_0 - 3]) ? var_8 : (min((arr_1 [i_0] [i_0]), var_16))))));
                    var_17 = ((var_12 - ((-((-(arr_1 [i_0] [i_0])))))));
                    arr_8 [20] [i_1] [i_2 - 2] = (max(var_8, ((((5641 << 1) ? 80 : (65 || 2016))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 ^= ((~((var_9 ? var_8 : 4800804260100796870))));
                                arr_13 [i_1] [i_1] [i_1] [17] [17] [i_1] = (min(-29836, 9223372036854775808));
                                var_19 *= 0;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                {
                    var_20 = (max((max(var_15, -70514397)), (((78 ? 1 : (arr_23 [i_5] [i_5] [i_7 + 1] [i_6]))))));
                    var_21 *= ((max(-4800804260100796858, (arr_12 [i_7] [0] [21] [i_7 - 1] [i_7] [i_7 - 1]))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_22 = 1;
                                arr_28 [i_5] [i_7] [7] [i_8] [i_8] [i_6] [i_8] = (-((var_9 + (arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 + 1]))));
                                arr_29 [5] [i_5] [i_7] [i_7] [i_7] [i_5] [i_5] = ((((((-119 + 2147483647) << (((arr_5 [20] [i_7 + 2] [20] [i_9]) - 1))))) ? (var_3 > 80) : -255));
                                var_23 *= (((2016 * 7081987605219632497) ? 766036066744848803 : (-29836 * 1)));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_33 [i_5] [i_5] [i_7] [i_7] [i_7] = arr_25 [i_5] [i_6] [i_7] [i_10];
                        arr_34 [12] [i_7] [12] [i_10] = (min((~8470363747026685843), (arr_15 [i_7 - 1])));
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_37 [i_7] [i_6] [i_6] [i_6] = (min(4992429081847589577, 1374298417004938209));
                        var_24 = (((!var_11) ? (41499653862201024 != var_1) : var_5));
                    }
                    var_25 = (16796 + 41499653862201027);
                }
            }
        }
        arr_38 [i_5] = (((arr_23 [i_5] [i_5] [i_5] [i_5]) != 1));
    }
    var_26 = (min(var_26, var_14));
    var_27 = (((-var_0 ? (16384 * -80) : ((max(var_13, var_7))))));
    var_28 = var_11;
    #pragma endscop
}
