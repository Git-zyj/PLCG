/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = 1;
                    arr_8 [1] [i_1] [i_0] = (((227375331 / (min(96, 1076173286)))));
                }
            }
        }
    }
    var_19 *= (min((--97), (max(((1 ? 77 : var_14)), var_1))));
    var_20 = -1076173287;
    #pragma endscop
}
