/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 += var_14;
                    arr_6 [i_0] [i_1] = (min(((min(182689646, -182689646))), (arr_4 [i_0] [i_2 - 1] [i_0])));
                }
            }
        }
    }
    var_19 = var_12;
    var_20 = (min(235, 182689646));
    var_21 = (min(((var_14 ? var_15 : (max(var_17, var_3)))), (min(var_3, var_5))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                var_22 = ((((((arr_7 [i_3 - 1]) ? (arr_3 [i_4 + 1]) : var_5))) ? (((arr_7 [i_3 - 1]) ? (arr_7 [i_3 - 1]) : var_6)) : ((-13 ? -2031337616 : -2031337616))));
                var_23 = (min(var_17, ((182689645 ? -182689633 : -33))));
                arr_12 [i_3] [i_4] = var_14;
                arr_13 [i_3] [i_4] = min(((var_7 ? (((min(var_7, var_7)))) : (((arr_8 [6]) ? (arr_1 [i_4]) : var_3)))), var_0);
            }
        }
    }
    #pragma endscop
}
