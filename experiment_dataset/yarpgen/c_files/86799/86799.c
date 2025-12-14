/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_3, ((-var_13 & ((max(var_9, 0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (max(var_20, 204));
                var_21 = var_13;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = 21;
                    arr_8 [i_0] = (min((((-(arr_1 [i_0])))), (max(var_4, 251))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = (((((((var_11 ? (arr_0 [i_0]) : 1))) ? var_15 : var_2))) ? (max((max(var_18, var_12)), var_13)) : var_15);
                        var_22 = max(((((max(var_15, var_7))) ? ((max(var_17, 0))) : (arr_6 [i_1]))), 255);
                        arr_14 [i_0] [i_1] [i_2] [i_0] = (max((max(((var_17 ? 0 : 210)), ((max(var_14, (arr_11 [i_0] [i_1] [i_2] [i_3])))))), (arr_3 [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_23 = (arr_5 [i_1] [i_2] [i_4]);
                        var_24 = (arr_1 [i_2]);
                        var_25 = (~0);
                        arr_17 [i_0] [i_0] [i_2] [i_4] = (arr_1 [i_4]);
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_2] [i_2] [i_1] [i_0] = (max(((max(22, (arr_19 [i_0] [i_1] [i_2] [i_5])))), (min(-251, (917878384310444769 / -116)))));
                        arr_21 [i_5] [i_2] [i_1] [i_1] [i_2] [i_0] &= var_10;
                        arr_22 [i_0] [i_1] = (arr_4 [i_0] [i_1]);
                    }
                    var_26 = (max(((-(arr_10 [i_0] [i_2]))), var_14));
                    arr_23 [i_0] [i_2] = (max((max((!var_16), -24)), (min((arr_2 [i_0]), 95))));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_27 = (max(var_27, var_1));
                    arr_26 [i_0] [i_0] [i_6] = 1666563470;
                }
                var_28 = (max(var_10, var_7));
            }
        }
    }
    var_29 = (min(var_29, var_2));
    #pragma endscop
}
