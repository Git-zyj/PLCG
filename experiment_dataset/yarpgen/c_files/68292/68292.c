/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_6);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_17;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (~var_7);
                    arr_9 [i_1] = (~-var_10);
                    arr_10 [i_1] [i_1 + 3] [i_1 + 3] = var_12;
                }
            }
        }
        arr_11 [i_0] = var_6;
        arr_12 [i_0] = var_17;
        var_20 = (max(var_20, -var_7));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_25 [i_3] [i_4 + 3] [i_6] = (!var_3);

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_28 [i_3] [i_3] [i_7] [i_5] [i_6] [i_3] = ((!(!var_12)));
                            var_21 = (min(var_21, (((!(!var_0))))));
                            var_22 = var_5;
                            arr_29 [i_7] [7] [i_7] [i_7] [i_3] [i_3] = var_6;
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_23 = (min(var_23, (!var_17)));
                            var_24 = (!var_17);
                        }
                        /* vectorizable */
                        for (int i_9 = 4; i_9 < 18;i_9 += 1)
                        {
                            var_25 &= ((!(!var_5)));
                            arr_36 [i_3] [i_4 - 1] [i_9] [12] [i_9] = var_2;
                            var_26 = (~51);
                            var_27 = (max(var_27, -var_15));
                            var_28 = -var_10;
                        }

                        for (int i_10 = 2; i_10 < 20;i_10 += 1)
                        {
                            arr_39 [i_10] = var_13;
                            var_29 = (min(var_29, -var_16));
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            var_30 = var_16;
                            arr_42 [8] [i_5] &= var_13;
                        }
                    }
                }
            }
        }
        var_31 = (max(var_31, var_7));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 2; i_13 < 19;i_13 += 1)
        {
            arr_47 [i_12] [8] [i_13] = var_8;
            var_32 = (~var_11);
            var_33 = (min(var_33, var_9));
        }
        var_34 = ((!(~var_9)));
        arr_48 [i_12] = var_16;
    }
    var_35 = -var_5;
    #pragma endscop
}
