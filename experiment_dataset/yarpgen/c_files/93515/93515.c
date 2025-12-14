/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = 47;
        var_16 = (min(var_16, ((((arr_0 [i_0] [i_0]) ^ (max(127, (arr_2 [i_0]))))))));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_8;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_17 = var_5;
                    var_18 = (((!var_4) ? (((!(arr_10 [i_1 + 3] [i_2 + 1])))) : (arr_8 [i_1 + 3] [i_2 - 2] [5])));
                }
            }
        }
    }
    #pragma endscop
}
