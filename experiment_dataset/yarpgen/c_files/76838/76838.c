/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_2 - 1] [i_2] = ((-(max((arr_1 [i_2 + 2] [i_2 + 1]), var_1))));
                    var_13 = ((((max((~var_4), (~9194)))) ? ((17183 - ((max((arr_4 [i_2] [i_1] [20] [i_0]), var_12))))) : var_4));
                    var_14 = (((((~((((arr_2 [i_2 - 1] [i_1]) && var_11)))))) ? var_5 : (((arr_5 [i_1]) ? (((var_10 >= (arr_4 [i_0] [i_0] [i_0] [i_0])))) : var_2))));
                    arr_7 [1] [i_1] = (arr_1 [i_1] [i_2]);
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_15 = ((~((((((arr_3 [i_0] [i_3]) ? (arr_3 [i_3] [i_0]) : 0))) ? (min((arr_5 [i_0]), (arr_0 [i_0]))) : (min((arr_8 [13] [i_3]), (arr_0 [i_0])))))));
            arr_10 [i_0] [i_3] = ((((max(-0, (arr_1 [i_3] [i_0])))) ? ((((max((arr_3 [i_0] [i_3]), (arr_4 [i_0] [10] [i_3] [i_0])))) ? (((arr_5 [i_3]) - var_7)) : ((max(48, var_9))))) : (arr_3 [i_3] [i_0])));
            arr_11 [2] [2] = (((max((arr_3 [i_0] [i_0]), 4294967295))));
            arr_12 [i_0] [7] = (+-11427258306209890159);
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_16 = (arr_1 [i_4 - 1] [i_4]);
            arr_16 [i_0] [i_4] = 4;
            arr_17 [i_0] [i_0] = (((arr_14 [i_0]) * (arr_1 [i_0] [i_4 - 1])));
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 23;i_5 += 1)
        {
            var_17 = 208;
            arr_20 [i_5] [i_0] = (((arr_2 [i_5 - 2] [i_5 - 3]) & ((~(arr_2 [i_0] [1])))));
        }
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            arr_23 [i_0] [i_6 - 1] [i_6] = (max(var_1, (arr_3 [i_6] [i_0])));
            var_18 = -48;
        }
        arr_24 [i_0] = min((arr_9 [i_0] [i_0] [i_0]), (max((arr_9 [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0]))));
        var_19 = (((~(arr_9 [i_0] [i_0] [i_0]))));
    }
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        arr_27 [i_7 + 4] [i_7] = (((((23 * var_3) ? var_0 : (arr_9 [i_7] [i_7] [i_7]))) & ((((~30) && ((var_9 < (arr_14 [i_7 + 2]))))))));
        var_20 = (((arr_26 [9]) ^ (((104 > (arr_5 [i_7 + 2]))))));
        var_21 = ((!((min(((((arr_2 [i_7] [i_7]) == var_9))), 31)))));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        arr_30 [i_8] = (min((((arr_5 [i_8]) ? var_10 : (arr_19 [i_8]))), (arr_4 [22] [17] [i_8] [i_8])));
        arr_31 [i_8] [i_8] = ((((((max(19749, (arr_25 [i_8]))) && (((arr_13 [i_8] [i_8]) == (arr_18 [i_8] [i_8]))))))));
        arr_32 [i_8] [i_8] = ((((((arr_21 [i_8] [i_8] [i_8]) ? ((((arr_4 [i_8] [i_8] [6] [i_8]) ? (arr_22 [i_8] [i_8]) : (arr_22 [i_8] [i_8])))) : (((arr_26 [i_8]) ? (arr_19 [19]) : 24611))))) && (arr_28 [i_8])));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_22 = (((arr_25 [i_9]) * ((-(max(-19, 43731))))));

        for (int i_10 = 3; i_10 < 16;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_23 = ((-((min((arr_13 [i_11] [i_11]), (arr_38 [i_9] [i_10] [i_11] [i_11]))))));
                var_24 = (((arr_14 [i_10 - 2]) | (max(((61440 ? (arr_38 [i_11] [i_10 + 1] [i_9] [i_11]) : (arr_35 [18] [i_11]))), -23))));
            }
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        var_25 = (arr_8 [i_10 - 2] [i_9]);
                        var_26 = (arr_39 [i_13] [i_12 + 1] [i_10 + 2]);
                        var_27 = ((246 == (max((max((arr_9 [15] [i_12 - 1] [i_13]), -28)), (((arr_18 [i_10 + 3] [i_12 - 1]) ? (arr_5 [i_10]) : 8))))));
                    }
                }
            }
            var_28 = (arr_28 [i_10]);
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            var_29 = (~var_2);
            arr_47 [i_9] [i_9] [i_14] = (arr_41 [i_9] [i_9] [i_9] [i_14]);
            arr_48 [i_9] [i_14] [i_9] = (arr_39 [i_9] [i_14] [i_9]);
        }
    }
    var_30 = var_8;
    var_31 = var_3;
    #pragma endscop
}
