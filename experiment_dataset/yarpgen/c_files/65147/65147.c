/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_13 ? var_8 : ((var_5 ? var_9 : var_11))))) && (46 * var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = var_0;
                var_15 += (((((min((arr_2 [i_0] [i_0] [i_0]), (arr_1 [i_0] [i_1])))))) != (((arr_3 [i_1] [i_0]) ? (var_6 % var_5) : (min((arr_1 [i_0] [i_1]), -29306)))));
            }
        }
    }
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                var_17 = ((((max((arr_6 [i_3 - 2] [i_3 + 2]), (arr_6 [i_3 - 1] [i_3 + 2])))) ? (((((((arr_6 [i_2] [7]) ? (arr_8 [i_3]) : var_4))) ? 1073741823 : (((arr_7 [i_3] [i_2]) ? var_8 : var_13))))) : (((arr_8 [i_2 + 4]) ? ((var_13 ? 1 : var_1)) : ((-(arr_8 [i_3])))))));
                var_18 -= (((((var_2 ? 417880006258296206 : (((var_0 ? 1 : (arr_9 [i_2] [i_2]))))))) && ((min(var_8, (max((arr_7 [i_3] [1]), var_10)))))));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_19 ^= ((-(~var_6)));
                    var_20 = (min(var_20, (((((var_1 ? var_10 : var_10)) <= (arr_11 [i_4] [i_5]))))));
                }
            }
        }
        var_21 -= (arr_11 [i_4 - 3] [i_4 + 1]);
        var_22 = (min(var_22, (arr_6 [i_4 - 1] [i_4 + 1])));
        var_23 = (((arr_7 [i_4 - 1] [i_4 - 1]) ? 115 : (arr_7 [i_4 - 1] [i_4 - 2])));
    }
    for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
    {
        var_24 = (((min((arr_19 [i_7 - 1]), (arr_19 [i_7 - 1]))) <= (min((arr_19 [i_7 - 1]), (arr_19 [i_7 - 1])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 7;i_9 += 1)
            {
                {
                    var_25 = (((((min(((var_0 ? 1 : (arr_11 [i_7] [i_9]))), (((arr_1 [10] [10]) ? (arr_17 [i_8] [i_8] [2]) : (arr_22 [i_7] [i_8] [i_7]))))) + 2147483647)) << ((((-var_0 ? (arr_4 [i_7 - 2] [i_7 - 2]) : ((max(0, 1))))) - 146))));
                    var_26 = (max(var_26, ((((1 ^ 353) > var_10)))));
                    var_27 -= (((arr_12 [i_7 + 1]) ^ (((!var_7) >> (((arr_15 [i_8] [i_9 + 3]) - 5719))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
    {
        var_28 = (~var_9);
        var_29 = (((1292524843 + (arr_15 [11] [i_10]))));
    }
    #pragma endscop
}
