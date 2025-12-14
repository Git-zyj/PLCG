/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (max(208, (-32767 - 1)));
                var_20 = (((!(arr_1 [i_1] [i_1 - 3]))));
                arr_4 [i_1] = max((max(-145870629, -75)), var_14);
            }
        }
    }
    var_21 ^= (max(-1120299342, var_14));
    #pragma endscop
}
