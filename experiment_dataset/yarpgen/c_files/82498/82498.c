/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = ((var_19 * (((((var_10 ? var_7 : var_16)) <= var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [9] = var_8;
                arr_9 [i_0] [12] [6] = ((-((((((arr_2 [i_0] [i_1]) ? 9222809086901354496 : (arr_6 [2] [i_1]))) <= ((((arr_3 [i_0]) ? (arr_7 [i_0]) : (arr_2 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_22 = (max((((((!(arr_5 [i_3 + 2] [i_2] [i_0])))) % (((arr_13 [i_0] [i_2]) ? 255 : (arr_13 [i_1] [7]))))), (((((min((arr_12 [3] [0] [i_3 - 1]), (arr_10 [i_0] [i_0] [i_2] [i_3 + 2])))) > -var_15)))));
                            var_23 = (min((((-1 / var_13) + (((arr_7 [i_3]) ? (arr_7 [9]) : 18446744073709551613)))), (-1264480517 | 960998825)));
                            var_24 = (arr_2 [i_0] [9]);

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                arr_20 [i_2] [i_1] [9] [i_3 + 2] [i_3 + 2] = ((((((arr_19 [i_0] [i_0] [i_2] [i_3 + 2] [1] [i_1] [i_3 + 1]) ? 4294967295 : (arr_11 [2]))))) ? ((((((((arr_12 [i_0] [i_1] [i_0]) << (((arr_17 [7] [i_1] [2] [4]) - 106892223))))) <= (((arr_1 [i_2]) ? (arr_3 [i_4]) : (arr_14 [i_0] [i_0] [1] [i_0]))))))) : (((((10 ? (arr_11 [i_2]) : (arr_3 [i_3 + 1])))) ? ((var_5 ? (arr_0 [0] [8]) : var_2)) : (((4294967293 % (arr_2 [i_0] [i_1])))))));
                                var_25 = (((arr_7 [i_1]) % ((2280008523 ? (((arr_10 [i_0] [7] [i_2] [i_3 + 2]) ? (arr_3 [i_0]) : 10)) : (arr_18 [i_0] [i_1] [i_2] [i_2] [i_3] [4] [5])))));
                                var_26 = (4294967295 <= 18446744073709551615);
                            }
                        }
                    }
                }
                arr_21 [i_0] = (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (min((0 | 2147483643), (~var_3))) : ((((var_16 + var_5) ? (arr_1 [12]) : (arr_2 [i_0] [i_1]))))));
            }
        }
    }
    var_27 = ((var_3 ? (min((((var_10 ? var_8 : 255))), ((0 ? var_9 : var_7)))) : var_7));
    #pragma endscop
}
