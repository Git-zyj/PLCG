/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 -= ((17837690521555675015 ? (arr_0 [i_2]) : (arr_0 [i_0])));
                                arr_13 [i_2] [i_3] [i_2] [i_1] [i_2] = 5246715362452577084;
                                var_14 = ((var_8 ? (arr_3 [i_1] [i_1]) : (4294967293 >= var_6)));
                                var_15 = (max(var_15, var_0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = var_0;
                                var_16 = ((var_4 * (((-(arr_18 [i_2] [i_2] [i_2] [i_5] [i_5]))))));
                                arr_20 [i_0] [i_0] [i_0] [i_2] [i_0] = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                                var_17 = (112 ^ 4433230883192832);
                                var_18 = (arr_11 [i_0] [i_1] [i_2] [i_5] [i_6]);
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    var_19 *= (arr_14 [i_7] [i_0] [i_0] [8]);
                    var_20 = (min(4294967289, (max(var_4, (arr_6 [i_1] [i_1] [i_1] [i_1])))));
                    var_21 = (!var_8);
                    arr_25 [i_7] [i_0] [i_0] |= (((arr_17 [i_0] [i_0] [i_7] [i_7]) ? (((var_1 < ((var_11 ? 5688035821333341947 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((arr_24 [i_0] [i_0] [i_1] [i_7]) << (((arr_24 [i_0] [i_0] [i_7] [i_7]) - 61874))))));
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    var_22 += ((+(((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) % (((arr_2 [i_1] [i_0]) ? 1 : var_4))))));
                    var_23 *= (((~121) | ((min((arr_7 [i_0] [i_1] [i_8] [i_0]), (arr_7 [i_1] [i_1] [i_1] [i_1]))))));
                }
                arr_29 [i_1] [i_1] [i_0] = -112;
            }
        }
    }
    #pragma endscop
}
