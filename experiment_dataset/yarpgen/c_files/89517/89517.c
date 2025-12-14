/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 ^= (arr_0 [i_1] [i_0]);
                var_16 -= (((-((var_3 & (arr_1 [i_0 + 1] [i_1]))))));
                var_17 ^= -var_3;
                var_18 ^= var_2;
            }
        }
    }
    var_19 = (var_11 / var_10);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_13 [i_2] |= (~-var_14);
                arr_14 [i_2] [i_3] = (((-var_2 || var_4) > var_10));
            }
        }
    }
    var_20 -= ((-(((((var_13 ? 0 : var_4))) ? var_2 : var_12))));
    #pragma endscop
}
