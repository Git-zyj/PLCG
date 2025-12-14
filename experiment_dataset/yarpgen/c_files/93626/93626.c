/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_12 = (min(var_12, (((1636392419 ? 1994261398 : 4294967287)))));
                        var_13 = ((~((2147483647 ? (arr_5 [i_1] [2] [i_3]) : ((11460635515834063186 ? var_7 : (arr_1 [8])))))));
                        arr_10 [i_3] [i_2] [i_0] [i_2] [i_0] = (min((arr_4 [i_1] [i_1] [i_1]), 2147483647));
                    }
                }
            }
        }
        arr_11 [i_0] = (((((18446744073709551614 ? var_8 : (arr_1 [i_0])))) ? var_5 : (arr_3 [i_0] [9] [i_0])));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            var_14 = ((((max((arr_6 [i_5 - 1] [i_5 - 1]), (arr_9 [i_5] [i_5 + 1] [i_5] [12] [i_5 + 1] [i_5 - 1])))) ? 7 : 17));
            var_15 -= ((((((arr_4 [i_4] [i_5] [i_5]) ? (arr_4 [i_4] [i_5] [i_5]) : (arr_4 [i_4] [i_5] [i_5])))) != ((~(((arr_13 [i_4]) | (arr_2 [i_4] [i_5])))))));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_16 = (max(var_16, (((!(arr_6 [i_6] [i_8]))))));
                        arr_25 [i_7] = (arr_16 [i_4] [i_8] [i_7]);
                        var_17 = ((~(((~var_1) ? (((arr_17 [i_7] [i_7] [i_7]) ? (arr_2 [1] [1]) : 29040)) : ((var_0 ? var_2 : (arr_15 [i_4] [i_4] [i_4])))))));
                        var_18 -= ((~(min(((min((arr_1 [i_7]), -1204600334))), (((arr_13 [i_4]) ? 127 : (arr_6 [i_4] [i_7])))))));
                    }
                }
            }
        }
        var_19 ^= (!((((((~(arr_21 [i_4] [i_4] [i_4])))) ? (arr_6 [i_4] [i_4]) : (((var_1 ? 1783819646 : (arr_1 [i_4]))))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_20 *= ((((((arr_1 [i_9]) | (arr_3 [i_12] [i_9] [i_9])))) ? (arr_6 [i_9] [i_9]) : 1));
                        arr_36 [i_11] = ((-121 ? ((((arr_24 [i_9] [i_9] [i_9] [i_9] [i_9]) ? 2147483647 : var_8))) : (((arr_13 [i_9]) ? (arr_26 [i_9] [i_9]) : var_4))));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_21 = 25814;

                        for (int i_14 = 2; i_14 < 14;i_14 += 1) /* same iter space */
                        {
                            var_22 *= 1;
                            var_23 |= ((~(arr_39 [i_9] [i_10] [i_11] [i_14 + 1] [i_14])));
                            var_24 = (arr_34 [i_9] [i_11] [2] [i_11]);
                        }
                        for (int i_15 = 2; i_15 < 14;i_15 += 1) /* same iter space */
                        {
                            arr_43 [i_9] = (arr_28 [i_15]);
                            var_25 = (min(var_25, (((!(((arr_39 [i_9] [i_10] [i_11] [5] [i_15]) && -96)))))));
                            var_26 ^= 25814;
                        }
                        for (int i_16 = 0; i_16 < 16;i_16 += 1)
                        {
                            var_27 &= arr_27 [i_9];
                            var_28 -= -27;
                            var_29 = (arr_8 [1] [3] [7]);
                            var_30 = (((arr_0 [i_9]) ? (arr_0 [i_16]) : -109));
                        }
                    }
                    var_31 = 1;
                    var_32 = (min(var_32, ((((arr_17 [i_9] [i_9] [i_11]) - (~var_9))))));
                }
            }
        }
        var_33 = (((arr_40 [i_9] [i_9] [i_9] [1] [13] [i_9]) ? var_8 : (arr_40 [i_9] [i_9] [i_9] [11] [i_9] [11])));
        var_34 = (min(var_34, (!var_8)));
    }
    #pragma endscop
}
