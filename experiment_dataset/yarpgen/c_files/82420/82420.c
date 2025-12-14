/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_15 = (max(var_15, ((max(141, 4415220989997761740)))));
                        arr_11 [i_1] [i_1] = (!-689670629);
                        arr_12 [i_1] [i_1] [9] = (216 != -689670622);
                        arr_13 [i_0 + 2] [i_1] [i_2] [i_2] [i_3] [i_1] = (arr_10 [i_0 + 3] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_16 = (91 & 141);
                        arr_18 [i_1] [i_1 + 2] [i_1 + 2] [i_4] = (~0);
                    }
                    var_17 = (((((((var_3 ? var_11 : var_6)) & ((((!(arr_5 [4])))))))) ? (max(1, 17592186044415)) : (~var_8)));
                }
            }
        }
    }
    var_18 = (!var_14);
    #pragma endscop
}
