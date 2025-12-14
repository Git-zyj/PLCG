/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = 21;
                    var_17 = (((!(arr_2 [i_0]))) ? var_3 : ((var_10 ^ (arr_2 [i_1]))));
                    arr_7 [i_2] [i_2] [i_0] = ((((max(-21, var_9))) ? var_5 : 1));
                }
            }
        }
    }
    var_18 = (min(var_18, (((-60 & (((!(!var_8)))))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_19 = -21;
                arr_13 [i_4] = (1103712034 ? 1474095121 : (((var_10 ? 0 : -693741951))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        arr_16 [9] = -21;
        arr_17 [i_5 - 2] = 536870912;
        arr_18 [i_5 - 2] [i_5 - 1] = (~195);
        var_20 = (arr_15 [i_5 + 1]);
    }
    #pragma endscop
}
