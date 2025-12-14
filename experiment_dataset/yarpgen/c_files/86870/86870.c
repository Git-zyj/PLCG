/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [16] [i_1] = arr_1 [i_0];
                var_19 = ((max(98, 0)));
                var_20 = (min(var_20, ((((arr_1 [i_0]) > (((((1 ? 1 : 48))) ? var_7 : var_3)))))));
                var_21 = ((((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))) ? (max(var_7, (arr_4 [i_1]))) : 28379));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_22 = var_2;
        var_23 = (((((var_0 || (((~(arr_7 [i_2]))))))) & ((var_14 ? (arr_7 [i_2]) : var_11))));
        arr_8 [i_2] = (arr_7 [i_2]);
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        var_24 = (min((~28379), var_14));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_25 |= (min(((((max((arr_19 [7]), var_15))) || (!193))), 1838354958));
                        var_26 = (min(var_26, (((((arr_7 [i_3 + 2]) || 1838354943)) ? (max(1, 1838354943)) : (min(var_18, (arr_7 [i_3 - 2])))))));
                        var_27 = (((arr_19 [i_3 - 2]) == ((14 ? 123 : (arr_19 [i_3 + 2])))));
                    }
                }
            }
            var_28 = (max(-1838354965, (var_11 <= var_11)));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_29 = ((var_12 ? (arr_10 [i_3 - 2]) : (arr_0 [i_3 + 2])));
            var_30 = var_3;
            var_31 = (min(var_31, ((((63 ? (arr_21 [i_3] [i_7]) : (arr_15 [i_3] [0] [i_7]))) - (arr_4 [i_3])))));
            var_32 -= ((-1838354943 && 52) << ((((arr_13 [i_3] [i_7]) == var_8))));
        }
        var_33 = (min(var_33, 211));
    }
    var_34 -= ((((((1073733632 - var_9) ? (var_10 * var_2) : var_12))) ? 77543047546402456 : ((224 * (var_3 / var_14)))));
    var_35 -= (var_4 && var_8);
    #pragma endscop
}
