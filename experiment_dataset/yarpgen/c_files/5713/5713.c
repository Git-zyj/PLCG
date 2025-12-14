/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (~1);
                var_10 = ((~(((var_4 + 2147483647) >> (var_2 - 105)))));
            }
        }
    }
    var_11 = (max(var_5, ((var_8 ? ((max(8, var_2))) : ((min(var_0, var_6)))))));
    var_12 *= var_1;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_13 -= (((-((-1 ? 12 : var_5)))));
                arr_12 [i_3] [i_3] [i_3] = (((max((~var_2), var_9)) + var_9));
                arr_13 [i_3] [i_3] = (((max(5264551682466660390, -961550416))) ? var_1 : -var_4);
            }
        }
    }
    #pragma endscop
}
