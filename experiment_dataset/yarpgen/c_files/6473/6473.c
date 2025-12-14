/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = (min(var_11, (((~((78 ? -1 : 0)))))));
        var_12 *= (!(((var_2 ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 - 1])))));
        var_13 = (1 != (arr_0 [5]));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((-(max(53, var_9))));

        for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_2] = (((((arr_4 [i_2 - 2]) % var_4)) == (min(var_4, var_2))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_21 [i_4] [i_4] [i_3] [i_3] [7] = (min((min(var_2, var_10)), ((((arr_16 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]) == (arr_16 [i_2] [i_2] [i_2 + 1] [i_2] [i_2]))))));
                            var_14 = (min(var_14, (arr_15 [i_1] [i_2] [8] [i_2])));
                            arr_22 [i_5] [4] [i_3] [i_3] [i_5] &= (max((arr_6 [i_2 - 1] [i_2]), (!-100)));
                            var_15 = (max((min(53, var_2)), 1));
                        }
                    }
                }
            }
        }
        for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
        {
            var_16 = (!var_3);
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 6;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_17 = var_10;
                        arr_33 [i_6] [i_6] = (!203);
                        arr_34 [i_1] [i_6] [i_6] [i_7] [i_6] = ((-(((arr_24 [i_1] [i_1] [i_1]) / var_5))));
                    }
                }
            }
            arr_35 [i_6] [i_1] [i_6] = ((((min((1 & 1), (max(2199023255551, var_7))))) && (((((min(41, var_5))) & -25482)))));
        }
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_38 [i_9] = var_8;
        arr_39 [i_9] = -487692583;
        arr_40 [11] = (arr_36 [i_9]);
        var_18 *= -1361022333;
    }
    var_19 -= 1;
    var_20 = max(-9153643547512702648, (((~(196608 & 14)))));
    #pragma endscop
}
