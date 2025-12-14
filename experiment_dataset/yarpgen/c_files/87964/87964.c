/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_2] = (163325876 ? (arr_5 [4] [15] [i_2 + 2]) : 31);
                    var_11 = (((arr_1 [i_2]) ? var_3 : (!var_0)));
                    arr_10 [i_2] = (!var_0);
                    arr_11 [0] [i_2] = var_1;
                }
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    arr_14 [i_3] [6] [4] [i_0] = var_4;
                    arr_15 [i_0] [i_1] [14] = (!(((var_2 ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1])))));
                    arr_16 [i_0 + 1] [i_1 - 4] [i_1] = var_8;
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_22 [i_3 - 1] [i_3 - 1] [i_3] [i_4] = ((max(-var_4, 1008)) * (((-(arr_19 [i_0])))));
                                arr_23 [7] [i_1] [i_3 + 2] [i_4] [i_5 - 1] [i_1 - 4] [i_4 + 1] = ((((max((arr_7 [i_0 + 1] [i_3 + 1] [i_5 - 1]), (arr_8 [i_0 - 2] [i_0] [i_3 + 2] [i_4 + 2])))) >= (((arr_8 [i_0 + 1] [i_0] [i_3 - 1] [i_4 - 2]) - (arr_7 [i_0 + 1] [i_3 + 2] [i_5 - 1])))));
                                var_12 ^= ((var_1 ? ((((~196) <= (var_3 & 65535)))) : var_9));
                                var_13 = (min(-31, ((var_5 ? var_0 : (min(var_0, 2897728990))))));
                            }
                        }
                    }
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    arr_26 [i_0] [i_1] [16] = (((((var_5 ? (max(1008, var_4)) : (arr_21 [i_0] [i_0] [i_6 - 1] [i_0 + 1] [i_0 - 1] [i_6])))) ? ((((62706 ? -31 : var_8)) % (((max(65519, (arr_7 [i_6] [i_1] [i_0 - 2]))))))) : var_0));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_32 [i_6] [i_8] = (max((((arr_24 [i_1] [3] [i_1] [i_7 - 1]) ? -1 : (arr_24 [i_0 - 1] [i_7] [i_7] [i_7 - 1]))), ((14 & (arr_24 [11] [i_6] [i_6] [i_7 - 1])))));
                                arr_33 [i_6] [i_8] = 52437;
                                arr_34 [i_0 - 1] [i_8] [i_0] [i_0] [11] = ((16806 ? (arr_13 [i_1] [i_1] [i_1]) : ((((var_9 >= (((65535 <= (arr_25 [i_0] [i_1] [i_6] [i_8]))))))))));
                                arr_35 [i_0] [i_1] [i_8] [i_8] = (((arr_4 [i_0]) - ((-((-1670839095846127439 ? var_1 : 22284))))));
                            }
                        }
                    }
                    arr_36 [i_1] [1] [i_6 - 1] [i_0] = (((1 > 1) % (min((min(var_7, 16140901064495857664)), ((((arr_20 [i_0] [0] [i_0]) % var_8)))))));
                    var_14 |= 268434432;
                    arr_37 [i_0] = ((((-1 ^ (arr_2 [i_1 - 4]))) * ((((min(var_2, var_1)) == 21479)))));
                }
                arr_38 [i_0 - 2] [i_1] = (((((2305843009213693973 % 49152) * -var_3)) >= (var_0 || 2954705738)));
            }
        }
    }
    #pragma endscop
}
