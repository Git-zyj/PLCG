/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(((((-5961032716192251222 ? 5961032716192251222 : var_5)) / ((116 ? -117 : -5961032716192251214)))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_16 ^= (min((797617664 & var_11), (((((arr_0 [1]) ? var_1 : 193))))));
        arr_2 [i_0] [i_0 - 1] = ((max((var_9 + var_14), 3)));
        arr_3 [i_0] [i_0] = (((var_9 ^ var_1) ? (~193) : 797617682));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 *= ((max(-8089, (max(-1, 8529420744505456874)))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_9 [i_2] = -7104950634447510706;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        var_18 = var_8;
                        arr_14 [i_1] [i_2] [i_3] [i_4] = ((((((arr_11 [i_1] [i_4] [i_4 - 2] [16]) ? (arr_11 [i_3] [i_4] [i_4 + 1] [9]) : 3726819020))) || ((max(8529420744505456897, (arr_11 [i_4] [i_4] [i_4 - 2] [i_4]))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_4] = -78;
                            arr_19 [i_5] [i_2] [i_2] [i_2] [i_1] = ((((var_11 >= (arr_10 [i_3] [i_2] [i_4 - 1]))) ? (arr_15 [i_2] [i_2] [i_4 + 2] [i_5] [i_5]) : ((((var_8 != (arr_0 [i_4])))))));
                            arr_20 [i_5] [i_2] [1] [1] [i_5] = var_12;
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_24 [i_2] = var_1;
                            var_19 = (min(1, var_4));
                            arr_25 [i_2] = ((((arr_11 [i_1] [i_4 + 3] [i_3] [i_3]) ? ((229 ? -1 : -8529420744505456874)) : ((min(var_12, 2978382051))))) + ((max((arr_7 [i_2] [i_2]), var_6))));
                        }
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            var_20 ^= (arr_28 [i_2] [i_3] [i_3] [11] [i_3] [i_7 + 1]);
                            var_21 = ((0 * ((max(var_1, (arr_8 [i_2] [i_7]))))));
                            var_22 = ((((((-5961032716192251248 ? 27773 : -22587974)))) / ((((max(-797617665, var_5))) ? (~-107) : (arr_0 [i_7 - 3])))));
                            arr_29 [i_7] [i_4 - 2] [i_2] [i_2] [i_1] = ((3762358410 | (((-14197 & (var_9 / var_14))))));
                            var_23 = -1;
                        }
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_24 = 15;
                            arr_34 [i_2] [i_4] [i_3] [i_2] [i_2] = (max(-5961032716192251256, (max(1, -1412994130540049680))));
                            arr_35 [16] [i_2] [i_2] [i_2] = (min(var_14, (~-30393)));
                        }
                    }
                }
            }
        }
    }
    var_25 = min(5961032716192251246, var_1);
    #pragma endscop
}
