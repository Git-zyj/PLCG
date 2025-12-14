/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = ((191 ? ((max((arr_3 [i_0]), (arr_2 [i_0] [i_1])))) : var_8));
                var_12 = var_6;
            }
        }
    }
    var_13 = var_4;
    #pragma endscop
}
