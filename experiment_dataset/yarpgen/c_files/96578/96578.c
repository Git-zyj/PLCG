/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((-1 ? -662590760 : 27)) >= (((var_9 ? var_5 : var_5)))))) | var_3);
    var_13 = ((((((var_8 ? var_7 : 24)) % var_10)) == var_8));
    var_14 = ((var_8 & (((-38 > -2) ? (var_1 || var_11) : ((5566491211451286147 ? (-2147483647 - 1) : -31))))));
    var_15 = ((var_0 ? (((var_6 % 5) << (var_0 + 1742018113))) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (((((((((arr_0 [i_1] [17]) ? var_4 : (arr_1 [i_0] [8])))) ? (((arr_2 [i_1] [23]) ? (arr_3 [i_0] [i_0] [i_1]) : -126)) : ((var_9 ? 4294967295 : 27))))) ? (((38 % -1581515840) >> ((((-564547657 % (arr_1 [i_0] [i_1]))) + 282)))) : ((((((arr_2 [i_1] [i_1]) ? 244 : (arr_3 [i_0] [i_0] [i_0])))) ? (arr_2 [i_1] [i_1]) : (((11 << (((arr_3 [i_1] [i_0] [i_0]) - 3018351384987108657)))))))));
                arr_4 [i_1] = (((9137 << 7) ? ((-41 ? ((4294967295 ? -24 : 5)) : (((4294967288 ? 19 : -6))))) : (((((-1 ? (arr_2 [i_1] [i_1]) : 16))) ? (((var_5 ? (arr_0 [i_0] [i_0]) : var_8))) : ((var_3 ? var_9 : -42))))));
            }
        }
    }
    #pragma endscop
}
