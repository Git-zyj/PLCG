/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_14 = ((((((((max(var_5, (arr_4 [i_0])))) && (var_2 | var_11))))) + var_9));
            var_15 = (max(var_15, ((min((((!(~var_4)))), (((arr_0 [i_1] [i_0]) ? (((!(arr_4 [i_0])))) : (((arr_2 [i_0]) / var_2)))))))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_16 = (max(var_16, ((max((-2079572715 >= 7), -var_2)))));
            var_17 = ((2147483647 ? 61440 : 25));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 11;i_4 += 1)
                {
                    {
                        var_18 = (arr_3 [i_0] [i_0]);
                        var_19 = ((-89 && 0) ? (((arr_10 [i_3 - 1] [i_4] [i_4 - 3] [i_0]) ? (((arr_9 [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_2] [i_0]) : var_3)) : var_3)) : ((((((!(arr_4 [i_4])))) < (arr_8 [i_3 + 1] [2] [10])))));
                        arr_14 [1] [4] [i_3] [i_0] [i_3] [i_3] = ((+((((arr_7 [i_3 + 3]) < (arr_7 [i_3 + 2]))))));
                        var_20 = var_5;
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_19 [6] [i_0] = ((120 ? 238 : -10));
            var_21 = (min(var_21, ((((((arr_15 [i_0] [i_0] [6]) < (arr_5 [i_0] [2]))) ? var_9 : ((((((var_1 + (arr_6 [i_5]))) >= ((((arr_8 [i_0] [i_5] [i_0]) && var_0))))))))))));
            var_22 -= ((!(((20 | (arr_5 [6] [6]))))));
        }
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        arr_22 [i_6] = var_7;
        arr_23 [i_6] = (arr_20 [i_6] [4]);
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            {
                var_23 = (((max(var_6, var_10))));

                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_24 = (min(var_24, ((((arr_29 [i_8 - 2] [i_8 + 3] [i_9]) + ((~(arr_29 [i_8 + 1] [i_8 + 1] [i_9]))))))));
                    arr_33 [i_9] [i_8 + 1] [i_7] = (((((var_7 || (arr_20 [i_8 - 1] [i_8 - 1])))) >= (((arr_20 [i_8 - 1] [i_8 - 1]) ? var_7 : (arr_20 [i_8 - 1] [i_8 - 1])))));
                    var_25 = (min(var_25, var_11));
                    var_26 ^= ((((((arr_28 [i_8 + 2]) ? ((((arr_32 [i_9] [i_8 - 2] [i_7]) || 29822))) : 1765622971))) ? ((((arr_26 [i_9] [i_8]) + ((var_7 | (arr_30 [i_8 - 2] [i_8 - 1])))))) : (690482515 + 65531)));
                }
                arr_34 [9] [i_8 + 2] = var_5;
            }
        }
    }
    #pragma endscop
}
