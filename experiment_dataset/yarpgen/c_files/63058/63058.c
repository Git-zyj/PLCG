/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((-var_0 % (arr_1 [i_0 + 3])));
        arr_3 [i_0] = var_4;
        arr_4 [1] [i_0] = 0;
        arr_5 [15] [i_0 + 3] = (~var_3);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_1] [i_1] = (((((-((var_4 ? var_1 : 1))))) ? (max((min(var_2, var_4)), (~var_6))) : ((min((((var_1 ? var_10 : var_10))), var_7)))));
                    arr_15 [i_1] [i_1] [i_1] = ((max(var_7, var_9)));
                }
            }
        }
        arr_16 [i_1] [i_1] = (((((~((var_9 ? 756261220 : 14264750124291032717))))) ? ((125 / (arr_10 [i_1] [i_1] [i_1]))) : ((((((max(var_1, 125))) || var_2))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    arr_22 [i_1] [i_1] = ((!(((-((1 ? 255 : (arr_9 [i_4]))))))));
                    arr_23 [i_4] [i_4] = (max(var_2, 24445));
                    arr_24 [11] [11] [i_4] [11] = (arr_20 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 3]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_28 [i_6] [i_6] = ((((((((arr_26 [i_6] [i_6]) + 9223372036854775807)) >> (arr_27 [i_6] [1])))) ? 100 : var_4));
        arr_29 [i_6] [i_6] = ((((max(var_0, (arr_25 [i_6] [i_6])))) ? var_1 : ((((var_9 ? var_3 : var_2)) | (arr_25 [i_6] [i_6])))));
        arr_30 [i_6] = (((arr_26 [i_6] [i_6]) ? (arr_27 [i_6] [i_6]) : (((125 ? var_3 : -1014004383)))));
    }

    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_42 [i_8] [i_8] [i_8] [i_8] [i_8] = ((var_9 ? 2444974117628250572 : (arr_25 [21] [i_7])));
                        arr_43 [i_7] [i_7] [i_9] = var_10;
                    }
                }
            }
        }
        arr_44 [i_7] [i_7] = (((((var_5 ? var_10 : 186))) ? -24446 : (((max(4, var_5)) / 30329))));
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 20;i_11 += 1)
    {
        arr_47 [i_11] = ((var_7 ? (arr_27 [i_11 - 3] [i_11 - 1]) : var_10));

        for (int i_12 = 4; i_12 < 18;i_12 += 1)
        {
            arr_50 [i_11] [i_12 - 3] = var_6;
            arr_51 [i_11 - 1] [1] = ((5 >= (arr_34 [i_11 - 3])));
            arr_52 [i_11] [i_11] [i_11] = (125 ? var_2 : var_4);
        }
    }
    var_11 = var_10;
    #pragma endscop
}
