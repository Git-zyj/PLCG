/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [12] [i_2] [i_1] [i_2] = (((~73) != (arr_3 [16] [16])));
                    var_15 = ((~((135 ? 65535 : 61646))));
                    var_16 = min(1, 230875986104769836);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_17 = ((((((arr_8 [i_3]) ? (arr_0 [i_3] [i_4]) : (arr_0 [i_3] [i_3])))) ? -121 : (arr_8 [i_4])));
                var_18 -= 0;

                /* vectorizable */
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_23 [i_5 - 2] [i_3] [i_3] [18] [i_3] = ((!(((-72 ? 1 : (arr_11 [18] [i_4]))))));
                                var_19 += var_6;
                                var_20 -= (27 ? (arr_6 [i_5 - 1] [i_7 - 1]) : (arr_6 [i_5 - 1] [i_7 - 2]));
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (((arr_14 [i_3] [i_6] [i_3] [i_3]) ? 1024150292 : (((arr_0 [i_5 + 1] [i_6]) ? var_2 : 117))));
                            }
                        }
                    }
                    var_21 = (max(var_21, (445922946 + 1226388533)));
                    var_22 = (8885739657262043929 / 5158269340593423388);
                    arr_25 [i_3] [i_4] [i_5] = ((~var_1) % (arr_8 [i_5 + 2]));
                }
            }
        }
    }
    var_23 = ((var_5 + (((!(var_0 << var_2))))));
    #pragma endscop
}
