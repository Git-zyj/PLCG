/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (max((((3283749789 ? (var_9 == 1011217507) : (!var_2)))), var_9));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_17 = (min(var_17, (arr_4 [i_0] [i_2] [i_3])));
                        arr_11 [i_1] = (max(var_0, ((~((max((arr_3 [i_1]), 24)))))));
                        var_18 *= ((((max(var_13, var_1))) > ((max((arr_9 [i_3]), (arr_9 [i_3]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_19 = ((((max((!3283749760), (max(var_1, (arr_3 [i_4])))))) && ((min(1, (arr_14 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 - 1] [i_1]))))));
                                var_20 = ((((-var_2 - (~var_0))) > (((arr_7 [i_2 + 1]) ? var_14 : (arr_7 [i_2 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_21 = var_2;
                                arr_21 [i_7] [i_6] [i_1] [i_1] [i_0] = (!1011217535);
                                arr_22 [i_0] [i_0] [i_1] [i_1] = (max(30777, (arr_15 [i_1])));
                            }
                        }
                    }
                    var_22 = (((-1011217507 * (3283749796 && var_12))));
                }
            }
        }
        var_23 = ((arr_4 [i_0] [i_0] [4]) ? (arr_4 [i_0] [i_0] [10]) : (arr_13 [i_0] [i_0] [i_0] [i_0]));
    }
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    arr_30 [i_9] [i_9] = ((-(((((max(var_12, (arr_23 [i_9]))))) | (((arr_24 [i_8]) & var_0))))));
                    var_24 += (arr_26 [i_10] [i_10] [i_10]);
                    arr_31 [i_9] = (max((~var_2), (((var_13 && (((8069202060290551306 ? var_10 : var_12))))))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_37 [i_12] [i_9] [i_11] [i_10] [i_10] [i_9] [i_8] = var_14;
                                arr_38 [i_9] [i_11] [i_10] [i_10] [i_12] = (((((~1085403720) + 2147483647)) << (var_7 - 1060895138)));
                                var_25 = var_9;
                                var_26 = (((max((arr_29 [i_8] [i_10] [i_11]), 690053943)) << (((15998394851389828987 | var_15) - 15998394851389829089))));
                                var_27 = (~-var_10);
                            }
                        }
                    }
                    arr_39 [i_8] [i_9] [i_10] = (max((max(3283749788, (((-18571 ? 65280 : 56782))))), (arr_28 [i_8] [i_9] [i_9])));
                }
            }
        }
    }
    var_28 = var_11;
    var_29 = (var_5 ? ((min((var_5 >= var_2), var_12))) : (max(var_13, -255)));
    #pragma endscop
}
