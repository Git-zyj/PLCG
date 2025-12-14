/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_8;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = (var_5 && var_5);
        arr_2 [i_0] = (((!var_8) >= (!0)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_12 = (max(var_12, (!var_9)));
        arr_5 [i_1] [i_1 + 1] = -var_4;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_13 = 0;

        for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    {
                        var_14 = var_9;
                        arr_16 [i_2] [i_2] [1] [8] [i_2] = 1348986783;
                    }
                }
            }
            var_15 = (min(var_15, 4467570830351532032));
            arr_17 [i_2] = ((var_6 ^ (((!(!var_7))))));

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_20 [i_3] |= ((~(4294967294 >= -702540048)));
                var_16 = 4294967294;
                arr_21 [i_2] = var_0;
                var_17 = var_2;
                arr_22 [i_2] [i_3 - 1] [i_2] = (24 * 24);
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                arr_25 [i_2] [i_2] [2] = var_1;
                arr_26 [i_3] [i_3] |= ((var_8 ^ var_7) / -8);
                var_18 = (min(var_18, var_5));
            }
            for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
            {
                arr_30 [i_3] [i_3] [i_3] [i_3] |= (22 / var_9);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_35 [i_2] [i_2] [i_8] [i_9] [i_10] = var_5;
                            arr_36 [i_2] [i_2] [i_8] [i_10] [i_9] [i_10] [i_10] &= 1;
                            arr_37 [i_2] [i_2] [i_8] = var_2;
                        }
                    }
                }
                arr_38 [0] [i_3] |= var_4;
                arr_39 [i_3] |= 180;
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
            {
                arr_42 [8] [i_3] [i_2] = (~var_5);
                arr_43 [i_2] [i_2] [i_11] = (1 | 32767);
            }
        }
        for (int i_12 = 2; i_12 < 17;i_12 += 1) /* same iter space */
        {
            arr_46 [i_2] [i_2] = -31;
            arr_47 [i_2] = (2476 % 1);
            arr_48 [i_2] [15] [i_2] = var_8;
            arr_49 [i_12] [i_12] [i_12] |= 65506;
        }
        arr_50 [16] |= ((var_9 | var_4) != var_3);
        var_19 = (63037 + var_6);
    }
    var_20 = ((~(1 * 56)));
    var_21 &= (!var_2);
    #pragma endscop
}
