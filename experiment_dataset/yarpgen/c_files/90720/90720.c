/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= 19;
    var_15 -= var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 -= var_11;
                    arr_9 [i_2 - 2] [i_0] [i_0] = (max(((((((arr_2 [i_0]) ? -33 : 3591171615))) ? 67 : var_5)), ((((arr_7 [i_0]) * (arr_5 [i_0] [i_1 + 1]))))));
                    var_17 &= ((var_12 & ((((arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1]) ^ (arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
