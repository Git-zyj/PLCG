/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_11 += 712052392253784959;
        arr_4 [i_0] [i_0] = (!var_2);
        arr_5 [i_0 - 2] = (((((((arr_2 [14]) ? (arr_1 [i_0]) : var_9)) < 712052392253784949)) ? (((!(((77 ? 7 : (arr_2 [i_0 - 2]))))))) : (((!((max(var_6, (arr_1 [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] = -179649028;
        var_12 = (min(var_12, ((((var_5 ^ (arr_6 [i_1] [i_1])))))));
        arr_9 [i_1] [i_1] = var_4;
        var_13 &= ((-((var_4 ? (arr_7 [i_1]) : var_4))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_14 = ((((min(-37, (arr_2 [i_2])))) ? 7 : (((arr_7 [i_2]) + (arr_2 [2])))));
        var_15 = ((!(((((36 ? 10 : 27636)) | (arr_0 [i_2] [i_2]))))));
    }
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        var_16 += ((((((arr_14 [i_3 - 2]) ? ((1 ? 0 : 1)) : var_0))) ? ((max(1701, var_1))) : ((((arr_13 [i_3]) == 21)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_26 [7] [i_4] [i_4] [i_6] [i_7] = ((-((3122491441 + (arr_16 [i_7 - 1] [i_3 + 3])))));
                                arr_27 [i_7] [i_6] [i_5] [i_6] [i_3] = (~1);
                                arr_28 [i_3 - 2] [i_4] [i_5] [i_6] [i_7] [i_6] = var_9;
                                var_17 &= ((((max((min((arr_19 [i_3] [i_4] [i_5] [i_6]), (arr_14 [i_3]))), var_9))) ? var_3 : (min(((max(var_8, var_1))), ((-(arr_24 [6] [i_4] [6] [i_6])))))));
                            }
                        }
                    }

                    for (int i_8 = 4; i_8 < 20;i_8 += 1)
                    {
                        var_18 = ((1 & (((!var_2) ? 1 : (arr_16 [i_3 - 2] [i_3])))));
                        arr_32 [i_4] [i_4] = ((!((((1 ? -1073873649 : 1))))));
                        arr_33 [i_3] [i_4] [i_4] = ((!(arr_13 [i_4])));
                        arr_34 [i_3] [1] [1] [i_8 + 1] = -8474;
                        var_19 -= (((arr_23 [i_8 - 4] [i_5] [i_5] [i_3] [i_3]) & -41));
                    }
                    var_20 = ((((max(1, ((7696907773341994101 ? var_10 : var_2))))) ? (max(((max((arr_25 [16] [10] [i_5]), (arr_16 [i_3 - 1] [i_5])))), -var_6)) : 24111));
                    arr_35 [i_3] [i_4] [i_5] [i_5] = (max((((-62 < 25) ? var_4 : (arr_13 [i_3 + 1]))), var_10));
                    var_21 *= ((!(-22806 < -32759)));
                }
            }
        }
        var_22 += (arr_19 [i_3] [i_3 + 2] [i_3] [i_3 - 2]);
    }
    var_23 = -37;
    var_24 = ((~(((((~1) + 2147483647)) >> ((((var_7 ? (-127 - 1) : -22807)) + 157))))));
    #pragma endscop
}
