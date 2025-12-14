/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = 16813806854392842331;

    for (int i_0 = 1; i_0 < 7;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1 + 1] [i_3] [i_3] [i_3] = (((arr_8 [7] [i_3] [i_2] [i_3]) ? (arr_7 [i_0] [i_0] [i_3] [i_0 + 3]) : -9314089605834773070));
                        var_21 = (i_3 % 2 == 0) ? (((5484900497152830502 / ((((((var_17 << (((arr_8 [i_3] [i_3] [i_3] [i_0 - 1]) - 3192))))) ? (~0) : 1166438463)))))) : (((5484900497152830502 / ((((((var_17 << (((((arr_8 [i_3] [i_3] [i_3] [i_0 - 1]) - 3192)) - 31954))))) ? (~0) : 1166438463))))));
                        var_22 = ((((var_13 ? (arr_1 [i_0 + 1]) : 9638234684585478482)) << ((((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2])))) - 27928))));
                        var_23 = (((268435456 <= var_0) << ((((var_17 ? 4152462451 : var_2))))));
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = var_16;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((!(arr_6 [i_4] [i_4] [i_4 + 2] [i_4 - 1])));
        var_24 = (arr_11 [i_4 + 2]);
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_5] = (((arr_16 [i_7 + 3]) - (((1612771353 ? var_14 : (arr_19 [i_5 - 1] [i_6]))))));
                    var_25 = (arr_25 [i_6] [i_6] [i_5]);
                    arr_27 [i_5] = (min(((((arr_23 [i_5] [i_7 - 1] [i_7 + 3] [8]) && (arr_17 [i_5])))), (~var_2)));
                }
            }
        }
        var_26 = -16777216;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_27 *= (-(((arr_28 [i_8]) ? (arr_23 [10] [i_8] [i_8] [10]) : ((var_9 - (arr_24 [i_8]))))));
        var_28 = (max(1, 105));
        var_29 = (((-(arr_19 [i_8] [i_8]))));
        var_30 = (((((var_3 || (arr_30 [i_8] [i_8])) ? (arr_17 [i_8]) : (arr_29 [i_8])))));
        var_31 = ((((var_2 % (arr_22 [i_8] [i_8] [1] [i_8])))) | (((((max(126, var_4)))) ^ ((var_17 ? var_3 : var_6)))));
    }
    var_32 = (max(var_32, (((59 && (4294967295 | 3728051974))))));
    #pragma endscop
}
