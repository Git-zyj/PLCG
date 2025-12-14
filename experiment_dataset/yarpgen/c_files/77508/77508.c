/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 *= ((!(((0 ? 1384947461007294911 : 1)))));

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] = ((-(max(534773760, (max(var_3, 32767))))));
                        var_18 *= ((~(((arr_7 [i_1 - 1] [i_1 - 2]) ? var_13 : var_9))));
                        var_19 = -32046;
                    }
                    for (int i_4 = 4; i_4 < 23;i_4 += 1)
                    {
                        var_20 *= ((((min((((arr_3 [i_0] [i_0] [4]) ^ var_5)), (1 + var_9)))) ? ((((((arr_9 [9] [i_1] [1]) ? var_8 : (arr_8 [18] [20] [i_2] [22])))) ? -1 : ((566845523 ? 3728121772 : 7498)))) : (!252)));
                        arr_15 [i_0] [i_2] = 3728121772;
                        var_21 = -121;
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            arr_21 [20] [i_1] [i_2] [i_5] [i_6] = var_13;
                            var_22 *= -1925302466;
                            arr_22 [i_2] [i_1 - 1] = ((var_8 ? 511 : (arr_13 [i_6 - 2] [i_6 - 2] [i_2] [i_1 - 2] [i_2] [i_6 - 1])));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_23 = (((arr_6 [i_0] [i_2]) ? (!var_6) : var_11));
                            var_24 = ((3760193551 ? (arr_9 [i_0] [i_1 - 1] [i_5]) : ((30646 ? (arr_2 [i_1 + 2]) : ((var_0 ? var_12 : var_2))))));
                            var_25 = ((-9675 ? (((-(arr_10 [i_1] [i_1 + 2] [i_1 - 2] [i_1 + 2] [i_1] [i_1 - 1])))) : 1));
                        }
                        var_26 = (max(var_26, 534773760));
                    }
                }
            }
        }
    }
    var_27 = (((var_4 >> (1048544 + 61))));
    var_28 = (max((1 < 536870911), var_2));
    #pragma endscop
}
