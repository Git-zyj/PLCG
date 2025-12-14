/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_16 = ((((min(18, 1037615321))) ? (max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 3]))) : (arr_0 [i_0 - 3])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((-(max(var_0, (arr_4 [i_0 - 3]))))))));
                    arr_7 [i_2] [i_1] [i_0] [i_0] = (((arr_6 [i_2 + 2] [i_2 - 1] [i_0 - 3]) ? ((-(arr_2 [i_2 + 1] [i_2 + 1] [i_0 - 3]))) : var_10));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_18 = (min(var_18, 5391820022788376501));
                        var_19 = 5782931977096638360;
                    }
                }
            }
        }
        arr_10 [i_0] = var_5;
    }
    var_20 -= var_12;
    var_21 = (!var_11);
    #pragma endscop
}
