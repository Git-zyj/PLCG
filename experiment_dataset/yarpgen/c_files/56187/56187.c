/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [10] &= (arr_4 [i_0]);
                arr_6 [i_1] [i_1] = ((!((max((arr_2 [i_0]), 7231731364623212647)))));
                arr_7 [12] [i_1] [1] = (max(((((arr_4 [i_0]) | 246))), var_3));
            }
        }
    }
    var_19 = (max(346986596907570074, ((min(201326592, (201326614 + 9))))));
    #pragma endscop
}
