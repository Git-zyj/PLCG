/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = (((((~263962319279689771) < (!var_4))) ? (((((263962319279689771 ? 263962319279689771 : -885065316))) ? var_12 : (((var_7 ? var_6 : var_11))))) : ((((!(!var_9)))))));
    var_15 = ((((((!(var_6 != var_12))))) <= (((((var_3 ? var_8 : var_3))) ? (~var_6) : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min((!var_9), (((((((arr_0 [1] [i_1]) + 2147483647)) >> (263962319279689771 - 263962319279689742))) >> (((arr_1 [i_1]) - 77))))));
                arr_7 [i_1] = ((((((arr_5 [i_0]) ? (arr_4 [i_0]) : (arr_2 [i_0])))) ? (((var_4 << (var_0 - 437837692)))) : (max(((min((arr_5 [i_1]), 910935433))), -var_7))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2] = ((((((!(arr_8 [i_2]))))) | (((!-24586) ? (910935433 && 516096) : 263962319279689771))));
        var_16 = var_2;
        arr_11 [i_2] = ((-(min((18182781754429861845 * 3384031855), (var_10 * 910935438)))));
    }
    #pragma endscop
}
