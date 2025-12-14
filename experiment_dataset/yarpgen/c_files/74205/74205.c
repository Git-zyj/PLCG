/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 21742920;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = -722;
                    var_14 = (min((max((var_1 + var_7), (4641484563382612862 < var_9))), (~4641484563382612883)));
                }
            }
        }
    }
    var_15 = (var_5 + var_3);
    #pragma endscop
}
