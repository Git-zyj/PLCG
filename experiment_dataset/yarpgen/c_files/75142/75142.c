/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = (((((-var_6 ? (var_0 + var_7) : ((max(var_6, var_3)))))) ? var_0 : (((var_8 ? var_9 : var_9)))));
    var_12 += ((+((var_2 ? (var_5 * var_9) : (((min(-26172, 131))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [14] [i_1] = ((!(((-(arr_10 [i_4 + 1] [i_1 - 2] [i_0 + 3]))))));
                                var_13 = (~-132);
                            }
                        }
                    }
                }
                var_14 = ((-8599458206399931433 ? 2345321204101291631 : 13853));
                var_15 = (max(var_15, (((!(((((max(var_8, (arr_3 [i_0] [i_1])))) / ((max((arr_8 [8]), (arr_4 [1]))))))))))));
            }
        }
    }
    var_16 = var_6;
    #pragma endscop
}
