/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 = arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_14 = (((arr_6 [i_3 + 2] [i_1 + 1] [i_0 + 1] [3]) ? (arr_2 [i_3] [i_1 - 1]) : var_5));
                        arr_10 [1] [i_0] [i_1] [i_0 - 1] [i_0] = (+-6432);
                    }
                    var_15 = -317841512;
                }
            }
        }

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            var_16 = -317841512;
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_17 = ((~(arr_8 [i_5 + 1] [i_0] [i_0] [i_0 + 1])));
                        var_18 = (max(var_18, ((((arr_3 [i_0 + 1] [i_0 - 1] [i_4 - 1]) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_4 + 3]) : (arr_3 [i_0 - 1] [i_0 - 1] [i_4 + 1]))))));
                    }
                }
            }
            var_19 = 47;
            var_20 ^= (!var_2);
            arr_17 [i_0] = (arr_11 [11]);
        }
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            var_21 ^= 1;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            arr_29 [i_10] [i_9 - 3] [i_8] [10] [i_10] &= ((var_0 / ((((arr_1 [i_10]) + var_10)))));
                            arr_30 [i_7 + 2] [9] [i_0] [i_8] = ((-51650 ? (arr_20 [i_0]) : var_12));
                            arr_31 [0] [14] [i_0] [i_9] [15] [i_9] = ((!(arr_12 [i_9 - 1])));
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            arr_35 [i_0] [i_9] = ((((((arr_9 [i_0] [i_9] [15] [i_9]) % 224))) == (var_7 % var_11)));
                            var_22 = arr_26 [i_9 + 4] [i_7 + 2] [i_7 + 1] [i_0 + 1];
                            var_23 += var_2;
                        }
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            arr_38 [i_0] [i_7] [i_9] [2] [i_0] [i_7] = var_2;
                            var_24 &= (((arr_32 [i_7] [15] [i_12 + 1] [i_12] [i_12]) ? (arr_0 [i_0 + 1]) : 890762555));
                            var_25 = ((-317841512 ? (!34273) : (arr_36 [i_12 + 2])));
                            var_26 = (((arr_25 [i_0 - 1] [i_0 - 1] [14] [i_7 + 1]) ? -26341 : var_4));
                        }
                        arr_39 [i_9] [2] [i_0] = (arr_16 [i_9 + 1] [i_9] [1] [i_9 + 2]);
                    }
                }
            }
            var_27 = (max(var_27, (((((arr_21 [i_0] [i_7]) ? -11116 : (arr_9 [4] [i_0 - 1] [2] [4])))))));
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_28 = (max(var_28, (((-1272988034 != (arr_9 [i_13] [i_0 + 1] [i_0] [i_13]))))));
            var_29 = (max(var_29, (6987765032554359243 / 11106)));
        }
    }
    var_30 ^= ((((max((min(var_3, var_12)), 2977978324))) ? (max((max(var_5, 42240)), var_2)) : -11116));
    #pragma endscop
}
