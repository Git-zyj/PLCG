/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 = ((((arr_7 [i_1] [i_2 - 2] [1] [i_2]) + (arr_6 [i_2 + 1] [i_2] [i_2 + 1]))));
                    var_23 = ((((192 && (arr_0 [i_2 - 1] [i_1]))) && ((max((arr_0 [i_2 + 1] [i_1]), 40)))));
                }
            }
        }
    }
    #pragma endscop
}
