/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1 + 1] [i_1 + 1] [1] = ((((((1489491303 ? ((var_4 ? -21573 : -305398339)) : 0)) + 2147483647)) << (!32640)));
                    var_10 = (~1);
                }
            }
        }
    }
    var_11 = var_5;
    #pragma endscop
}
