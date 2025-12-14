/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = ((~(~26)));
            var_19 = ((((((~3243) ? (arr_2 [i_0] [i_0]) : (var_6 & var_16)))) != ((((3243 ? (arr_5 [i_0 - 3]) : var_18)) | (max((arr_0 [i_1]), var_7))))));
            arr_7 [i_0] = 1;

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_20 = (~97);
                    arr_14 [i_0] [i_0] = ((-74 ? var_14 : -3261));
                }
                arr_15 [i_0] [9] [9] = (max((((min((arr_12 [i_0] [i_0] [4] [i_0] [i_0]), var_17)))), ((((6896469924026281701 >> (var_1 - 21328))) ^ ((-87 ? (arr_13 [i_0] [i_2]) : (arr_9 [i_2] [i_1] [i_0])))))));
                var_21 = (max(-3243, 1440409770252921118));
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_22 = (arr_3 [i_4] [i_4]);
                arr_19 [i_0] [i_0] [i_0] [i_0] = ((68 - (~4435501275109650738)));
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_23 = var_9;
            var_24 ^= (((var_6 % -1440409770252921107) >= (arr_11 [i_0] [6] [i_0 + 1] [i_0] [i_0] [i_0 + 1])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_25 = -9223372036854775795;
            var_26 = (!1);
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_26 [i_7] = (min((max(36231, var_9)), (((28633 ? (arr_23 [i_7]) : (arr_3 [i_7] [i_7]))))));
        arr_27 [i_7] [i_7] = ((~((min((arr_16 [i_7] [i_7] [i_7] [2]), (arr_23 [4]))))));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_27 -= ((~((-(min(var_0, (arr_17 [i_8] [i_8])))))));
        var_28 = ((+(min((arr_20 [17] [17] [i_8]), (((arr_18 [i_8] [i_8] [i_8]) & 4294967295))))));
        var_29 = (-14915 && -1);
    }

    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        var_30 = (max(var_30, (!41311)));
        var_31 = (min((((arr_4 [0] [i_9 + 1]) / (arr_4 [10] [i_9 + 1]))), (max((71 <= -76), ((~(arr_1 [i_9])))))));
        arr_33 [i_9] [i_9] = min(((max((arr_21 [i_9 + 4] [i_9 + 4] [i_9 + 4]), -74))), (((6896469924026281701 & ((var_18 ? 22937 : (arr_9 [i_9] [i_9 - 1] [i_9])))))));
    }
    var_32 = (max(var_32, ((((min((((var_0 ? var_18 : var_12))), ((-12 ? 1 : 2543001332)))) - ((((var_11 ? var_16 : 4)))))))));
    #pragma endscop
}
