/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = 32765;
        var_13 = (((var_6 % var_1) - (((((max(var_0, 1))) ? var_1 : 3)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_14 = (arr_4 [i_2 - 1]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_15 = (min(var_15, var_2));
                        var_16 = (var_3 == 228);
                    }
                }
            }
            var_17 = ((((30 == (arr_12 [i_1] [i_1] [i_1] [i_2] [i_2] [i_2]))) ? (arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (((arr_10 [i_1] [i_2 + 1] [i_2] [i_2]) ? (arr_5 [i_1]) : (arr_3 [i_1] [i_2])))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_18 = (((!var_1) >= (arr_20 [i_1] [16] [i_5] [i_7])));
                        var_19 = (((arr_21 [i_5] [i_1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_7]) ? (arr_5 [i_5 + 1]) : (((arr_3 [i_6] [16]) ? (arr_18 [i_1] [9] [i_7]) : (arr_8 [i_1] [i_1] [i_1])))));
                        var_20 -= (((((~(arr_15 [i_7] [i_5 + 1] [i_7])))) ? (arr_19 [i_1] [i_5 + 1] [i_6]) : (arr_19 [i_7] [i_5 + 1] [i_5])));
                        var_21 = (((((arr_1 [i_1] [i_1]) ? var_3 : var_0)) + (arr_2 [i_5 + 1])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_22 = var_7;
                            var_23 = ((~(arr_22 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5])));
                            var_24 = (arr_21 [i_5] [i_5] [i_8] [i_5] [i_5] [i_5]);
                            var_25 = var_0;
                            var_26 = (max(var_26, ((((arr_21 [i_1] [i_5 + 1] [i_1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? var_1 : 3)))));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_27 = (((((30 ? 69 : -6694080632976169227))) ? (~var_10) : ((var_7 ? (arr_18 [i_1] [i_11] [i_11]) : (arr_18 [i_1] [i_11] [i_11])))));
            var_28 -= var_7;
        }
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_29 = (((((~(arr_22 [i_12] [i_12] [i_12] [i_1])))) >= (((min((max(var_2, (arr_1 [i_1] [i_12]))), (arr_8 [i_1] [i_1] [i_12])))))));
            var_30 ^= (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
        }
        var_31 = (max(var_31, var_8));
        var_32 = (((max(((var_10 ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : var_2)), ((max((arr_29 [i_1] [2] [i_1]), -39))))) | var_10));
    }
    var_33 = (min(var_33, var_11));
    var_34 = (((min(var_5, var_3)) - var_5));
    #pragma endscop
}
