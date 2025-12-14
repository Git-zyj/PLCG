/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 -= ((max((arr_4 [i_0] [i_0]), (max(756, var_2)))));
                    arr_8 [i_1] [6] [i_2] [3] = ((!((max((var_13 % 759), ((max(var_10, (arr_3 [i_0] [i_0] [i_0])))))))));
                }
            }
        }
    }
    var_15 = var_3;
    var_16 = var_2;
    var_17 = -5;
    #pragma endscop
}
