/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_2] = ((1 ? 11722 : 14510926242024730946));
                    arr_11 [i_2] [i_2] = (~14510926242024730946);
                    arr_12 [i_2] [i_2] [12] [i_2] = 30795;
                }
            }
        }
    }
    var_17 = ((118 ? 14510926242024730948 : 34741));
    #pragma endscop
}
