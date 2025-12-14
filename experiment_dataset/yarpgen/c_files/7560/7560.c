/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 |= ((var_0 ? (arr_9 [16] [i_1 - 1] [i_2]) : ((3924048951 ? ((((arr_8 [i_0] [21] [i_0] [1]) ? 1 : var_12))) : 8388604))));
                    var_19 = (min(var_19, (((!((max(((min(2147483640, (arr_5 [i_0] [i_0] [i_2])))), ((var_8 ? 2147483622 : var_10))))))))));
                }
            }
        }
    }
    #pragma endscop
}
