/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 84;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = (min(var_14, ((var_5 | (var_18 + var_5)))));
                    var_22 += ((((((12 ? var_3 : (arr_2 [i_2])))) ? var_10 : (((arr_6 [i_0] [21] [i_1] [6]) & (arr_5 [i_2] [16] [i_2]))))));
                }
            }
        }
    }
    var_23 = var_10;
    #pragma endscop
}
