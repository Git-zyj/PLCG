/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -411156477;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = ((!(arr_0 [i_2] [i_1])));
                    arr_6 [i_0] [i_2] [i_2] = (arr_4 [i_0] [i_0] [i_2]);
                    arr_7 [i_1] [i_1] &= var_16;
                }
            }
        }
    }
    var_22 = ((~((~((var_4 ? var_0 : var_10))))));
    #pragma endscop
}
