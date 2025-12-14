/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = (min(var_19, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] [1] = (arr_2 [i_1]);
                var_20 = (arr_3 [i_0] [12]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_21 = (((arr_9 [i_3]) ? (((((6455 ? 15855632494971452506 : 2591111578738099102))) ? ((var_17 ? var_8 : var_5)) : var_7)) : ((var_0 ? ((var_8 ? (arr_10 [18] [4]) : var_2)) : var_1))));
                var_22 = (max(var_22, (arr_8 [i_3 - 1])));
                var_23 = (((((15855632494971452513 ? -1 : -68))) ? (arr_11 [i_2] [1] [11]) : (((((71 ? var_0 : 15855632494971452501))) ? (arr_10 [1] [i_3 - 1]) : (arr_11 [i_3 - 1] [10] [i_2])))));
            }
        }
    }
    var_24 = var_7;
    #pragma endscop
}
