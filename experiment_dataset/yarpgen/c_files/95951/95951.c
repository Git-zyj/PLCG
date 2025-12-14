/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (((((arr_0 [i_0]) < var_16)) ? (arr_0 [i_0]) : (arr_1 [1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = (arr_2 [i_1]);
                    var_20 = (max(var_20, ((((((!10398) || var_0)) ? (arr_1 [i_1]) : var_13)))));
                }
            }
        }
        var_21 = (max((((-(2 >= var_13)))), (arr_5 [i_0] [4])));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_19 [i_4] [i_4] [i_3] [i_4] = (arr_12 [i_3] [i_4]);
                    var_22 = (!1);
                }
            }
        }
        var_23 = (((arr_13 [10] [i_3]) - 371530259));

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        arr_27 [i_3] [i_6] = -4796;
                        var_24 = ((((((arr_17 [i_3]) / (arr_17 [i_8])))) ? ((-((var_16 ? (arr_20 [i_3] [i_3]) : (arr_12 [1] [i_6]))))) : -4796));
                        arr_28 [i_8] = 2696532191;
                    }
                }
            }
            arr_29 [i_3] = (37247 != 4);
        }
        arr_30 [i_3] = var_18;
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 15;i_11 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_25 = (min(var_25, ((((arr_38 [i_11 - 3] [i_11 + 1] [i_11 - 1]) ? ((var_4 ? 1598435100 : (arr_34 [i_9] [i_10] [i_11 - 3]))) : var_11)))));
                        arr_41 [i_9] [2] [i_10] [11] [i_11 - 2] [7] = var_1;
                    }
                    arr_42 [i_11 + 1] [i_10] [i_10] [i_9] = (min((arr_37 [i_9] [i_10] [i_11 - 2]), (((arr_37 [i_11 - 1] [i_11 - 2] [i_9]) ? (min((arr_31 [i_9] [i_9]), var_3)) : (arr_36 [i_9] [i_10] [i_11 - 3] [i_11 - 2])))));
                }
            }
        }
        arr_43 [i_9] [i_9] = var_6;
        var_26 = ((-12960 ? ((((((arr_39 [i_9] [i_9]) ? var_14 : var_7))) ? (((arr_36 [14] [i_9] [i_9] [i_9]) ? 859911497 : 1598435082)) : (((-(arr_33 [2])))))) : -2484006042));
        var_27 = (arr_33 [i_9]);
    }
    var_28 = var_7;
    var_29 = -4795;
    #pragma endscop
}
