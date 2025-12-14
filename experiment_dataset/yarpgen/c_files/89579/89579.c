/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((((var_2 * ((max((arr_2 [i_0]), var_6)))))) % ((((max((arr_0 [i_0] [i_0]), var_7))) ? ((var_5 ? var_3 : var_12)) : ((max(1032059494, 1032059494))))))))));
                var_21 = ((!(((var_8 ? var_16 : var_14)))));
                arr_5 [i_0] [i_0] = var_11;
            }
        }
    }
    var_22 &= -18708;
    #pragma endscop
}
