/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((~((28 ? (-2147483647 - 1) : var_6))));
                    arr_11 [i_0] &= (~17998);
                }
            }
        }
    }
    var_11 = -24524;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_12 = (min(var_12, (((4400347290542132084 ? -712 : 7043106284813241732)))));
                            arr_21 [i_6] [i_4] [i_5] [i_4] [i_4] [i_3] = (max((max((min(580956481, (arr_4 [i_3] [i_4] [i_3]))), (var_3 | -14165))), 53867));
                            arr_22 [i_5] [i_5] [i_5] [i_5] [i_4] [i_5] = (max((max(((432345564227567616 & (arr_12 [i_3]))), (arr_1 [i_4] [i_6]))), (((((max((arr_20 [i_3]), 2612))) ? (4404 && 1536) : (~var_6))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_27 [i_3] [i_4] [i_4] [i_4] [i_4] = (((max(29503, var_4)) - (((arr_6 [i_4 + 1] [i_7]) + (arr_6 [i_4 + 1] [i_7])))));
                            var_13 = (min(var_13, ((min(((((arr_1 [i_4 + 2] [i_4 + 1]) > (arr_1 [i_4 + 3] [i_4 - 1])))), ((-((min(229, var_1))))))))));
                            arr_28 [i_4] = (max(62887, -1530668608));
                            var_14 ^= (-7 | 1320881014743920916);
                        }
                    }
                }
                arr_29 [i_4] = ((((((255 | 192) | (((var_5 == (arr_4 [i_3] [i_3] [i_3]))))))) ? ((min((arr_24 [i_3] [i_3]), (((17321898404005975608 > (arr_3 [i_3] [i_3] [i_4]))))))) : 1073741823));
            }
        }
    }
    #pragma endscop
}
