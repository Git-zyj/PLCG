/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 -= var_17;

                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        arr_8 [i_3] [i_2] [i_1] [i_1] [i_3] = (~56117);
                        var_21 = ((((((arr_4 [i_3] [i_1] [i_2]) >> 0)) + (arr_6 [i_3] [i_3] [i_3] [i_3] [i_3 - 1]))));
                        arr_9 [i_0] [i_0] [i_3] = (max(-17523, (((!(arr_5 [i_0] [i_3 + 2]))))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_12 [i_0] [i_1] [6] [i_0] [i_2] [i_4] = ((!(((min(56120, 56117))))));
                        arr_13 [i_4] [i_2] [i_1] = ((-(arr_4 [i_0] [i_1] [i_2])));
                    }
                }
            }
        }
    }
    var_22 = ((!(!var_19)));
    #pragma endscop
}
