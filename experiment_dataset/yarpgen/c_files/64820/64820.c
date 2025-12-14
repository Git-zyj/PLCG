/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] = ((-(arr_0 [i_1])));
            var_17 = (((arr_2 [i_0 - 4] [i_1]) > (arr_2 [i_0 - 1] [i_0 - 1])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_10 [i_2] = var_10;
            arr_11 [i_0] [i_2] &= (((((arr_0 [1]) ? var_7 : var_5)) & (!4512)));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_18 = (((~14362) ? (arr_8 [i_0 + 2]) : (((var_0 != (arr_5 [i_0] [i_2]))))));
                var_19 -= (arr_13 [i_0] [i_2] [i_3]);
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_20 = var_15;
                var_21 = ((var_14 * 24) >= 39000);
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_22 = (arr_14 [i_5] [i_2] [i_5]);
                var_23 &= (((arr_19 [8] [i_2] [i_2] [8]) ? (arr_8 [i_0 + 2]) : (3 & var_14)));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_24 = ((((((arr_19 [i_5] [i_5] [14] [i_6]) ? 4524 : (arr_13 [i_0 - 1] [7] [i_6])))) ? (~61004) : (arr_17 [i_0 - 1] [i_0 - 1] [i_5] [i_6 + 1])));
                            var_25 = (min(var_25, (((-(((arr_12 [i_0 + 1] [i_0 + 1] [i_5] [i_5]) ? (arr_9 [i_5] [i_2]) : var_10)))))));
                        }
                    }
                }
                var_26 *= (var_2 ^ (((arr_25 [12]) + (arr_7 [14] [1]))));
            }
            var_27 = var_0;
            var_28 = ((var_11 ? var_9 : 51191));
        }
        var_29 = var_16;
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_30 = (((((1 | 940) / 72)) + (arr_29 [19] [i_8 + 1] [i_9])));
                    var_31 = (((((max(1710193251906633123, 51148)))) && var_11));
                    var_32 = (((max((arr_17 [i_9] [6] [6] [i_0]), (arr_0 [i_0]))) & (((var_8 != ((var_15 - (arr_3 [i_8]))))))));
                    var_33 = (((((((arr_28 [i_0] [i_8] [i_9]) % (arr_5 [i_8] [i_9]))) != ((((arr_26 [i_9]) ? 3232033652994671421 : var_7))))) ? (max(((var_2 ? (arr_22 [i_0] [5]) : (arr_21 [19] [i_9]))), (((!(arr_24 [i_0] [i_8] [i_9])))))) : (((-var_6 + 2147483647) >> ((((5526807107356425760 ? 1613305697 : 44247)) - 1613305695))))));
                }
            }
        }
        var_34 = (~var_15);
    }
    var_35 &= ((((min(var_10, var_2))) ? (((var_1 ? 43442 : ((0 ? -5 : -1))))) : (min(var_14, ((min(var_4, var_1)))))));
    #pragma endscop
}
