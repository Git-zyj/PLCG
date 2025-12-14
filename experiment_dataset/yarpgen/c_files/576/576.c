/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_3 | ((var_3 ? var_11 : var_7))));
    var_20 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 -= ((((max(var_9, (min(var_11, (arr_4 [i_2] [i_1] [i_0])))))) ? (arr_1 [i_0]) : (((min(var_5, 32766))))));
                    var_22 |= (((((((arr_3 [i_1] [i_1] [i_1]) / 16327975384818917669))) ? var_2 : ((0 ? var_0 : 14)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_23 = var_18;
                arr_12 [i_3] [13] [i_3] = 27865;
            }
        }
    }
    var_24 = var_3;
    #pragma endscop
}
