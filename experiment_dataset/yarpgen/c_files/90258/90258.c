/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            var_16 = ((~((255 ? (2045021228 ^ var_1) : 182))));
            arr_5 [i_0] = -5084157466450413267;
            arr_6 [i_0] [i_0] [i_0] = -55;
            var_17 = (arr_4 [i_0 - 1] [i_1] [i_1 + 2]);
            var_18 = ((-((((arr_1 [i_0 + 3] [i_0 + 3]) < 7870647260910736704)))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_11 [i_0] [i_0] [i_2] = (!var_1);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_19 = (min(var_19, var_6));
                        arr_17 [i_0 + 2] = (max(((max(20, (arr_3 [i_0] [i_0] [i_0 - 1])))), (arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 2])));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_20 = (~var_2);
                            var_21 = (((min((arr_32 [i_0 + 2] [i_6] [i_6] [i_6 + 2] [i_7]), (arr_21 [i_0 + 3] [i_5])))) ? (max(1971171262, -3178505898505592560)) : (max(576460752303423487, (arr_32 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_6 + 1] [i_8]))));
                        }
                    }
                }
            }
            var_22 = (((var_0 - (7870647260910736692 % 30930))));
            arr_33 [i_0] = ((10576096812798814923 << ((((54469 << (7870647260910736677 - 7870647260910736663))) - 892420085))));
            arr_34 [i_5] = var_15;
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 15;i_10 += 1)
                {
                    {
                        arr_42 [i_0] [i_0] [i_0] [i_0] &= (((-((41835 ? var_2 : 57123)))));
                        arr_43 [i_9] [i_9] [i_9] [i_9] &= (arr_1 [i_5] [i_0]);
                    }
                }
            }
        }
        var_23 = 2047905377;
    }
    for (int i_11 = 1; i_11 < 15;i_11 += 1) /* same iter space */
    {
        var_24 = (max(var_13, var_3));

        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_25 = ((235 < ((~(max(7870647260910736704, var_9))))));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    {
                        arr_53 [i_11] [i_12] [i_13] [i_14] [i_14] = var_9;
                        var_26 = var_8;
                        arr_54 [i_11] [i_11] [i_11] [i_11] [i_11] = -7490637891847749091;
                        var_27 = 252;
                        arr_55 [i_11] [i_12] [i_13] [i_14] [i_14] [i_14] = ((var_3 ? var_11 : (((!(arr_0 [i_11 + 3]))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
        {
            arr_60 [i_11] [i_15] [i_15] = (((var_13 * var_6) ? 1412750920 : 12573497638157330836));
            var_28 = ((~(~45765)));
            var_29 = -var_13;
            var_30 &= ((!(var_10 < var_7)));
        }
    }
    var_31 = var_2;
    #pragma endscop
}
