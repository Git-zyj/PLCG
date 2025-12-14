/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (((~(!57499))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [5] [3] = (max(((var_6 ? var_2 : (arr_10 [i_0 + 1] [i_0 + 1] [i_2] [i_3 + 4]))), ((((-(arr_9 [i_0])))))));
                            }
                        }
                    }
                }

                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    arr_17 [2] [i_1 + 1] [i_1] [i_0 - 1] |= var_12;
                    var_14 = (min(((var_6 ? 1 : 9262612517464546625)), (((1 ? 12531 : ((1 ? 117 : 24909)))))));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_15 = var_6;
                    arr_20 [i_6] [i_6] [i_0] = ((((((1 ? 0 : 7220281835870502564))) ? ((1 ? 61440 : 83)) : -32513)));
                }
                var_16 = (((((((var_7 ? (arr_16 [i_0] [i_1 - 3]) : var_5)) >> ((min((arr_15 [i_0] [i_0 - 1] [i_0] [i_1 - 3]), (arr_4 [i_0] [i_0] [i_0]))))))) ? ((((!var_2) % (((arr_0 [i_0] [7]) ? var_8 : var_0))))) : ((~(~var_2)))));
            }
        }
    }

    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        var_17 = (((((max(17290, -23451)))) - (arr_22 [i_7 + 1] [i_7 - 1])));
        arr_23 [i_7] = ((1791230941 ? (((79 >= 1) | -106)) : ((((-889091928957576209 ? -3261 : 13748)) ^ 58658))));
        var_18 = (((!1) ? (min(((min(var_1, var_5))), (((arr_22 [i_7] [i_7]) / var_1)))) : ((((((arr_21 [15]) * var_5))) ? -var_12 : var_7))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_26 [2] |= ((187 ? 26133 : 15516));
        var_19 = ((+((-(((arr_10 [i_8] [i_8] [1] [22]) ? var_10 : (arr_24 [i_8])))))));
        arr_27 [i_8] [i_8] = var_6;
    }
    #pragma endscop
}
