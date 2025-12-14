/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~-106);
    var_15 = (max(var_15, var_9));
    var_16 = ((max((max(18106003978163053252, 105)), (~6698))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (min((((arr_3 [i_0]) / 408012264998354781)), 107));
        var_18 = ((((max(var_0, var_7))) - (min((~-106), 74))));
        var_19 = (~6698);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = 58838;
        arr_6 [6] = (6698 - 51407);
        var_21 = ((max(51407, 0)));
        arr_7 [i_1] = ((~(((((arr_1 [11]) & (arr_5 [i_1] [i_1]))) + (var_9 * 30)))));
        var_22 ^= ((var_9 | (+-45)));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_23 -= (min(((0 ? 156 : 54456)), var_13));
                            var_24 = (~0);
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_25 *= (((58838 ? var_11 : (arr_9 [i_3 + 3] [i_2 - 2]))));
                    arr_26 [i_2 - 1] [i_2 - 1] [i_2] [i_2] = (arr_8 [i_2]);
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_26 = (arr_28 [i_3] [i_2]);
                    var_27 += ((16220807638398377475 ? 63 : 105));
                }
                arr_30 [18] [i_3 - 1] |= 127;

                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_33 [i_2] [i_2 + 1] [i_3] [i_2] = (((var_6 >= var_2) ? var_3 : (arr_27 [i_2] [i_3] [i_8] [i_2])));
                    arr_34 [i_2] [i_2] [i_3 - 1] [i_8] = (arr_21 [i_3] [i_2]);
                }

                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    arr_38 [i_2 - 2] [i_2] = ((58838 < (0 > 255)));
                    arr_39 [i_2] [i_2] [i_2] = (~-2692296467591839902);
                    var_28 = (max(var_28, (((~(arr_14 [i_9] [i_9]))))));
                    arr_40 [i_2] = ((~(~var_9)));
                    var_29 = ((((~(~var_3))) / ((~(var_4 <= var_9)))));
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        arr_47 [i_2] [i_2] [i_2] [i_11] [i_2] = (~17131578728959180608);
                        arr_48 [i_2 - 2] [i_2 - 2] [i_2] [i_11] = (((arr_21 [i_2] [i_2]) ^ (2696042815576743625 > 4824692605315285822)));
                    }
                    arr_49 [i_2] = ((((~(~105))) ^ (var_8 | 14)));
                    arr_50 [i_2] = (min(190, 58));
                    var_30 -= (((((((var_9 ? -7428628214546509607 : var_1)) ^ 0))) ? ((((max(var_12, 63))) ? var_6 : (arr_32 [i_3] [i_3 + 1] [i_10] [20]))) : (~var_7)));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    arr_54 [i_2] [i_2] [i_2] [i_2] = (~-891694165732246538);
                    arr_55 [i_12] [i_2] [i_12] = (arr_41 [i_12] [i_2] [i_2] [i_12]);
                    var_31 = (arr_45 [14] [i_2] [i_3 + 2] [i_2] [i_2 - 1]);
                }
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    arr_59 [i_13] [i_13] [i_2] [i_2] = (min(1, 29));
                    arr_60 [i_2 - 1] [i_2] [i_2] [i_2] = arr_52 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1];
                }
            }
        }
    }
    #pragma endscop
}
