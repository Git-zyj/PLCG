/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_0 - 1] = (((((arr_4 [i_1] [i_1 - 1] [i_2]) != var_10)) ? var_8 : (((arr_1 [i_0 - 1] [i_1 - 1]) | (arr_4 [i_1] [i_1 - 1] [i_1])))));
                    arr_11 [i_0 + 2] [i_0 + 2] [i_1] = ((((((arr_1 [i_0 - 1] [i_0 - 1]) ? var_14 : (arr_1 [i_0 + 2] [i_1 - 1])))) + (~var_3)));
                    arr_12 [i_0 + 1] [i_1] [10] = (max((arr_2 [i_0] [i_1 - 1] [i_2]), ((((arr_2 [i_1] [i_1 - 1] [i_1 - 1]) && (arr_2 [i_0] [i_1 - 1] [i_2]))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = ((-(((arr_4 [6] [i_3] [6]) << (((arr_4 [16] [i_3] [i_3]) - 32892))))));
        arr_16 [i_3] [i_3] = (arr_3 [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = (((arr_18 [i_4] [i_4]) <= ((max((arr_18 [i_4] [i_4]), var_14)))));
        arr_20 [i_4] = (arr_17 [i_4]);
        arr_21 [i_4] = (((var_12 && var_11) + (((arr_18 [i_4] [i_4]) - (arr_18 [i_4] [i_4])))));

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_25 [15] [i_5] = ((-(max((arr_18 [i_4] [i_4]), ((var_12 ? var_13 : var_8))))));
            arr_26 [i_4] [i_4] [i_4] |= (((-(arr_24 [i_4] [i_4]))));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            arr_30 [i_4] |= ((arr_22 [i_4] [i_4] [i_6 - 2]) ^ (arr_22 [i_6] [i_6] [i_6 - 2]));
            arr_31 [i_6 + 3] [i_4] [i_4] = (arr_28 [i_6 + 2] [i_6 - 1]);
        }
    }

    for (int i_7 = 3; i_7 < 10;i_7 += 1)
    {
        arr_35 [i_7] = ((var_2 ? var_16 : var_14));
        arr_36 [4] = (max((((arr_9 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 3]) ? 32767 : var_6)), 177));
    }
    for (int i_8 = 3; i_8 < 16;i_8 += 1)
    {
        arr_40 [12] = (max(((-(arr_23 [i_8] [i_8 + 3] [i_8 + 1]))), ((((arr_23 [i_8 + 2] [i_8 + 2] [i_8]) >= (arr_23 [i_8] [i_8] [i_8]))))));
        arr_41 [i_8] = (arr_24 [i_8] [i_8]);
        arr_42 [12] = (arr_29 [i_8] [i_8]);
        arr_43 [i_8] = ((((var_12 ? (arr_28 [i_8 + 3] [i_8 - 3]) : (arr_24 [i_8 + 2] [i_8 - 3]))) & ((((!((max((arr_24 [i_8] [i_8]), (arr_18 [i_8] [i_8]))))))))));
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        arr_47 [i_9] = ((!((min((arr_29 [i_9] [i_9]), var_0)))));
        arr_48 [i_9] = (i_9 % 2 == 0) ? ((((((((arr_17 [20]) ? (arr_24 [i_9] [i_9]) : (var_8 >= var_15))) + 2147483647)) << (((((arr_46 [i_9] [i_9]) - ((~(arr_44 [i_9]))))) - 81040))))) : ((((((((arr_17 [20]) ? (arr_24 [i_9] [i_9]) : (var_8 >= var_15))) + 2147483647)) << (((((((((arr_46 [i_9] [i_9]) - ((~(arr_44 [i_9]))))) - 81040)) + 24210)) - 17)))));
        arr_49 [i_9] [i_9] = (min(5, 20015));
        arr_50 [i_9] = (arr_29 [i_9] [i_9]);
    }

    /* vectorizable */
    for (int i_10 = 3; i_10 < 22;i_10 += 1)
    {
        arr_53 [i_10] [i_10] = var_8;
        arr_54 [i_10 - 1] [i_10 - 1] = ((var_8 < (arr_51 [i_10 - 3])));
        arr_55 [i_10] [i_10] = 29188;
    }
    var_17 = var_16;
    #pragma endscop
}
