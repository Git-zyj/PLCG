/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_0 ? var_8 : var_1))) ? (((-554505008 ? var_7 : var_9))) : var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 |= (arr_5 [i_1] [i_2]);
                    var_16 = (((((11672741925351583110 ? (arr_0 [i_0]) : ((var_10 ? (arr_2 [i_0] [i_1] [i_2]) : (arr_3 [i_0] [i_0])))))) ? ((((arr_0 [i_0]) - (arr_4 [i_2])))) : (1073741823 * 1)));
                    arr_7 [i_0] [i_0] = var_10;
                }
            }
        }
    }
    #pragma endscop
}
