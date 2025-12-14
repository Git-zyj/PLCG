/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((!((min((arr_1 [i_0]), (arr_2 [i_0]))))));
        arr_4 [i_0] &= ((~(((!(arr_2 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] &= (((((0 ? 30 : (-32767 - 1)))) ? (min(3176458756, (arr_0 [i_1 - 2]))) : var_12));
        arr_8 [i_1] = ((((-(arr_1 [i_1 - 1])))) ? ((max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 2])))) : 3176458756);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [6] [i_2] &= (((arr_16 [i_4] [i_3 + 1] [i_1 - 1]) ? ((max(var_11, (arr_16 [i_5 + 1] [i_2] [i_2])))) : (arr_16 [i_4] [i_4] [i_4])));
                                var_18 = (max(var_18, (arr_1 [i_3 + 2])));
                                arr_21 [i_1] [i_1] [i_1] [i_3] = (arr_9 [i_1] [i_2]);
                                var_19 = var_16;
                                var_20 = var_16;
                            }
                        }
                    }
                    arr_22 [i_3] [i_2] [i_2] [i_3] = -3785060387391899230;
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_21 *= ((-((-(arr_23 [i_6])))));
        var_22 = (min((arr_23 [i_6]), (arr_25 [i_6])));
        var_23 = 0;
    }
    for (int i_7 = 3; i_7 < 7;i_7 += 1)
    {
        arr_29 [i_7] = (arr_12 [i_7 - 2] [i_7] [i_7] [i_7]);
        arr_30 [i_7] = (!var_15);
        var_24 = (arr_10 [i_7 - 3] [i_7] [i_7]);
        var_25 = (((arr_14 [i_7 + 2] [i_7 - 1] [i_7 - 2] [i_7 + 1]) ? var_0 : 0));
        var_26 = (max(var_26, (min((arr_5 [i_7 + 2] [i_7 - 3]), (((var_4 ? (arr_24 [i_7 - 1] [i_7 - 3]) : (arr_1 [i_7 + 3]))))))));
    }
    var_27 = (max(var_27, -1));
    var_28 = (max(var_28, -7));
    var_29 = (min(var_10, var_10));
    #pragma endscop
}
