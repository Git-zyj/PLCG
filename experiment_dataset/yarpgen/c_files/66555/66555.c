/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 = arr_0 [i_0] [i_0];
                    var_11 = (max(var_11, (arr_0 [4] [4])));
                    var_12 = (max(var_12, (arr_8 [i_0] [i_1])));
                }
            }
        }
    }
    var_13 = var_3;
    #pragma endscop
}
