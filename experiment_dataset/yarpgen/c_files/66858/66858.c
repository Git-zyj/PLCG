/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [13] [i_0] = (min((min((((var_10 ? var_3 : (arr_0 [i_0])))), (min(-2, 1311687521909115054)))), ((max((arr_1 [i_0 - 1]), (min((arr_0 [i_0]), (arr_1 [i_0]))))))));
        var_16 = (arr_0 [i_0 - 1]);
        arr_3 [i_0] [i_0] = var_8;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = ((-(min((arr_1 [i_1]), 520192))));
        var_18 = (((((max(1311687521909115054, 18446744073709551604)) ? (arr_0 [i_1 - 1]) : (arr_4 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 = (((((~(arr_6 [i_2])))) ? -5903968000097319340 : 121));

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            arr_12 [i_2] [2] = ((1311687521909115054 ? (arr_5 [i_2] [i_3]) : (arr_9 [i_2] [i_2])));
            arr_13 [i_2] [i_2] [i_3 + 2] = (min(((max((arr_11 [i_2] [i_3 - 1] [4]), (arr_11 [i_2] [i_3 - 1] [i_3])))), (((arr_11 [i_2] [i_3 - 1] [i_3]) ? (arr_11 [i_2] [i_3 - 1] [i_3]) : (arr_11 [i_2] [i_3 - 1] [i_3])))));
        }
        /* vectorizable */
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            var_20 = (min(var_20, 40862));

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_21 = (((arr_7 [i_2]) ? 11 : var_9));
                            arr_24 [i_2] [i_4] [i_4] [i_5] [i_2] [i_2] [i_7] = (((arr_4 [i_2]) ? 4294967295 : (arr_8 [i_2])));
                            var_22 = ((-(arr_14 [i_7 + 1] [i_4 - 4])));
                            arr_25 [i_2] [i_2] = (arr_9 [i_2] [i_7]);
                        }
                    }
                }
                arr_26 [i_2] [5] [10] = (((!(arr_5 [i_2] [1]))) ? (!0) : (((12097 || (arr_14 [i_2] [i_2])))));
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_23 += ((var_0 << (((((arr_14 [i_2] [i_2]) + 2124696447)) - 21))));
                arr_29 [i_2] [i_2] [i_2] = (((((arr_8 [i_2]) ? (arr_17 [i_2] [i_4]) : -7719897602653553350)) ^ ((((4294967283 != (arr_0 [i_2])))))));
            }
        }
        var_24 |= ((((min((arr_9 [6] [i_2]), (max((arr_4 [4]), 2154785117))))) ? (((!4294967295) ? (min(9319, 2729253454)) : (arr_1 [i_2]))) : (((((((max(0, (arr_7 [0]))))) >= (((arr_7 [1]) ? (arr_20 [i_2] [3] [i_2] [3] [i_2]) : (arr_16 [i_2])))))))));
        var_25 = (arr_16 [i_2]);
    }
    var_26 = (~61147);
    var_27 = var_4;
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            {
                arr_36 [i_9] [20] [i_10] = 56;
                var_28 = (var_12 && 1);
                var_29 = (min(var_29, (((min((min(51023, 0)), (arr_34 [i_9] [i_9])))))));
                var_30 = (arr_32 [i_9]);
            }
        }
    }
    #pragma endscop
}
