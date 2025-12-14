/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = 26152;
                arr_8 [i_0] = 9;
                arr_9 [i_0] = (var_8 != 0);
            }
        }
    }
    var_15 ^= var_2;
    var_16 = (var_6 / var_2);
    #pragma endscop
}
