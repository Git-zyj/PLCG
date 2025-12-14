/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 *= 5054;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = var_12;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = var_3;
                    arr_7 [i_0] [i_0] [i_1] [i_2 + 3] = (max((((((((arr_4 [i_0] [i_1] [i_2]) ? (arr_3 [i_0] [i_1] [i_2 - 2]) : 18014398509449216))) ? (arr_5 [i_0] [i_0] [i_0]) : ((max(38014, (arr_1 [i_2] [i_1]))))))), var_9));
                }
            }
        }
    }
    var_18 = 55220;
    var_19 = (max(var_19, var_6));
    #pragma endscop
}
