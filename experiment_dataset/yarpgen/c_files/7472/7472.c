/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max(var_0, (~4294967273))) & var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = (arr_7 [i_0]);
                    var_12 = max(((var_6 ? (arr_0 [i_0]) : 1)), (arr_4 [i_1]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = ((-2147483647 - 1) ? 2147483635 : (-2147483647 - 1));
                                var_14 -= -2147483639;
                                var_15 = (max(var_15, ((((arr_7 [14]) ? (max(-2147483639, ((var_3 ? (arr_0 [i_4]) : 4294967295)))) : var_1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
