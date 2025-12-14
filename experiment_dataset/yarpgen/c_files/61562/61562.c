/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((-(max(-1477156862, 868319389))));
                    var_21 = (min((max(1477156861, ((1840 ? 1477156861 : 15)))), ((-(arr_8 [i_0] [i_1 + 1])))));
                    var_22 *= ((var_16 * (((arr_2 [i_1 - 1] [i_2]) ? (arr_2 [i_2] [i_2]) : (arr_2 [i_0] [10])))));
                    var_23 = (arr_6 [i_0] [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
