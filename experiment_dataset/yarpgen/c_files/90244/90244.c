/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_20 = (max((((12494 - (((1 ? -12516 : 12511)))))), (arr_7 [i_0] [i_0] [i_0] [i_0])));
                        var_21 |= var_15;
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_22 = ((-(arr_7 [1] [i_4 - 1] [i_0 - 2] [i_0 - 2])));
                        var_23 = (max((arr_0 [i_0 - 1] [i_0 + 2]), (max((arr_0 [i_0 - 1] [i_0 + 2]), (arr_0 [i_0 - 1] [i_0 + 2])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 13;i_5 += 1)
                    {
                        arr_15 [6] [6] [6] [6] = (((arr_3 [i_0 + 2]) * ((((!(arr_1 [0])))))));
                        var_24 = (min(var_24, (var_14 & var_3)));
                    }
                    var_25 = 12494;
                    var_26 -= (arr_13 [i_0 - 2] [i_1] [i_0 - 2] [i_2]);
                }
            }
        }
    }
    var_27 = var_8;
    var_28 |= ((-(((~var_7) - var_8))));

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_19 [i_6] [i_6] = (var_0 + var_12);
        var_29 *= var_6;
    }
    #pragma endscop
}
