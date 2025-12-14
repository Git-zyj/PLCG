/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_8);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (!101);
        var_15 *= (min(65535, ((-(~var_1)))));
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 = (min(894868251, ((-(max(var_6, var_8))))));
        arr_5 [i_1] = var_9;
        arr_6 [i_1] = ((!(arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = (((arr_8 [i_2] [i_2]) ? 86 : (!var_5)));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_17 = ((min(-45, var_2)));
                        var_18 = (max((arr_12 [i_3] [i_4 + 3] [i_4 + 2]), (arr_16 [i_3] [i_4 + 1] [i_4 + 1] [i_4 + 2])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 4; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 13;i_7 += 1)
        {
            {
                var_19 = var_12;
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                arr_33 [i_10] [i_10] [i_8] [i_8] = (arr_2 [i_7]);
                                arr_34 [i_6] [i_6] [i_6] [i_10] [i_6] = (arr_3 [i_6] [i_6 - 1]);
                                arr_35 [i_6] [i_10] [i_8] [i_8] [i_9] [12] [i_10] = arr_32 [i_10] [i_7] [i_8] [i_9] [i_8];
                                arr_36 [7] [7] [9] [7] [i_10] = ((-127 - 1) + (arr_22 [i_10] [i_9] [i_8]));
                                arr_37 [i_8] [i_8] &= (min(23208784331141829, (arr_2 [i_6 + 2])));
                            }
                        }
                    }
                }
                arr_38 [7] [i_6 - 2] [0] = arr_13 [i_6] [i_7 + 1];
                var_20 += (((max((16765751595363186008 < 29385), (arr_7 [i_6 - 1] [i_7])))) * (((min(1, -1)))));
            }
        }
    }
    var_21 = (-var_9 > var_8);
    #pragma endscop
}
