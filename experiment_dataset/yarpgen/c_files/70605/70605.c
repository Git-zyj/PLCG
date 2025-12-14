/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((max(var_2, 1785547210)) / (min(var_8, var_2))))) ? (max(1792, ((0 ? var_7 : var_9)))) : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = ((!(((-92 ? -1 : (arr_3 [i_0] [i_1] [i_0]))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_0] [i_2] [i_0] [i_0] = (max((max((((var_6 ? var_0 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))), 1)), (max(13495858631798280715, 170))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] = (~15);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_5] = (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * (arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_5])));
                        arr_17 [i_1] [i_0] = ((var_6 ? ((var_2 ? (arr_1 [i_0]) : (arr_4 [i_0] [i_0] [i_5]))) : (arr_9 [i_0] [i_1] [i_1] [i_0] [i_5])));
                    }
                    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_13 = (129 | 1);
                        var_14 = ((((((((var_1 ? (arr_3 [i_0] [i_1] [i_0]) : (arr_14 [i_0] [i_0] [i_2] [i_6] [i_1])))) ? (arr_14 [i_0] [i_0] [i_0] [i_6 - 1] [i_2]) : 129))) + ((-(min(var_2, 255))))));
                        var_15 = (arr_3 [i_0] [i_1] [i_0]);
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_16 = 28141;
                        var_17 -= 626758499862784504;
                    }
                    var_18 = (min(var_18, (((((((((1315027198 ? 1 : 1))) ? (arr_13 [i_2] [i_2]) : (13495858631798280689 == 1)))) ? (((((var_1 ? var_2 : var_3))) ? (min(1, 9993704676870430160)) : (min((arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_2] [i_2]), (arr_20 [i_0] [i_1] [i_1] [i_1]))))) : ((min((((arr_6 [i_0] [i_1] [i_1] [i_2]) ? (arr_15 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0]) : (arr_0 [i_0]))), 1))))))));
                    arr_23 [i_0] [i_2] = var_8;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_30 [i_9] [i_8] [i_0] [i_1] [i_0] = (min(((((!var_9) && (arr_26 [i_0] [i_1] [i_0])))), (arr_24 [i_0] [i_0] [i_0] [i_0])));
                                var_19 |= ((((~((~(arr_9 [i_0] [i_1] [i_2] [i_2] [i_2]))))) ^ (((arr_10 [i_0] [i_0] [i_2]) ? -24821 : 2211))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
