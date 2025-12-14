/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = ((4373711255496360116 ? ((-(4943368728885465757 || var_9))) : ((max(1, (var_7 == var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 -= ((((arr_6 [i_0] [i_0] [i_2 - 1] [i_0]) - (max(var_1, 2824649558)))));
                    arr_8 [i_2] [i_1] [i_2] = var_2;
                }
            }
        }
    }
    #pragma endscop
}
