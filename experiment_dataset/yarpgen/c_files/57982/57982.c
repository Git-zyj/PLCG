/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_1 + 1] = var_1;
                                var_10 -= ((((var_3 ? (max((arr_2 [i_0 + 1] [i_1 + 1]), (arr_4 [14] [i_1 - 2]))) : (arr_4 [i_2 - 3] [i_2 - 3])))) ? ((((max(131071, var_2))) ? var_7 : -919389080)) : ((var_7 ? var_4 : (arr_1 [i_2 - 1] [i_2 - 4]))));
                            }
                        }
                    }
                    var_11 = -var_7;
                    arr_14 [i_0] [i_0] [i_0] &= ((min(((var_5 << (var_6 + 4632727596860516605)), 1120831896139523373))));
                    var_12 = (~-919389080);
                    arr_15 [10] [3] [i_1 + 1] [i_0 + 1] = (min(-919389080, 919389060));
                }
            }
        }
    }
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_14 = ((~((-(919389055 && -1813401099)))));
                    arr_25 [i_5] [i_6] [i_6] = ((((((arr_24 [i_5 - 1] [i_5 + 2]) ? (~var_8) : ((-919389080 ? 4503599627370495 : var_8))))) ? (((max((arr_20 [i_5 - 1]), -737272072790396473)) / -var_3)) : ((~(arr_21 [i_7] [i_6] [i_5])))));
                }
            }
        }
    }
    #pragma endscop
}
