/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (0 % 541108863425875435);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = (var_7 + var_6);
                arr_7 [i_0] [i_0] = (((arr_1 [i_1]) ^ ((var_2 - (max((arr_0 [1]), -11153))))));
                arr_8 [i_0] [i_0] [i_0] = (((0 ? (arr_5 [i_0] [i_1 - 1]) : var_3)) >> (((((arr_4 [i_0] [i_1 - 1]) ? -8078349873866371311 : (arr_5 [i_0] [i_1 - 1]))) + 8078349873866371342)));
                arr_9 [i_0] [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_2 [i_1]) : (((arr_0 [i_1]) ? ((((var_6 >= (arr_4 [i_0] [i_1]))))) : (max(var_2, -7232161332174872433))))));
            }
        }
    }
    #pragma endscop
}
