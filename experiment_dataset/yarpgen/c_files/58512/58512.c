/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_8 > var_3);
    var_14 = ((var_3 >= ((((~var_4) | var_10)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_15 *= (((arr_4 [i_0] [i_1]) ? 26698 : var_8));
            var_16 = (-18 & -0);
            var_17 = ((!(((-((-(arr_5 [i_1]))))))));
            var_18 = (arr_5 [i_0]);
        }
        var_19 = (min(var_19, (((1035805029 ? 1 : -18)))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_14 [i_3] [i_3] [i_4] &= 42512;
                    var_20 = (arr_11 [i_2]);

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        var_21 = ((17 < (arr_13 [i_2] [i_3] [i_5 + 4])));
                        arr_17 [i_5] = (((arr_13 [i_5 + 2] [i_5 + 3] [i_5]) - (arr_13 [i_5 + 1] [i_5 + 1] [i_5])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_22 = var_4;
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_6] = var_11;
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {

                        for (int i_8 = 4; i_8 < 9;i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_3] [i_4] [i_7] = ((var_5 / (((-(arr_22 [i_8] [i_8 - 3] [i_8 + 1] [i_8 - 1] [i_8]))))));
                            var_23 |= (((min((arr_7 [i_2]), (arr_15 [i_2] [i_4] [i_7] [i_8])))));
                        }
                        for (int i_9 = 4; i_9 < 9;i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_2] [i_9] [i_4] [i_7] [i_9] [i_2] [i_7] = (((1 ? -9024008905107187158 : (max(2673609571404330152, 4294967295)))));
                            arr_31 [i_2] [i_2] [i_2] [i_2] = ((((16 != (!var_6)))));
                            var_24 = ((!((min(((min(65535, 1))), var_3)))));
                            var_25 = var_0;
                        }
                        var_26 = (max(var_26, ((((max(-18, var_3)) | var_11)))));
                        arr_32 [i_2] [i_2] [i_3] [i_4] [i_7] = -var_5;
                    }
                }
            }
        }
    }
    #pragma endscop
}
