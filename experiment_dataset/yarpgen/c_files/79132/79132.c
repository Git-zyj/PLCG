/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (min((~var_13), (15762 != 0)));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = ((772986181 || (arr_5 [i_0 - 4])));
                        var_18 = (min(var_18, (arr_7 [i_2])));
                    }

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_14 [i_4] [i_2] [i_0] = (var_5 >= var_1);

                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_5] [i_5] [i_5] [i_5] = (((((-var_12 / (arr_0 [i_5 + 1])))) ? var_2 : (((var_5 * 0) ? -810009915466047725 : (((1 * (arr_12 [i_1] [i_1] [i_4] [i_5]))))))));
                            var_19 = 15762;
                        }
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = -15763;
                    }
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        var_20 = (((0 & -1647) ? ((((arr_13 [i_0] [i_0 - 4] [i_6 - 1] [i_0]) ? 161 : var_9))) : (((~95) & ((var_11 & (arr_9 [i_0] [i_1] [i_6] [i_6 - 1] [i_1])))))));
                        arr_22 [i_0] [i_0] [i_6] [i_0] [i_2] = ((((-1632 ? (arr_3 [i_0 - 4]) : var_11)) | (~0)));
                        var_21 = 13572197172277202659;
                    }
                }
            }
        }
        var_22 = ((((!((min((arr_7 [i_0]), 12454))))) ? -1618 : (~var_15)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                {
                    arr_29 [i_0] [i_0] [i_8] = ((~(((~31181) ? ((25 ? 849200946 : 13572197172277202664)) : ((((arr_12 [i_0 - 3] [i_0 - 3] [i_8 + 2] [i_8 + 2]) ? 36 : var_5)))))));
                    var_23 = (min(var_23, 4874546901432348956));
                    var_24 = (max(var_24, ((((arr_13 [i_0 - 4] [i_8 + 2] [i_8 + 3] [i_8 + 3]) ? (~-5039666180992341379) : var_12)))));
                    var_25 = (min(var_25, ((((((18301 * (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_8 + 3])))) ? 111 : var_8)))));
                }
            }
        }
        var_26 = ((-(arr_27 [i_0 - 1] [i_0 - 2] [i_0 - 1])));
    }
    var_27 = var_3;
    #pragma endscop
}
