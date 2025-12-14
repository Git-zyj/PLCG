/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (min(var_19, (((!((((arr_1 [i_0]) ? var_18 : (((3856090109 && (arr_0 [i_0]))))))))))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_20 ^= (((arr_0 [1]) ? 438877186 : 3306382830));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_12;
        arr_7 [0] [i_1] = (max((max(var_13, -var_9)), ((max(2549876902, 988584465)))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                {
                    var_21 ^= (max((min(var_3, (max(17140545309209984288, 4)))), var_15));
                    arr_17 [8] [i_3] [i_2] [i_4] = (arr_16 [i_2] [i_3] [i_4] [12]);
                }
            }
        }
        arr_18 [i_2] = max((max((arr_1 [i_2]), var_6)), (((arr_12 [i_2] [i_2]) * (((-(arr_10 [i_2])))))));
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_23 [i_5] = var_2;
            var_22 = (min(var_22, (arr_20 [i_5] [10])));
            arr_24 [9] [6] [10] = (((arr_11 [i_5 + 2] [i_6 - 1]) ? (arr_11 [i_5 - 1] [5]) : var_3));
            arr_25 [i_5] [5] = (((arr_4 [i_5 - 1]) ? (arr_20 [i_5 + 1] [9]) : (arr_4 [i_5 + 2])));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 10;i_8 += 1)
            {
                {
                    var_23 = (max(var_1, (arr_5 [i_7])));
                    var_24 ^= 3306382830;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                {
                    var_25 = var_2;
                    arr_35 [i_5] [i_9] [i_10] [i_9] = (((arr_8 [i_5] [1]) ? (((arr_10 [i_5 + 2]) * (min(var_18, (arr_29 [i_5] [i_5] [i_5 + 1] [i_5]))))) : var_0));
                    arr_36 [9] [i_9] [9] [i_10] = var_9;
                }
            }
        }
    }
    var_26 = (max(var_12, (4286320976629964844 >> 1)));

    /* vectorizable */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        arr_39 [i_11] = 3856090119;
        arr_40 [6] [1] = (((arr_38 [i_11]) ? ((var_5 ? 17140545309209984288 : (arr_1 [i_11]))) : (((10981 ? var_14 : var_12)))));
        arr_41 [i_11] [i_11] = (arr_38 [i_11]);
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_27 ^= max((((~((~(arr_13 [i_12])))))), (((arr_0 [i_12]) ? (((arr_37 [i_12]) & var_5)) : (~3306382830))));
        arr_46 [i_12] [i_12] = (max((arr_13 [0]), (((arr_10 [3]) <= var_7))));
    }
    #pragma endscop
}
