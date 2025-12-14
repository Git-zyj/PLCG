/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (((((~(max((arr_1 [i_0]), 3629277218))))) ? (arr_1 [i_0]) : (!0)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_21 = (arr_9 [i_0] [6] [i_2] [i_3]);
                        var_22 = ((((min(-462421796, 1496962777))) ? (arr_8 [i_0] [i_2]) : ((((arr_10 [i_0] [i_1] [i_1 + 1] [i_2 - 4] [i_1]) ? (arr_10 [i_0] [i_1] [i_1 - 2] [i_2 - 1] [i_2]) : (arr_10 [i_0] [i_1] [i_1 + 1] [i_2 + 1] [i_2]))))));
                    }
                }
            }
        }
        arr_13 [i_0] = (arr_3 [i_0]);
        var_23 = (((((((arr_2 [i_0] [i_0]) ? var_16 : (arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (arr_8 [i_0] [i_0]) : ((((-254 >= (arr_12 [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_24 = (((-var_12 ? ((var_16 ? -7407195936305542674 : (arr_11 [i_4] [i_5] [i_5] [i_7]))) : ((((arr_2 [i_7] [17]) << (((arr_17 [5]) + 9281))))))));
                            arr_28 [i_4] [i_6] [i_6] [i_7] = ((((((arr_5 [i_4] [i_5] [4]) ? (((((arr_18 [i_5] [i_7]) > 6395714723981095575)))) : ((~(arr_2 [i_4] [i_6])))))) ? (((min(-6395714723981095576, (arr_20 [i_4] [i_6 + 1]))))) : (min((arr_19 [i_6 + 1] [i_6 + 1] [i_6 - 2]), 6395714723981095576))));
                            var_25 = ((-((((7052056710760757190 ? 33553408 : -33553409)) | (arr_25 [i_4] [i_5] [i_6] [i_7])))));
                        }
                    }
                }
                var_26 = ((((5111253065302605825 & ((((arr_25 [i_5] [0] [0] [i_4]) & 511))))) ^ (arr_22 [i_4] [i_4 + 3])));
                arr_29 [i_4] [i_5] [i_5] = (((arr_3 [i_4]) ? (((min((!15570), 0)))) : (((2268986047 || 2268986051) ? ((((65535 != (arr_27 [i_4] [i_4] [4]))))) : (arr_5 [i_4] [i_5 - 1] [i_4])))));
                var_27 = -1;
            }
        }
    }
    var_28 = var_11;
    #pragma endscop
}
