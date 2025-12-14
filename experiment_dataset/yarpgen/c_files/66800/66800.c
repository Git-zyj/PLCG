/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = -var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = 143;
                var_12 = ((~((3197389193 ? (arr_2 [i_1]) : 65531))));
            }
        }
    }
    #pragma endscop
}
