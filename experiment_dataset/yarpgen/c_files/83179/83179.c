/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = min((((min(var_8, (arr_2 [i_2] [i_1] [0]))))), (arr_1 [i_1]));
                    var_13 = var_8;
                }
            }
        }
    }
    var_14 = (min(var_14, ((((min(var_2, (max(var_0, var_5)))) > var_4)))));
    #pragma endscop
}
