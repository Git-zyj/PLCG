/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] |= ((((arr_1 [i_0 - 1] [i_0 + 1]) / var_4)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0 - 1] [i_1] [i_1] = 2131578615944638724;
                    var_11 = var_5;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_13 [i_3] [i_3] &= ((-((~((((arr_11 [i_3]) < var_7)))))));
        arr_14 [i_3] = (((var_9 << (var_1 + 282152247))));

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_12 &= ((16315165457764912887 & (((min((arr_12 [i_4] [i_3]), (!var_1)))))));
            arr_18 [i_3] [i_4] [i_4] = (arr_16 [i_3] [i_3]);
            arr_19 [i_3] [i_4] = (arr_16 [i_3] [i_3]);
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_22 [i_3] [i_3] = ((arr_11 [i_5]) ? -16315165457764912887 : (arr_11 [i_3]));
            var_13 = (arr_15 [i_3]);
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_27 [i_3] [i_3] [i_3] = ((-(arr_16 [i_6] [i_3])));

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_14 = (min(var_14, (28 || 41978)));
                    var_15 *= ((((arr_26 [i_3] [i_3] [i_3]) / (arr_24 [i_3]))));
                    var_16 &= ((-(arr_24 [i_8])));
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_38 [i_11] [i_6] [i_11] [i_10] [i_11] = (!var_1);
                            var_17 += ((~(((!(arr_21 [i_11]))))));
                            var_18 = ((!(((((-(arr_37 [i_9] [i_11] [i_9] [i_11] [i_3])))) >= (arr_31 [i_3] [i_6] [i_9] [i_10])))));
                            var_19 *= (min(var_0, var_3));
                            arr_39 [i_11] = var_4;
                        }
                    }
                }
            }
            var_20 *= ((-((-(((arr_26 [i_3] [i_3] [i_3]) ^ (arr_17 [i_6] [i_3])))))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    {
                        var_21 = ((-(arr_26 [i_3] [i_3] [i_3])));
                        arr_50 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = var_4;
                    }
                }
            }
            arr_51 [i_3] = (!var_7);
        }
        var_22 *= (16315165457764912886 != -1);
    }
    for (int i_15 = 1; i_15 < 23;i_15 += 1)
    {
        arr_56 [i_15] [i_15] = (arr_55 [i_15 - 1]);
        arr_57 [i_15] = (!var_8);
    }
    var_23 = var_0;
    var_24 = -var_8;
    #pragma endscop
}
