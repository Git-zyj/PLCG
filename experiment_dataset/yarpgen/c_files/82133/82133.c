/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((33674 ? var_0 : (arr_2 [i_0] [i_0] [i_0]))))) ? var_7 : var_3));
                var_11 = var_2;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_3] [i_4] = ((var_9 ? var_3 : (arr_13 [i_4] [i_4] [i_3] [i_2])));
                                var_12 = ((1 >= (arr_12 [i_2] [i_2] [i_3 + 1])));
                            }
                        }
                    }
                    var_13 = (min(var_13, var_6));
                    arr_20 [i_2] = (((-(arr_6 [i_2] [i_2]))));
                    var_14 = (min((max((arr_6 [i_4] [i_4]), (arr_3 [i_2]))), 16148781131806467919));
                    arr_21 [i_2] [i_2] = (min(((max((arr_10 [i_3 - 1] [i_2]), (max(var_8, (arr_2 [i_2] [i_3] [i_4])))))), ((((min(44, var_8))) ? (arr_13 [i_2] [i_2] [i_2] [i_2]) : (arr_0 [i_3 - 2])))));
                }
            }
        }
    }
    var_15 = (min((((var_0 && var_8) ? var_6 : (max(-1640601771, 25766)))), (((-2472859911268530511 >= (var_0 != var_7))))));
    var_16 = ((((min(var_0, var_8))) >= var_3));
    #pragma endscop
}
