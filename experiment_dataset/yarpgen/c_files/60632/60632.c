/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [12] [i_2] [i_0] = max(((max(177, 33881))), ((79 ? (max((arr_2 [i_0] [i_1] [i_2]), (arr_5 [i_0]))) : (!var_11))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_13 = 41736;
                        arr_10 [i_1 - 2] [1] [i_0] [i_3] = ((var_5 ^ ((((min(79, var_0))) >> (var_8 - 42984)))));
                        var_14 = var_5;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                {
                    var_15 = (((((((3600 ? var_11 : 1374918131))) ? (((-25429 && (arr_12 [1])))) : (!-25429))) - (((!((max((arr_15 [i_4] [i_5] [i_5]), (arr_0 [5])))))))));
                    var_16 = (min(var_16, (((max(var_3, (arr_15 [8] [i_5] [i_4 - 2])))))));
                    arr_17 [i_4] = ((41736 ? 41736 : ((162 % (arr_4 [i_4 - 1] [i_4 - 3] [i_4])))));
                }
            }
        }
    }
    #pragma endscop
}
