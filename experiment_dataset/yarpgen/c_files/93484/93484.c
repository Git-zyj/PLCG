/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((2535177797 + 2535177799) | 2535177797))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        var_14 = (max(var_14, ((((~var_3) ? var_5 : 62038)))));
                        arr_9 [i_0] [i_3] [16] [7] = 2535177797;
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        var_15 = (min(var_15, ((((~(arr_7 [i_1] [i_2])))))));
                        var_16 = (((arr_1 [i_0] [i_1]) ? 2535177797 : ((+(((arr_7 [i_2] [i_2]) ? 2373639271 : 1199161112))))));
                        var_17 ^= arr_0 [i_0] [1];
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        var_18 = (~var_6);
                        var_19 = 40;
                        arr_16 [i_2] [i_0] = 43;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_20 = (min(((min(1726513115, 1726513126))), var_9));
                                var_21 |= ((((var_3 & 99) ? ((((arr_17 [i_0] [i_1] [i_0] [i_6]) > (arr_1 [2] [2])))) : (-127 - 1))));
                            }
                        }
                    }
                    var_22 += (arr_8 [i_0] [i_0] [i_1] [i_2]);
                    arr_21 [i_0] = (min(((min(40617, var_4))), 11));
                    arr_22 [i_2] [i_1] [i_0] [i_0] = 0;
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_23 = ((((18446744073709551615 + (arr_6 [i_8] [i_8]))) < var_1));
                    arr_25 [i_0] [i_1] [i_8] [i_8] = (((-var_12 + 2147483647) >> ((((((((arr_11 [i_0] [i_0] [i_0] [i_8]) | 1726513112))) ? 4144536644 : (arr_5 [4] [4] [4]))) - 4144536629))));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_24 = 1;
                    var_25 = 0;
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    arr_33 [i_0] = 0;
                    var_26 ^= -107;
                    arr_34 [i_10] [i_0] [i_0] = 99;
                }
                arr_35 [i_0] [i_0] [i_0] = 40;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            {
                arr_42 [i_11] [i_11] [i_11] = -23;
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_27 = 2568454173;
                            arr_49 [i_11] [i_12] [i_13 - 2] [i_14] [i_14] [i_14] = (!(((1 % (max((arr_18 [i_11] [i_14]), (arr_44 [i_11] [i_12] [i_13 - 4] [i_14])))))));
                            arr_50 [i_14] = var_3;
                            arr_51 [13] [i_14] [13] = (439141921015371893 ? ((1 ? (((121 ? 2568454169 : 1))) : (max(52257, var_5)))) : (min((arr_27 [i_11] [i_11] [i_13]), var_0)));
                        }
                    }
                }
                arr_52 [i_12] [i_12] [i_12] = (((min((((arr_46 [i_11] [i_11] [i_11] [i_11]) ? var_0 : var_10)), (((var_1 == (arr_19 [i_12])))))) >> (2535177797 - 2535177790)));
                arr_53 [i_11] [i_12] = (min(31, (arr_47 [i_12] [i_11])));
                var_28 = (((arr_18 [22] [22]) ? ((((52269 ? (arr_45 [i_11] [i_11] [i_12] [i_12]) : (arr_47 [i_11] [i_11]))) | 1)) : (arr_36 [i_11])));
            }
        }
    }
    #pragma endscop
}
