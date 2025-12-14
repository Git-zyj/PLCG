/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((var_6 ? var_13 : var_11))) ? (((((var_8 ? var_0 : var_5))) ? var_2 : (var_13 + var_10))) : var_7));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0] = (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 - 1]) : var_3));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_1 + 1] [i_2] = var_9;
                    arr_8 [i_2] [i_1] [i_0 + 1] = min(((((max(var_0, (arr_1 [i_2] [i_1])))) ? ((min(var_7, var_6))) : var_1)), ((max((arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]), var_9))));
                    var_15 = (((((((min(var_8, var_9))) ? var_11 : (max(678062979, 3616904316))))) ? ((var_5 | ((var_10 ? var_5 : (arr_6 [i_0 - 1] [i_1 + 1] [i_2] [i_2]))))) : (arr_6 [i_0] [i_1] [i_2] [i_2])));
                }
            }
        }
    }
    var_16 += (max(((var_6 ? var_7 : var_6)), (((((var_1 ? var_5 : var_11))) ? var_11 : (max(var_9, var_4))))));
    #pragma endscop
}
