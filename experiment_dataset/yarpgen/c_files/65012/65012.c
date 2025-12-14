/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = (-((var_6 ? 54 : var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 *= ((((max((arr_3 [i_0] [i_0] [18]), 54))) ? (var_11 >= var_7) : var_5));
                var_15 = (arr_2 [i_1] [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    arr_11 [i_4] [i_4] [i_2] [20] = (-32767 - 1);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] [12] [12] [i_2] = ((var_3 != (arr_7 [i_2] [i_4 - 2])));
                                arr_18 [i_2 - 1] [i_2] [i_5] [i_6] = (arr_12 [1] [i_3 - 1] [i_3 - 2]);
                                var_16 = (var_4 % 29212);
                            }
                        }
                    }
                }
                var_17 *= ((-(min(var_2, ((((arr_16 [i_2] [i_2] [8] [i_3 - 1] [22] [i_3]) ? var_6 : var_4)))))));
            }
        }
    }
    #pragma endscop
}
