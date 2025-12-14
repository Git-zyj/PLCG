/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_13 [i_0] [i_3] [i_0] [13] [13] = -var_13;
                            arr_14 [i_0] = (-(arr_3 [i_0]));
                            arr_15 [5] [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_16 [i_0] [6] [i_0] [i_3] [0] = ((-1866959720 ? 101 : 25382));
                        }
                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_1] = -1866959720;
                            arr_21 [i_0] [9] = (arr_6 [9] [0] [i_0] [9]);
                            arr_22 [i_0] [13] [0] [5] [i_0] [5] [i_5] = ((~(~var_2)));
                            arr_23 [2] [9] [i_2] [i_0] [i_1] = (((!(arr_5 [i_0] [i_2] [i_3] [i_5 - 1]))));
                        }
                        arr_24 [i_1] [i_1] |= 65535;

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_16 = ((var_4 ? (arr_26 [i_6] [12] [i_0] [i_6] [3]) : ((var_7 ? -1866959720 : 144))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [13] = ((((((arr_0 [i_0]) || (arr_5 [i_0] [i_0] [i_1] [i_3])))) > (arr_4 [i_0])));
                        }
                    }

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_32 [i_0] = var_9;
                        arr_33 [i_0] = ((!((max(var_11, var_2)))));
                        arr_34 [i_0] = 215;
                    }
                    var_17 = ((((!((((arr_25 [i_0] [10] [i_0] [i_1] [i_2] [i_2] [i_0]) & (arr_5 [i_0] [6] [i_1] [i_2])))))) ? (~8) : (((arr_9 [i_0] [i_2] [i_1] [i_0]) ? var_3 : (~var_15)))));
                    arr_35 [i_1] [i_0] = ((((((arr_1 [i_0] [i_0]) ? 25365 : (arr_10 [i_0] [i_0])))) ? (((-(arr_28 [i_0] [i_0] [i_1] [i_0] [1])))) : ((var_4 ? (arr_10 [i_0] [i_0]) : var_7))));
                }
            }
        }
    }
    var_18 += (max(22914, 40171));
    var_19 = (max((~var_3), (!var_10)));
    #pragma endscop
}
