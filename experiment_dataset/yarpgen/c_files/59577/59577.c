/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(var_1 - var_9)));
    var_13 = ((-(min((min(var_3, var_0)), var_3))));
    var_14 = -var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [11] [i_2] = var_10;
                    arr_8 [i_0] [i_0] [i_0] = 336312264813605065;
                    arr_9 [i_0] [i_1] [i_2] = (min(((5066288601901671065 - (arr_2 [i_0] [i_2]))), ((min((arr_2 [i_0] [i_1]), var_4)))));
                    var_15 = var_11;
                }
            }
        }
    }
    #pragma endscop
}
