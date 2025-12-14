/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_2] = (min(var_8, (((1 != var_2) ? ((min(var_7, var_6))) : (arr_2 [i_0] [11] [i_2])))));
                    var_13 = (((min((min(var_7, 121)), (((-1 ? var_3 : var_6))))) < (((2308335035 << (24810 - 24793))))));
                }
            }
        }
    }
    #pragma endscop
}
