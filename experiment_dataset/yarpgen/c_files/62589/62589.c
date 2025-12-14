/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -43;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 *= (((((26561 ? (min(7, var_5)) : -1))) ? var_8 : ((((2764 + var_8) ? var_10 : (1 - 1))))));
                var_16 -= ((1 ? 1 : 24648));
                arr_7 [i_0] = var_2;
            }
        }
    }
    #pragma endscop
}
