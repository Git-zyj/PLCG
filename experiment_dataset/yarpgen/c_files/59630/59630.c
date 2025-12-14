/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = 0;
                    var_15 = (max(var_15, ((((1 ? ((var_0 - (arr_5 [i_0] [i_1] [i_2])) : 1)))))));
                }
            }
        }
    }
    var_16 = (max(65535, 3467275422));
    var_17 = (((((-1987843814 ? 9567 : 9567))) ? var_5 : ((max(var_2, (var_8 < var_4))))));
    #pragma endscop
}
