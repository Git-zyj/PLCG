/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((4224424021 >> 0) + var_8));
    var_11 = var_6;
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (max(var_13, -var_2));
        var_14 = (min(var_14, ((max(var_5, 70543275)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_15 = (max(4224424021, 18446744073709551615));
                        var_16 = var_8;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_13 [19] [i_1] [i_2] [i_4] [i_5] = (((((max(16, 6)) / (((arr_8 [i_0] [i_0] [i_2] [i_2]) ? (arr_12 [15] [2] [2] [i_4] [15]) : var_9))))));
                                var_17 = (min(var_17, (arr_4 [i_0] [i_4] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((((~8314) || var_7)))));
        var_19 = (max(var_19, ((max(var_1, var_8)))));
        var_20 = (max(var_20, ((((arr_5 [i_6] [15]) % (arr_6 [i_6] [i_6] [i_6] [i_6]))))));
        var_21 = (((min(-18446744073709551607, (max(var_9, -12)))) * (!var_8)));
    }
    for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_22 = 9;
        var_23 = (max(var_23, var_0));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_24 = (max(var_24, var_4));
                    var_25 = (max(var_25, var_7));
                    var_26 = var_2;
                }
            }
        }
        var_27 = (min(var_27, ((min(-var_5, (min(((((arr_16 [13]) ? var_2 : (arr_20 [0] [i_7])))), (max((arr_1 [i_7]), (arr_7 [i_7] [17] [i_7] [10]))))))))));
    }
    var_28 = (var_1 == var_1);
    #pragma endscop
}
