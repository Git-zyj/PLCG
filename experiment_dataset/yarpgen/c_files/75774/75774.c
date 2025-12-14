/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((((~var_9) != var_7)) && var_11)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (5803 ^ 16710310420790190999);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_21 = (min(var_21, ((((1073741823 != 209) > (((min(var_10, var_6)))))))));
                        var_22 = (min(var_22, (((max((arr_3 [i_1 + 1] [i_1] [i_2]), (arr_5 [i_0] [8] [i_2] [i_3])))))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_2] = min(var_14, -var_1);
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = (arr_13 [i_1 + 1] [i_1 + 1] [i_2] [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_23 = (max(var_23, ((((min((((-(arr_13 [i_3] [8] [i_5] [i_3])))), (arr_10 [i_5] [i_5]))) > (min(((-(arr_8 [i_0] [i_3] [4] [i_3]))), ((min((arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] [i_0]), (arr_17 [i_0] [0] [i_2] [i_3] [i_5])))))))))));
                            var_24 |= (arr_6 [i_1 + 2] [0] [1]);
                        }
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_2] [i_1] = (((arr_19 [i_0] [i_1 + 2] [i_2] [10] [i_6]) ^ (arr_9 [i_0] [i_1 - 1] [i_2] [i_2] [i_6])));
                        var_25 = 1;
                        arr_22 [i_6] [i_1] [i_2] [i_1] [i_2] [i_2] = (arr_20 [i_2]);
                        arr_23 [i_2] = (min(673913180, 9012705578036884856));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_26 += 1099511627775;
                        arr_27 [i_2] [i_1] [i_2] [i_7] = (arr_10 [i_2] [i_2]);
                    }
                    var_27 = 4294967295;
                    var_28 *= 255;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    arr_35 [i_0] [i_0] = 4294967295;
                    var_29 = (min((min(var_17, (arr_16 [i_0] [i_8 - 4] [i_0] [i_8 - 3] [i_8 - 3] [0] [i_8 + 1]))), 1));
                    var_30 = ((((max((((arr_32 [i_0]) ? (arr_7 [i_8] [i_0] [i_8 + 1] [i_0] [i_0] [i_8]) : (arr_7 [i_8] [i_9] [10] [i_8 - 2] [i_0] [i_8]))), (min(1, 1819534103))))) ? ((min((~2047), (!1)))) : (arr_26 [6] [i_8 - 4] [i_8 - 1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_42 [i_11] [i_8] [i_9] [i_11] = (max(1, 18446744073709551615));
                                arr_43 [i_11] [0] = arr_41 [i_0] [i_8] [i_9] [i_0] [0];
                                arr_44 [i_0] [i_8] [i_8] [i_10] &= 46434;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
