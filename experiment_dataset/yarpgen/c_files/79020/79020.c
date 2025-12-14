/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = var_6;
                    var_15 = (min(var_15, 0));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    arr_13 [i_5] [i_4] [i_5] = (arr_12 [i_4] [i_4 + 2]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_16 = ((var_5 > (((arr_2 [i_4 + 2] [i_4 - 1]) ? -29258 : 0))));
                                var_17 = (((((15820201576167708611 ? var_5 : (arr_2 [i_4 + 1] [i_4 - 1])))) ? (((min(var_13, var_7)) * ((var_13 ? (arr_1 [i_3]) : var_9)))) : ((186 ? (arr_9 [i_5 + 1] [i_4 - 1] [i_4 - 1]) : (arr_9 [i_5 - 1] [i_7] [i_4 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((((arr_0 [i_8] [i_8]) ? var_7 : 6343112686575677792)))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_19 = (arr_20 [i_8]);
                    var_20 = 1;
                }
            }
        }
        var_21 = (min(var_21, 1));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
    {
        var_22 = (((((2008502406 ? (arr_1 [i_11]) : ((12665056273476549345 ? 1 : 74))))) ? var_13 : ((583262016 - (max(var_12, (arr_5 [i_11] [i_11] [i_11])))))));
        var_23 = (max(var_23, var_6));
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
    {
        var_24 = var_6;
        var_25 = (max(var_25, var_4));
        var_26 = ((((3415591160720291919 ? var_10 : (arr_18 [i_12]))) * var_0));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        var_27 = (((arr_18 [i_13]) ? var_3 : (arr_27 [i_13] [i_13])));
        var_28 = ((((273103191 ? (arr_2 [i_13] [i_13]) : -1)) / (arr_28 [i_13])));
        var_29 = (arr_4 [i_13] [i_13]);
        arr_31 [i_13] = 3520587676123293059;
    }
    var_30 = (min(var_30, var_1));
    #pragma endscop
}
