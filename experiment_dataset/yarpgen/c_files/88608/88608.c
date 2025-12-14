/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2 + 1] = (((arr_4 [i_0 - 1]) == (arr_7 [i_2 - 3] [i_2] [i_2] [i_0 - 1])));
                    arr_9 [i_2] [i_1] [i_2] = (((arr_4 [i_0 - 2]) / var_0));
                    var_10 = max((((arr_3 [i_0 - 2]) ? (arr_5 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_0 + 4]) : (arr_5 [i_2 - 3] [i_2 - 1] [i_2 + 1] [i_0 - 3]))), (((arr_3 [i_0 + 1]) + (2044392891 + var_4))));
                }
            }
        }
    }
    var_11 = var_9;
    #pragma endscop
}
