/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_4 - ((-1998669865 - (var_0 + var_3)))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (((((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2]))))) / 3140727191));
        arr_5 [i_0] [i_0] = var_7;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_20 = ((!(((var_18 ? var_2 : var_18)))));
        var_21 -= (((-var_6 + 2147483647) << ((((65535 >> (1154240104 - 1154240094))) - 63))));
        arr_9 [i_1] [i_1] = 3795;
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_22 = (min(var_22, 0));
                arr_15 [1] [i_2] [i_3] = (1998669864 | -7);

                /* vectorizable */
                for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_23 = ((!(!var_6)));
                        arr_21 [i_2] [i_3] [i_2] [i_5] = (((~var_11) - var_7));
                        var_24 = (max(var_24, (((501600400 ? 1597434733 : 18446744073709551615)))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_25 = var_11;

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_27 [i_2] = -var_18;
                            var_26 = (arr_24 [11] [11] [i_4] [i_7]);
                        }
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            var_27 = (max(var_27, var_9));
                            var_28 = ((var_14 ? var_15 : var_12));
                            var_29 = (max(var_29, (arr_20 [i_8 + 2] [i_8] [i_2] [i_3] [i_8] [i_6])));
                        }
                        var_30 = 3;
                    }
                    var_31 = (max(var_31, (((-12341 ? 3018073852 : 3774)))));
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                {
                    var_32 -= ((((max(0, var_13))) > (!0)));
                    arr_34 [i_2] [i_3] [i_9] = ((((!var_8) == 1154240104)));
                    arr_35 [i_2] [i_2] [i_2] = (((5326083625626393082 ? 0 : 6)));
                }
            }
        }
    }
    #pragma endscop
}
