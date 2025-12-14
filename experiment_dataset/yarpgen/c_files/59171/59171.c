/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_2] = (max((min(-5507260946848450196, 5507260946848450187)), ((min((arr_3 [i_0] [i_1]), (arr_6 [i_2] [i_1] [i_0] [i_2]))))));
                    var_16 += 12939483126861101456;
                    var_17 = (arr_7 [16] [i_1] [i_2] [i_2]);
                    arr_9 [i_2] = 2917;
                    arr_10 [i_0] |= (arr_6 [i_0] [i_0] [i_1] [i_0]);
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        arr_13 [i_3 - 1] = (arr_0 [i_3]);
        var_18 = (max(var_18, (max((max((arr_2 [i_3]), (max(-9176834201829341374, 5507260946848450162)))), (arr_11 [i_3 - 2] [i_3 - 3])))));
        arr_14 [i_3] = (min((arr_6 [i_3 - 3] [i_3 - 1] [i_3 - 3] [10]), (max((arr_1 [i_3 - 3] [i_3]), (arr_6 [i_3 - 1] [i_3 - 2] [i_3 - 2] [6])))));
        arr_15 [i_3] [12] = (min((arr_2 [i_3 - 1]), (((!(arr_2 [i_3 - 1]))))));
    }
    #pragma endscop
}
