/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_3));
    var_13 = (max(var_13, (((var_3 ? 4838 : -var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = var_6;
                    arr_8 [i_1] [i_1 - 3] [i_1] = (arr_6 [i_1]);
                }
            }
        }
    }
    var_15 *= var_4;
    #pragma endscop
}
