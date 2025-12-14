/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [12] = var_14;
        var_20 += var_12;
        var_21 += var_16;
        arr_3 [i_0] = var_16;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((min(var_3, var_7))) ? var_2 : (~var_6)));
        arr_7 [i_1] = var_6;
        var_22 = var_19;
        arr_8 [i_1] |= ((((min(var_9, (min(var_12, var_8))))) ? (!4) : (!30739)));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_12 [i_2] = ((min(var_7, var_5)));
        arr_13 [i_2] [1] = ((!((max(((var_12 ? var_2 : var_2)), var_12)))));
        arr_14 [15] = (!var_1);
    }
    var_23 |= (min(var_12, var_4));

    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_25 [i_3] [i_3] [12] [i_6 + 2] [4] = (var_17 ? ((min(-2904, (-9223372036854775807 - 1)))) : (((var_2 ? -var_19 : var_11))));
                            arr_26 [i_4] [i_5] [i_6 - 1] [i_7] = ((-2147483647 ? ((var_14 ? var_5 : var_3)) : (((var_5 ? var_15 : var_3)))));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_29 [i_3] [i_4] [i_5] [2] [i_6] [0] &= ((var_7 ? var_13 : var_6));
                            var_24 |= (min(var_5, var_12));
                        }
                        var_25 = ((!(~var_19)));
                    }
                }
            }
        }
        var_26 = ((var_7 ? var_8 : var_17));
        var_27 = ((!(((var_8 ? var_1 : var_8)))));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_40 [14] [3] [i_12] = (min((((var_10 ? var_2 : var_14))), var_10));
                        var_28 = (min(var_1, ((min(var_3, var_8)))));
                        var_29 += var_12;
                        var_30 = (min(var_30, ((min(var_7, var_19)))));
                    }
                }
            }
        }
        arr_41 [i_9] = -var_4;
    }
    #pragma endscop
}
