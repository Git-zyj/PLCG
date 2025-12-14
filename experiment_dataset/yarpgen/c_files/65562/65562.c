/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_19 | (min(((min(67, -67))), (var_16 ^ var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = var_8;
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (((((~((var_0 & (arr_4 [i_0])))))) ? (min((((0 ? 1 : var_5))), ((~(arr_2 [i_2] [i_2]))))) : (((~var_5) ? (((arr_5 [i_0] [i_0] [i_0]) ^ 0)) : (arr_0 [i_0])))));
                    arr_9 [1] [i_1] [1] [i_1] = (~-67);
                }
            }
        }
    }
    var_21 = -var_18;
    #pragma endscop
}
