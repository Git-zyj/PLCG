/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        var_14 = (max(var_14, ((181 ? var_11 : 1176345580767166102))));
        var_15 -= arr_1 [i_0];
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2 + 2] [i_2] = (((((((1176345580767166102 ? -6430260549277856594 : (arr_8 [i_1] [i_1] [i_2] [i_1])))) ? (max(3240324145, 1125899906842623)) : (arr_10 [0] [i_2])))) ? (arr_4 [i_1] [i_1]) : ((-((var_1 ? var_6 : (arr_10 [i_1] [i_2]))))));

                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, ((-(((((arr_6 [i_2 - 1] [i_3]) ? var_11 : var_3)) ^ (arr_14 [i_1] [i_1] [i_3] [i_4])))))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            arr_18 [i_2] [i_2] = ((!(arr_3 [i_1])));
                            arr_19 [i_2] [i_2] = ((var_11 ? (arr_7 [i_2] [i_2]) : (arr_7 [i_2] [i_2])));
                        }
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_2] [i_2] [i_3] [i_3] [1] = ((4102967764 || var_1) ? (arr_3 [i_1 + 3]) : ((-3454088603938351761 ? 175 : (arr_3 [i_1 + 2]))));
                        arr_24 [i_6] [i_2] [i_3] [i_2] [i_1] = ((!(1 ^ -1176345580767166082)));
                        arr_25 [i_6] [i_2] [i_2] [i_1] = ((((arr_10 [i_6 - 1] [i_2]) || ((max(var_7, -574585644932669088))))));
                        arr_26 [i_2] [i_2] = 1;
                        var_17 ^= ((var_1 ? (arr_15 [i_1] [i_1] [i_2 + 1] [1] [1]) : ((max((arr_15 [i_2] [i_2] [i_2 + 1] [0] [i_3]), (arr_15 [i_2] [i_2] [i_2 + 1] [0] [i_2]))))));
                    }
                    var_18 = (min(((((min(var_1, 8388592))) ? (((min((arr_21 [i_1] [i_1] [i_2] [16] [i_3]), (arr_15 [i_1] [i_1] [11] [i_2] [i_1 + 2]))))) : (max((arr_14 [i_1 + 1] [i_1 + 1] [i_2] [i_3]), var_1)))), ((-962616396672579705 ? var_13 : (!var_2)))));
                }
            }
        }
        arr_27 [13] |= (max((((1 + 4294967276) ? ((((!(arr_15 [i_1] [8] [i_1] [8] [i_1 - 1]))))) : ((var_6 ? (arr_16 [i_1] [i_1]) : var_11)))), (min(((0 ? 1429176517151659453 : 7568)), 241))));
        var_19 = (~24);
        arr_28 [i_1 + 2] = (235 - 1);
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_20 ^= ((-119 ^ (!88)));
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 7;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 7;i_10 += 1)
                {
                    {
                        var_21 += (arr_7 [i_7] [i_8]);
                        arr_38 [i_7] [i_7] [i_7] = min(((((arr_31 [i_8 - 1]) == (arr_31 [i_8 + 1])))), ((min(var_12, var_10))));
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, ((min(var_12, var_1)))));
    #pragma endscop
}
