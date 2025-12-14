/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((((min(8400, (max(89, -8803895875216252958))))) ? ((-548986950 ? -2147483619 : -2147483623)) : -14)))));
                var_20 = (min(var_20, (((((((min(6752332089430133914, 2147483619))) ? 17136 : var_12)) + (min((((arr_3 [i_0 + 2] [5] [i_1]) ? 119 : 2147483626)), (max(16, -1207299718)))))))));
                arr_5 [i_0] = (((var_5 && (~43705))));
                var_21 *= (arr_3 [10] [i_1] [i_1]);
            }
        }
    }
    var_22 = ((~2147483606) ? var_16 : ((var_8 ? var_13 : 1345405415)));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 *= ((((max(var_4, ((4 ? -2147483619 : 2147483623))))) ? ((-((var_2 ? var_2 : (arr_8 [14]))))) : (((!(33438 & 32097))))));
        var_24 = (max(var_24, (((-2147483619 ? 32105 : ((-222176020 ? -222176020 : var_1)))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_2] [i_4] = (-2147483606 ? 36 : 2147483624);
                    var_25 = (max(var_25, ((((((((max(var_1, (arr_11 [i_3])))) ? ((-2147483606 ? (arr_7 [i_3] [10]) : var_16)) : -2147483606))) ? (1786036150 & 8413564270882992849) : ((max(2147483647, (arr_6 [2] [0])))))))));
                    var_26 = (((max((arr_6 [i_2] [i_3]), (max(var_9, 1689837308351543687))))) ? ((222176020 ? (1 | -2147483622) : 8413564270882992853)) : (((var_16 & var_4) ? (255 + -2147483616) : (min(var_9, var_5)))));
                }
            }
        }
        var_27 = ((-((~(arr_10 [i_2] [i_2] [10])))));
    }
    #pragma endscop
}
