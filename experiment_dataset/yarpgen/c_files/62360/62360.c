/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (max((~var_2), (((-(arr_3 [i_0 - 1] [i_0 - 1] [2]))))));
                var_11 = (((255 || (arr_3 [i_0 - 1] [i_0 + 1] [i_0]))));
            }
        }
    }
    var_12 = ((13793 == (!var_6)));
    #pragma endscop
}
