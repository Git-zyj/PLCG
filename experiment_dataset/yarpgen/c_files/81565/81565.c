/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (((arr_0 [i_0]) ? var_18 : -var_18));
        arr_2 [i_0] = ((1 - (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = ((~(arr_4 [i_1])));
        var_20 = ((1 >> (((1 || (((16 >> (27005 - 26980)))))))));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        var_21 = (((1 & 4227858432) | (((1327059197 & 18136) & (((max(41, 52533))))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_22 -= (max(344487495, 4227858409));
                        var_23 = (min(var_23, ((max(((-(min((arr_14 [14] [i_4] [i_5]), 18235008238661440434)))), (min((23 / var_10), -27007)))))));
                        var_24 = (min(var_24, (arr_8 [14])));
                        var_25 = 32665;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_26 = max(var_4, (((-32346 | 1) * 14085)));

        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_27 = ((((~1013271576219737107) ? (var_0 & 67108871) : (arr_22 [5]))));
            var_28 = ((((-(arr_17 [i_6] [1] [i_7] [i_7]))) + (((arr_17 [i_6] [i_6] [i_6] [i_7]) + var_8))));
            arr_23 [i_7] = (18142 >= 1231205645);
            var_29 = (max(var_29, 7648410370687535066));
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 18;i_10 += 1)
            {
                {
                    var_30 = (max(-var_18, var_5));

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        arr_35 [i_8] [13] [13] [15] [2] = (arr_12 [i_8] [i_9] [i_11]);
                        var_31 = (arr_12 [i_9] [i_9] [i_11]);
                    }
                }
            }
        }
        arr_36 [i_8] = var_9;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_32 = (max(var_32, (arr_0 [i_8])));
                    var_33 = (((arr_39 [i_13]) - 98));
                    var_34 = arr_8 [i_12];
                    var_35 = (min(((((arr_4 [6]) && (var_15 - var_9)))), (arr_16 [i_8] [i_8] [i_12] [14] [i_12] [i_12])));
                    var_36 = (((1 || 81) >= (max((var_4 / var_8), (var_11 >= var_16)))));
                }
            }
        }
    }
    var_37 ^= -1013271576219737090;
    var_38 = ((18118 - (((var_9 >= ((var_12 << (var_9 - 1030108095))))))));
    var_39 = (-var_9 > var_8);
    #pragma endscop
}
