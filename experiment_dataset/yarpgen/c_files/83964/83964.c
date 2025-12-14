/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_18 += var_4;

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = ((((((max(var_6, (arr_1 [i_0] [i_1 - 1])))) ? (((arr_6 [i_1 + 2]) ? 1117 : -21132)) : -1137458244)) | 2102413439));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_19 = arr_6 [i_1];
                        var_20 = (max(24971, (min(((max((arr_8 [i_0]), (arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_1])))), (max(9007199254740991, var_15))))));
                        var_21 += 190;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_22 = (arr_11 [i_0] [i_0 - 1] [i_0]);
                            var_23 = arr_9 [i_0] [i_0] [i_0] [i_6];
                            var_24 -= (min((((((min((arr_3 [i_0] [i_0]), 1357227002))) ? var_9 : var_4))), (arr_2 [i_4] [i_6 + 2])));
                        }
                    }
                }
            }
        }
        var_25 = (max(0, 2541737963));
    }
    var_26 = (((((min(1, -1582965050))) ? var_12 : 1137458247)));
    #pragma endscop
}
