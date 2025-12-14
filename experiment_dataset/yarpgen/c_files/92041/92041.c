/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_14 = ((((((arr_2 [i_0] [i_1] [9]) + (var_3 >= var_4)))) ? ((((var_3 ? (arr_8 [i_3] [i_3] [10] [i_3 + 2] [i_3] [i_3]) : (arr_7 [i_0] [i_0]))) & ((((arr_7 [i_0] [i_0]) ? 1 : var_8))))) : (((var_11 ? ((max(var_7, var_1))) : 4632082717145886255)))));
                            var_15 = ((((min(((((arr_10 [i_0] [7] [i_0 - 2] [i_0]) || var_2))), var_7))) && (((var_1 & ((var_12 >> (var_0 + 1062141295))))))));
                        }
                    }
                }
                var_16 = (max(var_16, var_5));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_17 = (arr_4 [i_0] [i_4]);
                    var_18 = var_0;
                }
                arr_13 [i_0] [i_0] [i_0] = ((((max(var_9, (arr_1 [2])))) && var_5));
                arr_14 [i_0] [i_0] = (((arr_2 [i_0] [i_0] [i_0]) + var_4));
            }
        }
    }
    var_19 = (min(var_19, (var_7 >= var_8)));
    var_20 = (var_3 && var_3);
    var_21 = (((((var_8 - var_5) <= -64)) ? (max(var_11, (min(var_2, var_3)))) : (var_11 || 50767)));
    #pragma endscop
}
