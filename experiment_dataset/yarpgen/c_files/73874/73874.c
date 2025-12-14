/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((((min((min(var_16, (arr_3 [9] [i_1] [i_0]))), ((max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_2]))))))) ? (arr_1 [i_0] [i_1]) : ((min((arr_5 [i_2 - 1] [i_2 + 1] [i_0 - 3] [i_0 - 3]), (arr_0 [i_0 - 2] [i_2 - 1])))))))));
                    var_19 = (min((((((min(var_13, var_13)))) / (arr_7 [i_0 + 1] [8] [9] [i_2 + 1]))), (arr_0 [i_0 - 2] [i_0])));
                }
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
