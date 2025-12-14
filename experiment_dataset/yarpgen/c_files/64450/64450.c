/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, 10649731988062772239));
                    arr_7 [i_0 - 1] [i_2] [i_2 + 2] [i_2 + 2] &= (-(max((((arr_1 [i_2]) % 4294967287)), (1 + 30868))));
                }
            }
        }
        var_21 *= (((7797012085646779371 ? (arr_3 [6]) : (arr_1 [i_0 + 1]))));
        arr_8 [16] = ((((((((arr_3 [10]) >= (arr_1 [i_0 - 1]))) ? ((-2147483636 % (arr_3 [22]))) : (((9 >= (arr_1 [i_0 - 1]))))))) ? ((24 % (((arr_2 [i_0]) ? (arr_6 [i_0]) : (arr_3 [10]))))) : (arr_2 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_13 [i_3] [i_3] = ((15659032310490787008 ? -26542 : 23));
                arr_14 [i_4] = ((arr_12 [i_3] [i_4]) ? (arr_9 [i_3]) : (max((min(34656, var_8)), (arr_6 [24]))));
                arr_15 [i_3] [i_3] [i_4] = ((((min(var_11, (arr_0 [i_4])))) ? ((((((6 ? var_16 : (arr_5 [i_3] [i_3]))) >= ((1 ? 124 : var_16)))))) : (((arr_3 [i_4]) ? var_17 : var_15))));

                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    arr_18 [i_5] [i_5] [i_5] = (arr_12 [11] [1]);
                    arr_19 [15] [i_5] [i_5] = (min((((max((arr_6 [i_3]), (arr_3 [i_5]))) | 186)), (max((arr_12 [9] [i_4]), ((3 ? (arr_11 [18] [i_4] [18]) : (arr_3 [i_5])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_26 [10] [i_5] [i_5] [i_5] [i_5] [i_3] = ((((((max(201, (arr_1 [i_3])))) ? ((121 | (arr_22 [i_3] [i_4] [i_5 + 1] [i_6] [17]))) : var_2))) & (arr_1 [i_3]));
                                arr_27 [i_5] [i_6] [i_4] [i_4] [i_5] = (min((((((-(arr_17 [2] [2])))) ? ((var_2 / (arr_25 [i_3] [i_3] [i_3] [i_3] [21] [i_3]))) : (((arr_23 [23] [i_6] [i_5] [i_3] [i_3]) - (arr_25 [i_7] [i_6] [i_5] [i_3] [i_3] [i_3]))))), (arr_9 [i_7 - 2])));
                                arr_28 [i_4] [i_4] [1] [i_5] [i_4] = (min(((max((-91442245 + 65524), 13))), (((((var_3 ? (arr_24 [i_3] [i_3] [i_3] [i_3]) : (arr_22 [1] [1] [i_6] [i_6] [i_6])))) ? (arr_11 [16] [1] [i_5 + 2]) : 23))));
                                arr_29 [i_5] = (((max(((max(1, var_4))), var_17))) ? ((((min(17, (arr_10 [i_3]))) % (arr_6 [i_3])))) : ((var_17 ? (((max((arr_9 [i_7]), 32424)))) : (~16760749908881357476))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_12;
    var_23 *= ((((min(var_9, (var_10 % 4079836373563210976)))) ? var_8 : (((((var_18 ? -6505346091902794700 : 30846))) ? ((var_3 ? var_6 : var_19)) : 65529))));
    #pragma endscop
}
