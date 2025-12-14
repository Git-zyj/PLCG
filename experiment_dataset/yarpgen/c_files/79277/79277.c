/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_10 = (max(var_10, (!-2)));
            var_11 = -2;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_7 [4] [i_2] = ((3584 << (((!(61942 >> 31))))));
            arr_8 [i_0] = (max((max(var_3, ((-(arr_2 [i_2] [i_0] [i_0]))))), ((~((((arr_3 [i_0] [16]) == -5305451920079792294)))))));
        }
        arr_9 [i_0] = (~var_6);
        var_12 += (min(((max(((24178 ? 1287215587 : 26)), (max(510471742, (arr_2 [5] [i_0] [2])))))), var_6));
        var_13 *= (arr_0 [i_0]);
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_14 |= (arr_6 [i_3] [3]);
        var_15 = var_4;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_15 [i_4] = var_2;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_16 = (--152693702);
                                var_17 = (((((-(arr_26 [i_7] [i_5] [i_6 + 1] [i_7] [i_8] [i_7 - 1])))) ? (24 % 61925) : ((1 << (var_0 + 7131)))));
                                arr_28 [i_4] [i_4] [i_4] [i_4] = (0 ? ((-(arr_21 [i_4] [15] [5] [18]))) : (!7));
                            }
                        }
                    }
                    var_18 = (1 > -1);
                }
            }
        }
    }
    var_19 |= (-(((~30857) ? (max(0, -13)) : var_6)));
    #pragma endscop
}
