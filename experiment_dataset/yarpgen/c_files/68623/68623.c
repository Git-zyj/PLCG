/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((!(((242 ? 3348310693 : 127))))) ? (((18446744073709551590 == (~5684303188731253317)))) : var_8));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = ((((((var_0 ? 74 : -29)) * (arr_1 [i_1 - 3]))) >> (((max((min(var_8, var_4)), var_5)) - 44425))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_15 = ((734550661 >> (((arr_4 [i_1 - 3] [i_0 + 1]) - 686628774))));
                        var_16 += (((var_2 + 62) ? -1 : (arr_8 [i_2] [i_1 - 3] [i_3])));
                        var_17 = 18446744073709551590;

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_18 = (~1871727144);
                            var_19 += (((((arr_0 [i_2]) && (arr_11 [i_0] [i_2] [i_3]))) ? (!74) : var_10));
                            var_20 = ((((var_12 ? var_11 : var_0)) != var_4));
                            arr_15 [i_0] = (((arr_13 [10] [i_1] [i_1 - 2] [i_1 - 2] [i_1]) ? var_9 : (arr_13 [i_0] [17] [i_0] [i_0] [i_0])));
                        }
                        var_21 = ((var_1 ? var_8 : (arr_4 [i_0 + 1] [i_0 + 1])));
                    }
                    arr_16 [15] [i_0] [i_2] [20] = (((201 * 3560416629) < 210));
                    var_22 = ((!(arr_9 [i_0 + 1] [i_1 + 1] [i_1 - 1])));
                    var_23 = 29;
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    var_24 ^= (((arr_0 [i_5]) || (arr_0 [i_1 - 2])));
                    var_25 = (((arr_18 [i_0 + 1] [i_1] [i_5 + 2] [9]) ? (65518 >= -89) : (2423240150 | 0)));
                    var_26 = ((72 == (((var_3 != (arr_0 [i_0]))))));
                }
            }
        }
    }
    var_27 = (((var_3 ? (!1) : 49674)));
    var_28 = ((((((var_11 | -1) * (var_10 / var_12)))) ? ((~((var_6 ? var_8 : var_8)))) : var_11));
    var_29 = ((-106 * (!var_0)));
    #pragma endscop
}
