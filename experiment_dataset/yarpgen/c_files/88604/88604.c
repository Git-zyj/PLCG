/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1052772119;
    var_13 |= var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_2 - 1] &= var_8;
                    arr_7 [i_0] [i_1] [i_2 - 2] = -18;
                    arr_8 [i_0] [i_1 - 4] [i_2] [i_1 + 2] &= (min((min(1175851198, (arr_1 [i_0 - 2]))), 1));
                }
            }
        }
    }
    #pragma endscop
}
