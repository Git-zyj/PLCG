/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (max(2147483647, 11270));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2 - 1] [8] [i_0] = var_13;
                            var_15 += (min((max(var_4, var_14)), (((var_11 ? var_8 : var_13)))));
                            arr_13 [i_0] [i_0] [7] [i_2] [i_3] [i_0] = (((((max((arr_3 [i_0] [i_1]), (((var_1 && (arr_3 [i_0] [i_0])))))))) ^ (min(((((arr_3 [i_0] [i_0]) && var_11))), (min(var_13, (arr_5 [i_0])))))));
                        }
                    }
                }
                arr_14 [i_0] [i_0] = (((!var_8) << (-11286 + 11304)));
            }
        }
    }
    var_16 = var_14;
    var_17 = ((min((min(var_2, var_0), var_11))));
    #pragma endscop
}
