/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (21004 || -256);
        var_19 = (max(var_19, ((((~var_17) * (arr_3 [i_0] [i_0]))))));
        arr_5 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_9 [i_1] = (min((arr_8 [i_1] [11]), (max((((arr_3 [i_1] [i_1]) / (arr_0 [i_1]))), -20))));
        arr_10 [i_1] = (((~((-(arr_2 [i_1] [5]))))) << ((((-28971 ? (arr_6 [i_1]) : var_4)) * ((((!(arr_1 [i_1]))))))));
        arr_11 [i_1] = (((var_8 / var_10) ? ((max(12908, (arr_8 [i_1] [i_1])))) : ((57399 * (arr_8 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = (arr_13 [i_2] [i_2 - 2]);

        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            var_20 = (((arr_13 [i_3 + 2] [i_2 + 1]) ? (arr_13 [i_3 + 2] [i_2 + 1]) : 11270485697278610326));
            var_21 *= ((var_12 ? 0 : ((((var_1 <= (arr_13 [i_3] [i_2 + 1])))))));
            var_22 -= ((((((arr_12 [12] [12]) ? (arr_12 [0] [i_3]) : -1))) || (arr_12 [1] [i_2 - 2])));
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                arr_22 [i_5] [i_5] = (max(34377, 3554029252557664936));
                var_23 = (max(var_23, ((min((((arr_19 [i_5] [i_4]) + (((!(arr_20 [i_4] [i_4] [i_5])))))), (arr_20 [i_4] [i_4] [i_4]))))));
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_24 |= 0;
                                var_25 *= (min(8, (arr_23 [i_4])));
                                var_26 = ((7176258376430941289 ? (((!(!var_3)))) : ((~(arr_28 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((~((4467321230077442776 | ((((-9223372036854775807 - 1) ? 35682 : -3090652238268606445)))))));
    var_28 = (min(var_28, var_4));
    #pragma endscop
}
