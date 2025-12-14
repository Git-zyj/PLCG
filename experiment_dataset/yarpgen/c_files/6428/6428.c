/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~var_18) & (((~var_19) | ((var_19 ? -37 : -19))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_4 + 1] [i_1] [i_0] = -2709289052416853196;
                                arr_14 [i_3] [i_2 + 1] = ((((max(((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_10 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] [i_4])))) != (min((min(752128808, (arr_5 [i_4] [i_3 - 3] [i_2 + 1] [i_1]))), (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3 - 1] [i_4 + 1])))));
                                arr_15 [i_0] [i_1] [i_0] [i_2] [i_2] [i_1] [i_4 - 1] = (var_11 / 2649816251);
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_5] [i_1] [i_0] = (max(var_7, ((((((arr_0 [i_5]) * 1296017888))) ? var_14 : ((var_8 ? var_14 : (arr_9 [i_5] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_21 = (((((13715002109893151311 <= (19 < 0)))) / 44));
                                arr_28 [i_0] [i_7] [i_7] [i_7] [i_1] = -5394819488195233942;
                                arr_29 [i_0] [i_0] [i_1] [i_5] [i_6 + 3] [i_7] = (arr_8 [i_0] [i_1] [i_5] [i_5] [i_6 + 2] [i_0]);
                            }
                        }
                    }
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_22 = ((-(min((arr_30 [i_8] [i_8] [i_8]), ((-26 | (arr_7 [i_0] [i_0] [i_0])))))));
                                var_23 = (((arr_34 [i_8] [i_8 + 1] [i_9]) ? var_1 : ((var_1 / (arr_31 [i_8] [i_9])))));
                                arr_38 [i_0] [i_1] [i_8] [i_9] [i_10] = (~(2950248962181540955 / var_18));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        var_24 ^= (((arr_27 [i_8] [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8 + 2]) ? (arr_23 [i_8] [i_8 - 1] [i_8 - 1] [i_8 + 2] [i_8 + 2]) : 2950248962181540970));
                        var_25 = (((arr_9 [i_8 + 1] [i_8 - 1]) ? 1 : (arr_9 [i_8 + 2] [i_8 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_26 = ((((max((arr_16 [i_0] [i_0] [i_0]), (arr_31 [i_12 + 1] [i_8 - 1])))) && (arr_12 [i_0] [i_0] [i_12 - 1])));
                                arr_49 [i_0] [i_12 + 1] [i_12 + 1] = ((!((947675333636367399 <= ((-4207749077839119376 ? var_10 : 14943147828400321422))))));
                            }
                        }
                    }
                }
                var_27 = ((((!(arr_1 [i_0] [i_1]))) ? var_10 : (arr_1 [i_1] [i_0])));
                var_28 = 494941384;
            }
        }
    }
    var_29 &= var_14;
    #pragma endscop
}
