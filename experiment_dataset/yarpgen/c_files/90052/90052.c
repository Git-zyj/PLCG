/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_14 < 2501006597) ? (((-6766780654121011178 + 9223372036854775807) >> (var_13 - 29927))) : (((var_7 ? 1536776407 : var_1))))) + (((6766780654121011178 / var_8) * (27897 / -6766780654121011178)))));
    var_16 = (((((var_5 != 40) <= (0 & var_12))) ? (((((-6766780654121011158 + 9223372036854775807) << (var_13 - 29960))) | (((53 ? var_7 : var_8))))) : ((((((var_3 ? var_5 : var_9))) ? (var_14 || var_14) : (var_5 || var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_11 [i_2] = (((((((((arr_3 [12] [i_2]) ? (arr_1 [i_0] [i_1]) : var_6))) ? (((var_6 ? var_2 : 87))) : (2501006596 / 1536776407)))) ? (((((var_3 ? (arr_1 [18] [i_1]) : 1))) ? (((((arr_3 [i_0] [i_0]) >= 50052)))) : (((arr_5 [i_2]) / var_13)))) : ((((((2501006596 ? (arr_6 [i_0] [i_1 + 2] [i_2]) : (arr_2 [i_0])))) ? ((var_13 ? 3035385572 : (arr_1 [i_1 + 3] [i_0]))) : (var_11 || 6766780654121011177))))));
                    var_17 = ((((((((var_12 ? var_11 : (arr_8 [4] [i_2] [6] [i_0])))) + ((var_8 ? (arr_0 [i_1]) : var_14))))) ? ((((0 ? 0 : (arr_7 [i_0] [i_0] [i_2]))) - ((((arr_2 [8]) ? -7626197070175199382 : var_3))))) : (((((((arr_2 [i_0]) + var_5))) ? (((arr_3 [12] [i_1]) ? 1 : (arr_6 [i_0] [10] [i_2]))) : (var_2 + 72))))));
                }
            }
        }
    }
    var_18 &= (((((((var_9 > var_9) || (3162010567 * 44507))))) != (((36 ^ var_7) ? (var_13 % -1587018460477823869) : (((var_5 ? var_8 : var_5)))))));
    var_19 = ((((((var_10 / var_12) ? ((var_13 ? var_2 : var_0)) : (var_9 / var_0)))) ? (((var_5 / -4359851469466883840) ? ((var_14 ? -29 : var_2)) : (var_1 >= 11674))) : ((24 * (1611398196390334280 != 3458)))));
    #pragma endscop
}
