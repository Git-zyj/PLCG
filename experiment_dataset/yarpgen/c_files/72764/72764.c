/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_1 - 1] [i_0] = (max((((!(!0)))), var_14));
                    arr_9 [i_2] [i_0] [i_0] = (max(((min(23455, (arr_2 [i_0 + 2])))), ((max(var_1, var_6)))));
                }
            }
        }
    }
    var_20 = -23437;
    #pragma endscop
}
