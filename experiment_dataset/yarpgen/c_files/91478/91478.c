/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = max((((+((((arr_0 [i_0]) && var_7)))))), (((arr_3 [i_1 + 1] [i_1 + 1]) ? (arr_1 [12]) : (!62))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [1] [i_1] [i_2] [i_3] [i_3] = -7294022961362444276;
                            arr_12 [i_0] [12] = ((0 && ((min((arr_6 [i_0]), -7294022961362444264)))));
                            arr_13 [6] [i_2] = (1 ? (((-2538265591497064307 ? (1 / 4) : (~1)))) : ((((max(var_3, 1380316015))) ? ((((!(arr_6 [i_0]))))) : 4212111770)));
                        }
                    }
                }
                arr_14 [3] = 1;
                arr_15 [i_0] [i_0] = ((!(arr_3 [i_0] [i_1 + 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                arr_22 [8] [i_5] = (min((min((arr_19 [i_4] [i_4] [i_4]), (arr_18 [i_4] [i_5] [i_4]))), (((max(-8, 2147483647))))));
                var_12 = ((((max((max(0, (arr_20 [i_4] [i_5]))), (167 <= var_11)))) ? ((~(max(var_11, var_1)))) : ((min(-7294022961362444276, (((var_5 ? 1 : (arr_18 [0] [i_4] [4])))))))));

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_25 [i_6] = (((((var_8 ? 7294022961362444263 : -11)) >> (((-14 >= (arr_17 [i_4])))))));
                    arr_26 [i_4] [i_5] [i_6] = ((((min((arr_19 [11] [1] [i_6]), (arr_19 [i_4] [i_4] [i_4])))) ? ((-12975 ? 0 : 4294967295)) : ((((arr_19 [i_4] [i_4] [i_4]) ? (arr_19 [5] [i_5] [i_4]) : (arr_19 [i_6] [i_5] [i_4]))))));
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    arr_30 [i_5] = 0;
                    var_13 = (max(var_13, ((max(16, (arr_23 [i_7] [i_5] [i_4]))))));
                    var_14 -= (arr_16 [i_4]);
                }
                for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    var_15 = ((((((((var_3 ? var_8 : var_2))) ? (((arr_23 [8] [i_5] [i_5]) & (arr_28 [i_4] [i_5] [i_8 + 1]))) : 1))) || 1));
                    var_16 *= var_4;
                }
                for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                {
                    var_17 = (min((arr_31 [i_5]), (((arr_31 [i_9 - 1]) - -7294022961362444276))));

                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_4] [i_5] [i_9] [0] &= 1;
                        var_18 = (min(var_18, (((~(((1 <= ((1 ? 6144 : var_3))))))))));
                        var_19 -= (max((~1), -9225));
                        var_20 = (max(var_20, (((var_5 ? ((min(((2113929216 << (-112 + 134))), ((((arr_18 [i_10] [i_9] [i_4]) < (arr_20 [0] [i_5]))))))) : ((var_5 ? (min(-5310015566592952717, -12)) : (arr_33 [i_10]))))))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_21 = ((255 >> (-106 + 107)));
                        var_22 = (((((!(arr_24 [i_4] [i_4] [i_9 - 1]))) ? (arr_31 [i_9 + 1]) : var_10)));
                    }
                    arr_41 [i_9] [i_4] = ((-(max(3, (arr_29 [i_4] [i_5] [i_9 - 1])))));
                }
            }
        }
    }
    var_23 = (max(var_23, ((min(((max((min(var_11, var_2)), var_7))), (max(var_11, ((-8835681322075524278 ? 4294967293 : 28)))))))));
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 20;i_14 += 1)
            {
                {
                    arr_53 [18] [10] [i_14] [i_14] = (((367746843 << (((arr_51 [i_12] [i_13] [i_14 + 2]) - 2033294963)))));
                    var_24 = -19;
                    var_25 = var_3;
                }
            }
        }
    }
    #pragma endscop
}
