/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, 1));
        var_17 = (69 <= -84);
        var_18 = ((1167658377795721285 ? ((251 ? (1 * 1) : var_4)) : (!1)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 = ((+(((arr_8 [i_1] [i_1] [i_2]) & 98))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 11;i_4 += 1)
                {
                    {
                        var_20 ^= (min((((~(16999 - 1041938048)))), (((((-3335483268464778806 + 9223372036854775807) >> (((arr_1 [i_1]) - 136)))) + ((min((arr_7 [10]), 1)))))));
                        var_21 = (max((max(1, (((arr_0 [i_2]) ? (-127 - 1) : var_13)))), ((1 >> (1651382751 - 1651382724)))));
                    }
                }
            }
        }
        var_22 = var_2;
        var_23 = ((1974309592422637350 ? ((min((-27105 == -3335483268464778806), ((var_3 ? var_3 : (arr_4 [i_1] [i_1])))))) : (1 ^ 18446744073709551615)));
        arr_17 [i_1] = ((((((78 ? -22515 : var_15)) + 2147483647)) << (!var_11)));
        var_24 = 14;
    }
    var_25 = ((((((min(1, var_15))))) ? var_6 : ((max((!234), 1)))));
    #pragma endscop
}
