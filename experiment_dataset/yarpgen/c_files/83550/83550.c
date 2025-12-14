/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (max((((((var_16 ? var_0 : var_14)) != var_6))), -1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 ^= ((((max(12833826636352617728, -107321027))) || ((max(-7657882402619648488, (min((arr_9 [i_1]), var_10)))))));
                    arr_10 [i_0] [i_0] [i_2] = (((107321024 ? -7657882402619648488 : -107321002)));
                    var_21 = (((((var_6 ? -7657882402619648488 : var_15))) ? ((var_12 ? -7657882402619648472 : -107321015)) : (max(var_5, (arr_2 [i_1])))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_22 = ((((max(-107321027, 0))) ? (((3876957046009942521 ? -2061973126 : 32767))) : (max(var_9, (arr_2 [i_0])))));
                        arr_13 [i_3] [12] [12] [i_0] = 1;

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            var_23 *= min(1, 4);
                            arr_18 [11] [i_0] [i_0] [i_0] [1] [7] = (((!0) ? var_11 : (((-7657882402619648462 > (arr_14 [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4 - 1]))))));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_24 ^= (min(((((var_2 ? 1 : 1)) >> (((max(4, 3849515181)) - 3849515153)))), (max(var_16, ((65535 ? var_18 : (arr_12 [i_0] [i_1] [i_3])))))));
                            var_25 = ((~((((var_15 ? var_8 : var_18)) / ((var_9 ? var_7 : 1))))));
                            arr_22 [i_0] = (!((((arr_0 [i_0] [i_0]) ? (arr_12 [6] [i_0] [i_5]) : (arr_0 [i_1] [i_0])))));
                        }
                        var_26 = (((min(1, 70368744169472)) % 1071644672));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_27 = 1;

                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_28 = var_15;
                            arr_28 [i_0] [i_1] [2] [i_6] [8] = ((((((var_0 ? var_5 : 0)) ? ((max(var_7, var_5))) : (~var_8)))));
                            arr_29 [i_7] [i_0] [2] [7] [i_0] [i_0] [i_0] = (max((((var_14 + (arr_24 [10] [i_0] [i_2] [10] [10])))), ((((var_2 ? -15279 : 960))))));
                        }
                        var_29 |= (((var_11 + 2147483647) << ((((((max(var_12, var_7))) | (min(1, 281474909601792)))) - 18446744073709549135))));
                        arr_30 [i_0] [i_1] [i_0] = (max(-5, 0));
                        var_30 *= var_3;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_0] = (min(((((min(var_7, (arr_14 [i_0] [i_0] [12] [1] [i_2] [16] [i_8])))) % 1)), (((min(25, 17585422676246488813))))));
                        var_31 += (min((((min(246, -66)))), (min(27, var_10))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
