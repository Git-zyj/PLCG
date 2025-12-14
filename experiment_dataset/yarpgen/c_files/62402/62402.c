/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(max((max(var_15, var_9)), -var_6))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (arr_5 [0] [i_1] [i_0]);
                    var_21 = (((arr_0 [i_0 + 1] [i_2 + 1]) >= ((max((arr_0 [i_0 + 1] [i_2 + 3]), 1)))));
                }
            }
        }
    }
    var_22 = (~(((-1818031371 + var_3) ? 116 : var_5)));
    var_23 *= var_16;
    #pragma endscop
}
