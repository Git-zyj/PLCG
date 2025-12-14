/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = ((((((arr_8 [i_0 + 1] [i_1 + 1] [10] [i_3]) ? var_4 : (((arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 3] [8] [i_4] [i_2 - 2]) ? var_0 : (arr_3 [i_3])))))) ? (((((((255 ? var_6 : var_9))) && (((36223 ? (arr_3 [i_0]) : var_3))))))) : 2437489623));
                                var_12 = (min(((var_1 ? (var_7 % var_1) : (((arr_3 [i_2]) % var_3)))), (((var_1 ? (arr_13 [i_1 - 3] [i_0] [i_0] [i_0 + 2] [i_0]) : 576998661)))));
                                var_13 = ((((((arr_5 [i_1 + 2] [i_1 - 2] [i_1 + 1]) + var_5))) ? (((arr_5 [i_1 - 1] [i_1 + 2] [i_1 - 2]) ? (arr_5 [i_1 - 3] [i_1 + 1] [i_1 + 2]) : var_10)) : (((var_5 % (arr_5 [i_1 - 2] [i_1 + 2] [i_1 - 1]))))));
                            }
                        }
                    }
                }
                var_14 = var_4;
                arr_15 [i_1] [i_0] = var_1;
                var_15 = (min(8750846840940865504, ((((((arr_9 [i_0 - 1] [i_1] [3] [i_0]) % -888610720))) ? var_6 : (arr_3 [i_0 - 1])))));
            }
        }
    }
    var_16 = ((((((((var_4 ? var_6 : var_1))) ? 56856 : ((var_10 ? var_7 : var_9))))) ? ((min(var_9, var_4))) : ((3357049646740906656 ? 255 : 5519868784642977653))));
    var_17 = var_4;
    var_18 = (var_5 << (var_3 - 8360610688180815602));
    #pragma endscop
}
