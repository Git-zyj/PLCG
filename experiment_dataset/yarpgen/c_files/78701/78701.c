/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((var_13 ? ((var_8 ? (-2147483647 - 1) : var_14)) : (((max(var_7, var_15))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 = ((((((((arr_1 [i_0 - 1]) || (arr_1 [i_0]))) ? var_10 : 2147483647))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : ((((max(var_17, (arr_0 [i_0])))) ? (-32767 - 1) : (arr_0 [i_0])))));
        var_20 = var_10;

        /* vectorizable */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_21 = var_1;
                        var_22 = ((((arr_2 [i_0] [i_0 - 1] [i_0 - 2]) & -2147483634)));
                        var_23 = ((((arr_6 [i_0 + 1] [i_0] [1]) ? (arr_4 [i_0]) : (arr_1 [i_0]))) + (arr_9 [i_3]));
                    }
                }
            }
            arr_11 [i_0] [i_0] = (-32767 - 1);
            var_24 += var_15;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_15 [i_0] [i_0 - 2] [i_0] = (((((var_1 ? 18446744073709551615 : (2056567597 > 59)))) ? ((((~-60) && (arr_3 [i_0] [i_0] [i_0])))) : (arr_6 [i_0] [i_4] [i_4])));
            arr_16 [i_0] [i_4] &= 18446744073709551615;
            var_25 = ((((((arr_3 [i_0] [i_0] [i_0]) ? (-32767 - 1) : var_7)))) ? ((var_6 ? (arr_1 [i_0 - 2]) : var_17)) : ((((!((max(32767, (arr_3 [0] [i_0] [i_4])))))))));
            var_26 = (min(var_26, var_6));
        }

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_19 [i_0] = ((((max((min(5055004014707950576, 32767)), (arr_8 [i_0 + 1] [i_0] [i_0 - 1])))) ? (((arr_5 [i_0 - 1]) ? (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 - 2] [i_0 - 1]))) : (((!(arr_0 [i_0]))))));
            arr_20 [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
        }
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            var_27 = ((0 || (-32767 - 1)));
            var_28 = (((arr_9 [i_6]) ? 61878 : (--10750009108665770023)));
        }
        var_29 = ((!(var_12 <= 2147483647)));
    }
    var_30 *= var_0;
    #pragma endscop
}
