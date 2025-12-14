/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_10 -= (max(2519, 65535));
                arr_7 [i_0] = (((!2537) ? var_5 : ((var_2 * (arr_0 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_11 = (((((var_6 ? (arr_9 [i_2] [i_2 + 2]) : (arr_9 [i_2] [i_2 - 1])))) ? (min(var_4, var_9)) : -18725));
                arr_12 [i_2 + 2] [i_2] [i_3] = ((((max((arr_9 [i_2] [i_2]), (((var_3 ? var_8 : var_6)))))) ? (((((min(var_4, var_9))) || var_2))) : var_0));
            }
        }
    }
    #pragma endscop
}
