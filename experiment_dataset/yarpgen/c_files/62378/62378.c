/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (~var_0);
    var_11 = 13839;
    var_12 = (max(var_12, 294524320));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_2;
                    arr_9 [i_1] = (arr_4 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
