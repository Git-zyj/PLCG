/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [6] = (max((max(-5152519484703531365, 0)), (((0 == var_12) ? (min(var_10, -164806271)) : ((((var_5 || (arr_2 [17])))))))));
        arr_4 [i_0] = (((((var_14 | (min((-9223372036854775807 - 1), var_8))))) || (((((min(var_11, var_7))) ? var_10 : (((arr_1 [i_0]) ? var_1 : var_1)))))));
        var_18 = (min(var_18, var_5));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1 - 1] = ((((((var_13 ? -2 : (arr_6 [i_1] [0]))) ? (min(4294967285, 6971064161084049539)) : (arr_1 [i_1])))));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_22 [i_4] = ((min(-1, (max(-1, var_9)))));
                            arr_23 [6] [i_4] [i_4] [i_1] = (max(var_6, (min(((max(var_6, 1))), ((var_16 ? 4294967291 : var_4))))));
                        }
                    }
                }
            }
            arr_24 [i_2] = (((!-1) != var_3));
            var_19 *= (arr_11 [i_2]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_29 [i_6] = (713652983826181355 >= var_15);
            arr_30 [i_1] [i_6] = var_3;
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                {

                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {

                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_20 = (min(var_20, (((145056350 ? ((max((((arr_1 [i_7]) ? 1 : var_5)), 98))) : (arr_37 [i_11] [i_10 - 1] [i_9] [i_7]))))));
                            var_21 = ((var_16 - (arr_19 [i_10 - 3] [i_10] [i_10] [i_9 - 1])));
                        }
                        var_22 = 707022486;
                        var_23 = var_13;
                        var_24 = (((((0 ^ (max(var_6, var_11))))) ? (min((-9223372036854775807 - 1), -96)) : ((min(1, var_16)))));
                        arr_42 [i_10] [i_8] = (min(((((-9223372036854775807 - 1) < var_2))), (-707022485 || 1985638762)));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_50 [2] = ((var_14 + 2147483647) >> (((min((max(var_7, 1)), var_0)) + 125)));
                                var_25 = (min(var_8, (((((85 + (arr_43 [i_7] [i_8] [i_12] [i_13])))) ? var_13 : (0 % var_9)))));
                                var_26 = (max(var_26, (((((max((arr_46 [i_9 + 1]), (((var_12 >> (var_10 - 8571657463604530349))))))) ? (((4149910946 << (4294967293 - 4294967279)))) : ((-58086129 ? 1 : 332987627837520764)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (0 == 0);
    #pragma endscop
}
