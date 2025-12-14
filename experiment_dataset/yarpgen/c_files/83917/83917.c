/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = var_5;
        var_15 = (min(var_15, var_2));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_8 [i_0] [i_1] [i_2] = var_6;
                arr_9 [i_0] [i_1] [i_0] = var_1;

                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_16 ^= var_1;
                        arr_16 [i_0] [i_0] [i_0] = var_5;
                        var_17 = var_13;
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_18 = var_7;
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = var_3;
                        arr_21 [i_3] [i_1] [i_2] = -var_9;
                        var_19 *= (!var_7);
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] = 1883371450;
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        var_20 *= var_12;
                        var_21 = var_1;
                    }
                    arr_25 [i_0] [i_0] [i_1] [i_2] [i_3] = var_3;
                    var_22 = var_6;
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_23 = 4095;
                        arr_30 [i_7] [i_1] [i_2] [i_7] [i_0] [i_0] [i_7] = var_5;
                    }
                    for (int i_9 = 3; i_9 < 23;i_9 += 1)
                    {
                        arr_34 [i_0] [i_0] [i_1] [i_0] [i_9] [i_0] [i_1] = var_3;
                        var_24 = (min(var_24, var_0));
                        arr_35 [i_0] [i_1] [i_2] [i_9 - 3] = (~var_10);
                    }

                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_25 *= -var_6;
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = var_11;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_26 = (max(var_26, (~var_3)));
                        var_27 = var_3;
                        var_28 = var_3;
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_44 [i_0] [i_1] [i_0] [i_7] [i_1] = (!15);
                        arr_45 [i_12] = var_13;
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        arr_48 [i_13] [i_1] [i_7] [i_1] [i_1] [i_1] [i_0] = 9223372036854775807;
                        var_29 = var_6;
                        var_30 += var_11;
                    }

                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        var_31 = ((~(~var_6)));
                        var_32 = var_10;
                        var_33 = var_5;
                        var_34 = (~var_3);
                        arr_53 [i_0] [i_1] [i_2] [i_7] [i_14] = var_2;
                    }
                    var_35 ^= var_1;
                }
            }
            arr_54 [i_0] [i_1] [i_1] = (~var_10);
        }
        var_36 = ((min((~var_5), var_10)));
    }
    var_37 = ((-(min(var_1, var_13))));
    var_38 = var_0;
    #pragma endscop
}
