/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] = ((~(((((-1 ? 11 : (arr_3 [i_1])))) & (min(var_8, 1152921504606838784))))));
                    var_12 += (((arr_5 [6]) ? ((-544178760 / (arr_6 [i_0] [i_0 - 1] [i_1] [6]))) : (min(-2226746385983800299, (arr_4 [i_0 - 2] [i_1 - 2] [i_1 - 2])))));
                    arr_10 [1] [i_1] [4] [i_2] |= -16802;
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
                    {
                        var_13 = ((1 ? (arr_11 [i_1 + 1] [i_1 + 1]) : (arr_6 [i_0] [i_3] [i_1] [i_0])));
                        var_14 = (max(var_14, (arr_3 [i_4 + 1])));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        var_15 += ((-9223372036854775801 ? var_4 : (((arr_7 [i_5] [i_3] [i_1] [7]) ^ var_4))));

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_3] [i_0] [i_0] = -4856256526285363603;
                            arr_23 [i_0] [i_0] [i_0] = ((-9223372036854775801 < (arr_17 [i_1 - 1])));
                            var_16 = arr_19 [i_6] [i_5] [i_1 - 2] [i_0];
                        }
                        for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            arr_26 [6] [i_5] [i_3] [6] [6] |= ((1 ? -3589622952059536212 : 123));
                            var_17 -= ((!(179 >= 5960)));
                            var_18 += (arr_20 [i_0 + 2] [i_7] [i_7 - 1] [i_0 + 2] [5]);
                        }
                        for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
                        {
                            var_19 = (((arr_7 [i_1 - 2] [i_3] [i_5 + 1] [i_5 + 1]) % ((((arr_17 [i_3]) <= -23)))));
                            arr_30 [i_0] [i_0] [i_1] [i_0] [i_0] [i_5 + 1] [i_8] = (arr_29 [i_1 - 2] [i_5 + 1] [i_0] [i_5 + 1]);
                            var_20 -= ((+((84 ? (arr_4 [i_0] [i_3] [i_5]) : 181))));
                            arr_31 [i_0] [0] [1] [8] = 544178760;
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_21 ^= ((26 ? 5003008270792669641 : 17780982196635016157));
                            var_22 = 544178760;
                            arr_35 [i_0] [i_5] [i_3] [i_1] [i_0] = 0;
                        }
                        var_23 = (max(var_23, (arr_20 [1] [i_5 + 1] [i_5] [i_5] [i_5])));
                        arr_36 [i_0] [i_3] [i_0] [i_0] = (arr_33 [7] [7] [i_0] [i_0] [i_0 - 4]);
                    }
                    for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
                    {
                        var_24 = max(((((12737823494579980668 == -75) ? ((var_4 ? var_6 : 0)) : (!var_2)))), (max(2226746385983800297, (min(17159132587652851188, -544178750)))));
                        arr_39 [i_0] [9] [i_3] [i_0] = ((((min((arr_13 [i_10 + 1] [i_1 + 1] [i_0 + 2]), var_3))) & ((min((arr_13 [i_10 + 1] [i_0 + 2] [i_0 + 2]), (arr_13 [i_10 + 1] [i_3] [i_0 + 2]))))));
                    }
                    arr_40 [i_0] [4] [i_1] [i_0] = 24159;
                }
                var_25 |= (((1 - (arr_38 [i_1] [0] [i_1 + 1] [i_0 - 4] [0] [i_0]))));
            }
        }
    }
    var_26 = (((var_0 / var_0) >= (min((var_10 + var_8), var_8))));
    #pragma endscop
}
