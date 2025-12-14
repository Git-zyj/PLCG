/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = ((((((arr_8 [i_0] [i_0] [i_0] [i_0]) + 2147483647)) << ((((85 ? var_9 : 1)) - 25211)))));
                    var_14 = (arr_6 [i_0]);
                }
            }
        }
    }
    var_15 = ((((((var_12 ? 0 : var_7)))) ? (((max(var_9, var_4)))) : (!var_12)));
    #pragma endscop
}
