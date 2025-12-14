/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = var_16;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_6 [4] [i_3]);
                        var_19 ^= ((var_16 + (arr_1 [i_3])));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_20 = (arr_7 [i_1]);
                        var_21 = (min(var_21, (((!(!var_15))))));
                        var_22 = (((arr_12 [i_0] [i_1] [i_4 - 1] [i_4] [21] [i_2]) ? (arr_13 [i_0] [i_4] [20] [i_4]) : ((~(arr_7 [i_1])))));
                        arr_14 [0] [i_0] [i_1] [0] |= (~65521);
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            var_23 ^= ((var_5 ? var_5 : (~-71)));
                            arr_19 [i_6] = (((arr_17 [i_5 + 2] [i_6]) || (arr_17 [i_5 + 2] [i_6])));
                        }
                        arr_20 [i_5] [i_1] [i_5] [i_5] [i_5] = (((arr_12 [i_2] [18] [i_5] [i_5 + 2] [i_5 - 1] [i_5]) ? var_2 : (arr_12 [i_0] [i_2] [i_2] [i_5] [i_5 + 2] [i_5 + 1])));
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_24 = (((arr_10 [i_7]) ? (arr_7 [i_7]) : (((((arr_8 [i_7] [i_2] [i_0] [i_0]) != 517))))));
                        var_25 = (((arr_11 [i_0] [i_1] [i_2] [i_7]) / (arr_22 [i_7])));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_26 -= (((arr_11 [i_0] [i_1] [i_8] [i_8]) <= (arr_11 [11] [i_2] [i_8] [i_8])));
                        var_27 -= ((65519 ? (arr_5 [i_0] [i_1]) : (arr_5 [i_1] [i_0])));
                        arr_25 [i_0] [i_8] [1] [i_8] = ((arr_18 [i_8] [12] [i_1]) ? var_14 : 16);
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_28 ^= (var_8 || -65535);
                        arr_28 [i_0] [i_1] [i_2] = 65515;
                        var_29 = ((-(arr_3 [i_0] [2] [i_0])));
                    }
                }
            }
        }
        var_30 = (min(var_30, ((((arr_3 [i_0] [2] [i_0]) >> (((arr_3 [i_0] [9] [i_0]) - 10151)))))));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_31 &= (((((-18075 - 4294967295) ? ((16 ? -18070 : 18052)) : ((max(var_5, (arr_1 [i_10])))))) != (((!(((255 ? var_0 : -18075))))))));
        arr_32 [i_10] = (((((arr_15 [i_10] [i_10] [2]) >= (min(4063232, 32767))))) << (((((arr_30 [i_10]) % (arr_15 [2] [i_10] [i_10]))) - 3575)));
    }
    var_32 = (((2334493980 <= var_12) < ((((max(var_9, var_5))) ? (-18075 != 42) : var_4))));
    var_33 = (min(var_4, (var_1 / var_10)));
    #pragma endscop
}
