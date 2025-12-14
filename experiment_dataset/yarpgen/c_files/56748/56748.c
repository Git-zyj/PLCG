/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_7 ? var_10 : 98628013)));
    var_13 = 2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = ((max(var_2, var_6)));
                    arr_8 [i_0] [i_0] [i_0] [1] = ((max(((883243349 ? var_1 : var_10)), (~var_2))));
                    var_15 &= (((min(1042600360, 3)) & var_4));
                    arr_9 [i_2] [i_2] [i_1] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
