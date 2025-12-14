/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [20] [i_0] = var_6;
                    var_12 = (max(var_12, (((+((((56622591 ? (arr_2 [9] [i_1] [i_0]) : var_10)) - (((arr_5 [i_0] [i_0] [i_0] [i_0]) + 1)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (((((-48641 ? 30385 : (max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), 54950))))) ? ((-(arr_8 [i_0] [i_2] [i_4]))) : ((min((-127 - 1), var_7)))));
                                var_14 = (min(((min((-1854820230 && var_9), ((0 ? var_6 : var_2))))), 1558007422));
                            }
                        }
                    }
                    arr_11 [i_1] [i_1] [i_0] = ((((min((1854820227 / 8160), (min(-1854820230, -1854820230))))) ? (((58524 & (arr_0 [18])))) : 1854820229));
                }
            }
        }
    }
    var_15 = (((((~((127 ? 1 : 0))))) ? -966537158 : (((!(((850113792 ? var_1 : -1854820224))))))));
    var_16 = ((((((18588 / var_0) ? ((16870 ? 48657 : 63935)) : 1))) ? 54 : var_11));
    var_17 = (min(((((30 ? var_2 : 52124)) * var_7)), ((-((min(13412, -64)))))));
    #pragma endscop
}
