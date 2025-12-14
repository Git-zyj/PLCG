/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (max(2596977366, 1));
        arr_5 [11] = (((((268433408 ? -55 : 60))) > (min(423627540431834140, (arr_1 [i_0])))));
        var_18 = (max(var_18, ((max((max((arr_2 [i_0]), 4629351)), var_0)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_19 = (min((min((arr_16 [i_3] [i_3 - 1]), (max(var_5, (arr_11 [i_1] [i_1]))))), (min((min(-64, 3077460481)), ((min(var_6, var_8)))))));
                        var_20 = ((((max(-64, var_13))) ? (arr_16 [3] [3]) : (198 || -44)));
                        arr_17 [i_1] [19] [i_4] [i_1] = (((-62 >= 0) ? (((-var_17 ? ((var_17 ? var_2 : var_8)) : var_9))) : var_12));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_22 [i_3] [i_3] [12] [i_2] [i_2] [i_2] [i_3] &= ((var_0 ? var_15 : var_8));
                            var_21 = (max((min(((max(var_2, var_0))), var_7)), -63));
                            arr_23 [i_1] [i_4] [1] [i_1] [6] = ((((((arr_18 [i_3] [i_2 + 1] [i_2] [i_1]) ? var_12 : var_12))) ? var_9 : (((var_10 ? var_14 : var_17)))));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_27 [1] [i_4] [1] [i_4] [14] = ((min((arr_13 [i_3 + 2]), (arr_20 [i_4] [i_2 + 2] [i_2 + 3] [10] [i_2] [i_2]))));
                            arr_28 [i_1] [i_1] [i_1] [i_4] [16] [i_1] = (min((((max(var_5, var_6)) << (var_3 + 5327676924361521962))), (((min(3725632350244135598, (arr_21 [i_1] [i_1] [i_1])))))));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_33 [i_1] [i_4] [i_3 + 1] [1] [1] [i_4] [i_4] = var_2;
                            arr_34 [i_7] [9] [i_4] [i_2] [i_4] [i_1] [i_1] = var_12;
                        }
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            var_22 = (max(((((((arr_24 [10] [15] [15] [i_4] [i_4]) ? (arr_6 [i_3 + 1] [i_3]) : (arr_36 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((var_1 ? -55 : (arr_13 [i_8])))) : var_13)), var_13));
                            var_23 = (max(var_23, ((((((~(arr_7 [i_8 - 2])))) ? (((arr_36 [4] [i_4] [i_4] [i_4] [i_4]) | (((min(var_1, var_8)))))) : ((~(arr_32 [i_8 - 2]))))))));
                        }
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            arr_40 [i_9] [i_1] = ((~(((arr_35 [i_9] [i_9] [i_9]) ^ -55))));
            arr_41 [i_1] = (((arr_31 [i_1] [i_1] [1] [i_1] [i_9]) ? (((!(arr_31 [i_1] [i_1] [i_1] [i_9] [i_1])))) : 51337));
        }
        for (int i_10 = 3; i_10 < 19;i_10 += 1)
        {
            var_24 += 23914;
            var_25 &= 18;
            arr_44 [i_1] [i_1] [5] = (((238 - var_8) != var_5));
            var_26 += (((~-2) >> (((min(var_17, 4457288778554061474)) - 12038))));
        }
        arr_45 [i_1] = ((min(((var_13 ? var_6 : var_15), ((max(-28345, (arr_24 [i_1] [2] [i_1] [2] [i_1]))))))));
        arr_46 [1] = ((min(var_12, ((31 ? -126 : 1829700701)))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_49 [i_11] = -15;
        var_27 = ((var_12 ? var_16 : (arr_21 [i_11] [i_11] [i_11])));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 16;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            var_28 = (min(var_28, (var_10 && var_12)));
                            var_29 = (arr_48 [i_14 - 3]);
                            var_30 -= -35;
                            var_31 ^= var_8;
                        }
                        arr_60 [i_14 - 2] [10] [10] [10] = var_14;
                    }
                }
            }
        }
    }
    var_32 = (min((((((min(var_16, var_8))) >= var_12))), (max(-1829700701, var_6))));
    var_33 = (min(4238210294, (!var_10)));
    #pragma endscop
}
