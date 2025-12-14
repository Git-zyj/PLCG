/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((-var_2 ? -var_14 : (max(var_14, var_9)))), (((var_9 * var_0) / var_0))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_1] = min((((-(min(var_10, var_11))))), (min((min(var_3, var_9)), var_6)));
                    arr_7 [i_1] [i_1] = ((~(((var_4 + var_2) ? var_1 : (min(var_8, var_13))))));
                }
            }
        }
    }
    #pragma endscop
}
