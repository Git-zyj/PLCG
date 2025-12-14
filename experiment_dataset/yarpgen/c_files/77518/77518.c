/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (max((max(0, (arr_0 [i_0]))), (((!(arr_0 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((((((arr_12 [i_0] [i_0] [i_2] [i_3] [i_1] [i_4]) ? var_1 : (arr_5 [i_4] [i_2] [i_2] [i_1])))) ? (((min(0, var_3)))) : (((arr_12 [i_4] [i_3] [15] [i_1] [i_0] [i_0]) ? var_6 : -22)))))));
                                var_13 = (max(var_13, ((((((((arr_9 [i_3] [i_3] [i_3] [i_3 + 1]) > var_1)))) != var_4)))));
                            }
                        }
                    }
                }
                var_14 = (i_0 % 2 == 0) ? ((!(((var_9 >> ((((var_5 ? (arr_7 [i_0] [i_0] [0]) : var_6)) - 121618381))))))) : ((!(((var_9 >> ((((((var_5 ? (arr_7 [i_0] [i_0] [0]) : var_6)) - 121618381)) - 3719906293)))))));
                var_15 = ((max((arr_5 [i_0] [i_0] [i_1] [i_1]), (arr_3 [i_0] [0] [i_0]))));
            }
        }
    }
    var_16 = ((((min(var_2, (min(4362862139015168, 4294967287))))) ? var_5 : var_10));
    var_17 = ((var_8 ? var_7 : ((0 ? var_4 : ((min(var_10, var_0)))))));
    #pragma endscop
}
