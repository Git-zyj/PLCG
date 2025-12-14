/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3769605008061151870;
    var_13 = (min(var_13, 3769605008061151884));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (!var_6);

        for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_14 ^= ((!(var_9 / var_9)));
            var_15 = 15843;
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_16 ^= (((((65249 ? var_2 : (arr_3 [i_0 + 1])))) ? (!var_7) : (~14677139065648399745)));

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                var_17 *= (((arr_9 [i_3 - 1] [i_3 - 1]) ? (arr_9 [i_0] [i_0 + 1]) : 14677139065648399745));

                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    arr_13 [i_0] [i_2] [i_3] [i_3] = (((!var_3) ? ((((arr_12 [i_0 - 1] [11] [i_3] [i_4] [i_4] [i_3]) ? var_0 : 65249))) : (arr_0 [i_0])));
                    var_18 = (((!18446744073709551615) <= var_4));
                    var_19 = ((((arr_8 [i_2 - 1] [i_3]) * (arr_0 [i_3 - 1]))) / 127427895);
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_20 ^= ((~(arr_5 [i_0])));
                    var_21 = (max(var_21, (((14677139065648399732 ? (var_9 / var_10) : var_5)))));
                }
                var_22 = (max(var_22, ((((var_2 / var_5) ? var_9 : ((var_6 << (15843 - 15832))))))));
            }
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_23 |= (arr_9 [i_6] [i_0]);
            arr_20 [i_0] [i_6] [i_6] = (arr_0 [i_6]);
        }
        var_24 = (max(var_24, (arr_15 [i_0] [i_0 + 1])));
        var_25 = (((((arr_7 [i_0] [i_0 - 1] [i_0]) ? (arr_12 [i_0] [i_0] [6] [i_0] [i_0 + 1] [i_0]) : 309)) + ((~(arr_8 [i_0] [i_0])))));
    }
    for (int i_7 = 2; i_7 < 12;i_7 += 1)
    {
        var_26 = (min((!65249), 2147483647));
        arr_24 [14] [i_7] = (~((((arr_22 [i_7] [i_7]) ? var_5 : 8))));
        var_27 ^= (8189 || 13241197505522550228);
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_28 = -2147483647;
        arr_27 [i_8] [i_8] = var_5;
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    var_29 ^= arr_28 [i_8] [i_9 + 1] [i_10];
                    var_30 = (min(var_30, ((-(max(var_7, ((var_3 ? 61500 : 0))))))));
                }
            }
        }
    }
    var_31 ^= 3769605008061151855;
    #pragma endscop
}
