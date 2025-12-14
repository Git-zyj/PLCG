/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [1] [i_1] = 59;
                arr_5 [i_0] [3] = ((((max((arr_0 [11]), (arr_0 [i_0])))) || ((((min((arr_3 [i_0]), 14))) || ((min(var_11, var_13)))))));
            }
        }
    }
    #pragma endscop
}
