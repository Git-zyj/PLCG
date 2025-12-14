/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] = (arr_7 [i_0] [1] [i_0] [i_0]);

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_11 = (min((((arr_16 [i_1] [i_1 - 1] [i_2] [i_2 - 1] [i_2]) ? (arr_16 [3] [i_1 - 1] [i_2] [i_2 + 1] [i_3]) : (arr_16 [1] [i_1 - 1] [i_2] [i_2 + 1] [i_4]))), (((arr_16 [0] [i_1 - 1] [i_2] [i_2 + 1] [0]) ? (arr_16 [i_1] [i_1 - 1] [i_2] [i_2 - 1] [1]) : var_6))));
                            var_12 = (min(var_12, (max(65535, 8))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_13 = (min(var_13, (arr_13 [1] [i_5])));
                            var_14 = (min(var_14, (var_4 + var_0)));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_15 = (max(var_15, ((max(((((!1) << ((((max(var_1, var_1))) - 37666))))), (max(((min((arr_22 [i_0] [6] [i_0] [7] [i_3] [i_3] [7]), (arr_13 [4] [i_6])))), var_2)))))));
                            var_16 = (min(var_16, (arr_16 [8] [i_3] [i_6] [i_1] [i_0])));
                            var_17 = (min(var_17, (((~(((arr_19 [i_0] [i_0] [1] [4]) ? (arr_7 [1] [i_3 + 1] [i_3 + 1] [i_3]) : ((max(var_4, (arr_4 [i_6] [i_0])))))))))));
                        }
                        var_18 = (min(var_18, ((max((min(var_7, var_1)), var_4)))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_19 = ((((max(var_0, var_4))) ? ((var_8 ? var_9 : (arr_17 [1] [4] [i_2] [i_2] [i_2] [i_0] [i_1]))) : var_0));
                        var_20 = (max(var_20, ((((arr_19 [0] [1] [i_2] [1]) ? var_3 : (((arr_15 [1] [i_2 - 1] [i_2] [i_1 - 1] [7]) * var_10)))))));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_21 = (max(var_21, ((max((((arr_24 [i_1 - 1] [i_1] [i_8] [i_2 - 1]) ? (arr_27 [i_0] [i_0] [i_1 - 1] [i_2 - 1]) : var_3)), (arr_26 [0] [i_8] [i_2]))))));
                        var_22 = var_8;
                        var_23 = (max(var_23, var_3));
                        var_24 = ((((((arr_16 [i_8] [1] [i_2] [i_2 - 1] [6]) ^ var_4))) ? (((arr_14 [1] [i_2] [i_2] [i_0]) >> (((!(arr_17 [i_0] [i_0] [i_2] [i_1] [1] [i_2] [i_8])))))) : (((!var_7) ? ((min((arr_1 [i_2]), (arr_9 [9] [9] [0])))) : var_4))));
                        arr_28 [i_0] [i_2] [i_2] = (max(var_10, ((12520336205351275138 ? 1 : 65525))));
                    }
                    arr_29 [1] [i_2] [8] = (arr_15 [i_2] [9] [i_0] [i_0] [1]);
                }
            }
        }
    }

    for (int i_9 = 2; i_9 < 17;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 4; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        var_25 = arr_36 [i_10 - 4] [1] [17];
                        arr_41 [11] = (min(((-23521 ? 0 : 1)), 0));
                        arr_42 [i_10] [17] [17] = (((((min(var_7, (arr_35 [i_9] [i_9] [1] [i_12])))) ? ((min(1, 8191))) : var_8)));
                        var_26 = (((arr_35 [i_10] [i_9 + 1] [1] [1]) ? var_0 : var_3));
                        var_27 = (max(var_4, ((12520336205351275119 ? 17953280675770974674 : -5082))));
                    }
                }
            }
        }
        var_28 = var_8;
    }
    var_29 = ((!((min(((var_10 ? var_0 : var_7)), ((min(var_3, var_10))))))));
    #pragma endscop
}
