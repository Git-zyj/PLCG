/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= -161467635;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 10756;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 &= ((10770 ? (19720 ^ -10756) : (((arr_3 [i_0] [i_0]) ? (arr_1 [1] [1]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_14 [3] [i_4] [i_1] [i_2] [i_3] [i_3] [i_3] = ((arr_8 [i_0] [i_2] [i_3] [i_4]) ? (arr_8 [i_0] [i_1] [i_4] [i_3]) : (arr_8 [i_1] [i_1 + 1] [i_2] [i_1]));
                            var_18 = ((-16559 && ((((arr_9 [i_1]) / 119791094)))));
                        }
                        var_19 += var_5;
                    }
                    var_20 = (arr_8 [i_1] [i_1] [i_2] [i_1]);
                    var_21 = (min(var_21, -var_1));
                }
            }
        }
    }
    var_22 -= (((((min(var_12, var_8))) ? (min(var_1, var_4)) : var_12)));

    /* vectorizable */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        var_23 = (((((1 <= (arr_3 [i_5] [1])))) << (var_5 + 111)));
        var_24 = ((var_8 ? var_11 : (arr_8 [i_5 + 1] [i_5 + 3] [i_5] [i_5 - 1])));
        var_25 ^= (arr_18 [i_5]);
    }
    var_26 &= 61203;
    #pragma endscop
}
