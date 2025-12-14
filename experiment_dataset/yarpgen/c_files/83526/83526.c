/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_0] = (max((((var_3 || (((var_18 ? (arr_5 [i_0] [i_0] [i_2]) : var_8)))))), (max((arr_0 [i_0]), 10159637068835936421))));
                        var_19 = (!57954);
                        arr_12 [i_0] [i_1] [i_1] [i_0] [8] [i_0] &= ((~(127 < 1754485936117450885)));
                        var_20 -= var_11;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4] = (max(var_5, 7581));
                                arr_18 [i_2] [i_0] [7] [i_2] [i_1] [i_0] [i_0] = ((~(min(((var_2 ? (arr_13 [i_0]) : -22456)), 32755))));
                                var_21 = (min(var_21, 7581));
                            }
                        }
                    }
                    var_22 = (((((((max(var_17, -107))) ? ((((arr_4 [i_1 + 2] [4]) > var_4))) : (!var_3)))) ? (max((arr_4 [0] [0]), var_2)) : var_11));
                    var_23 = -9223372036854775806;
                }
            }
        }
    }
    var_24 = (~var_7);
    #pragma endscop
}
