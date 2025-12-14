/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] &= ((((min((min(var_0, -109)), (arr_3 [i_0 - 2] [i_1] [i_0])))) || ((((arr_0 [i_0 - 1]) ? (arr_1 [i_0] [i_0 - 2]) : 2413819193)))));
                var_13 = (max(var_13, (((4826 & (arr_3 [i_0] [i_0] [10]))))));
            }
        }
    }
    var_14 = var_3;
    #pragma endscop
}
