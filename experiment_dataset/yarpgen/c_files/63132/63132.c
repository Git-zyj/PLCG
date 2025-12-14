/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = (var_1 < var_0);
    var_12 *= var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_0 + 3] = 65535;
                    var_13 = (max((arr_1 [2]), 5584189486923315536));
                    var_14 += (max(0, (arr_0 [i_1] [i_2])));
                    arr_10 [i_2] [i_1] [i_2] = ((12862554586786236076 < (arr_2 [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
