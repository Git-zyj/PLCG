/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(var_3, var_0))) ? 63449 : (min(var_12, var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 |= ((((min((((var_11 ? (arr_4 [i_0] [i_0] [i_1] [i_2]) : (arr_5 [i_0] [7] [7])))), (min(var_7, (arr_1 [15])))))) && ((max((arr_0 [i_0] [i_1]), (arr_0 [i_2] [i_1]))))));
                    var_16 = (arr_6 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
