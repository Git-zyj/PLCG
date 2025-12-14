/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((8589901824 / (arr_1 [19])));
        arr_3 [i_0] [10] = ((((((arr_0 [6]) / (arr_0 [18])))) ? (max((8589901848 / var_11), ((max(-64, var_15))))) : (min((min(48, 3749105223910034085)), -var_10))));
        arr_4 [i_0] = (((((1 ? 44 : 24751))) == 1910700610375642481));
        arr_5 [i_0] [i_0] = -865702814;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((-39 > ((max((!48034), 53)))));
        arr_10 [i_1] = 112;
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_23 [i_4] [i_4] [6] [i_4] = 28672;
                        arr_24 [i_2] [i_5] [i_4] [i_2] = ((((8589901820 + (-45 - 14697638849799517536)))) ? ((((var_2 & 50) ? (49 | 2700) : (-524288 <= 48)))) : (max(-45, (((arr_0 [i_2]) ? 6144 : var_18)))));
                        arr_25 [i_2] [i_5] [8] [i_4] [i_3] [i_2] = -68;

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            arr_29 [i_5] [i_3] [i_2] [i_5] [i_2] = 14;
                            arr_30 [0] [i_5] [i_5] [4] = (((arr_6 [i_6 - 2] [i_6 - 2]) ? var_0 : 97));
                            arr_31 [i_2] [4] [6] [i_5] [i_4] = (1724959518847505734 || 41);
                            arr_32 [0] [0] [i_4] [i_2] [0] [i_6] = var_1;
                        }
                    }
                }
            }
        }
        arr_33 [4] [i_2] = (((~((7 ? (arr_8 [i_2]) : var_4)))) & (max((max(1534836849, 20)), (arr_19 [i_2 + 1]))));
    }
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        arr_36 [i_7] = (max(-38, (arr_8 [i_7])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {
                    arr_42 [i_8] = (((((((8706879926893209444 + (arr_38 [i_9]))) * 71))) && (((arr_34 [i_9]) && 70368744177648))));
                    arr_43 [i_7] [i_7] [i_7] = -6141;
                }
            }
        }
        arr_44 [i_7] = ((13 > 2146587572) ^ (((-(arr_39 [i_7])))));
    }
    var_19 = (((((192 && 18879) ? (!32094) : (!var_18)))) ? (min((43 && -45), (max(1139856259, -21935)))) : ((((((56 ? 34 : 1865295349))) || var_3))));
    var_20 |= (18446744073709545481 / 8192);
    var_21 = ((var_6 >> (var_12 - 16193)));
    #pragma endscop
}
