/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_2));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [11] [i_1] [i_1] = (arr_0 [i_1] [i_1]);
                    arr_9 [i_0] [1] [i_1] [i_0 + 1] = (min(var_3, (arr_7 [i_0] [i_1] [i_1] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
