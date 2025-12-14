/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(((231 ? 1264680710 : 99)), var_0)), (var_6 >= var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 &= 4813;
                    arr_9 [i_2] [i_0] [i_2] [i_2] = var_0;
                    var_16 *= (max(((min(((((arr_1 [1]) != (arr_7 [i_0] [11])))), (max((arr_6 [10]), 3030286586))))), (((((-(arr_4 [i_0])))) ? ((1264680702 ? (arr_7 [i_0] [i_0]) : var_7)) : var_12))));
                }
            }
        }
    }
    #pragma endscop
}
