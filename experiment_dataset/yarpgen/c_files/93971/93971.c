/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((min((max(var_5, var_5)), var_18)))));
    var_20 -= (((~(min(var_7, var_6)))) == -var_3);
    var_21 = var_11;
    var_22 += (((((var_15 && var_18) ? -var_9 : var_13)) << (var_5 + 32398)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_23 = ((1931576787603207700 >> (var_12 - 649150175)));
        var_24 = (min(var_24, (((((((arr_2 [i_0]) & (arr_0 [i_0] [i_0])))) ? ((~(((arr_1 [i_0] [i_0]) % (arr_0 [i_0] [i_0]))))) : ((((((var_16 ? var_3 : var_18))) ? ((~(arr_2 [i_0]))) : var_3))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_25 = ((-((((((arr_1 [i_1] [i_1]) ? var_14 : var_0))) ? (arr_1 [i_1] [i_1]) : (arr_2 [1])))));
        var_26 |= (arr_3 [i_1] [i_1]);
        var_27 = (arr_4 [i_1]);

        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_28 = (var_14 && -var_0);
            arr_7 [i_1] [i_1] [i_1] = (arr_5 [i_2] [i_1]);
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_29 = ((!((((((var_9 / (arr_1 [i_3] [i_1])))) ? (arr_10 [i_1]) : ((-(arr_10 [1]))))))));
            var_30 = var_10;
            arr_12 [i_3] [i_1] [i_1] = ((((((arr_5 [i_1] [i_1]) | (arr_5 [8] [i_3])))) ? (((var_17 != ((-(arr_0 [i_1] [i_1])))))) : (arr_2 [3])));
            arr_13 [i_3] [i_3] [i_3] = (((((~((1402676316748507176 ? 77 : 4294967295))))) ? var_10 : var_6));
            arr_14 [i_3] = (arr_6 [i_1] [i_1] [i_3]);
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                arr_19 [i_5] [i_5] [i_1] = (min(((max(((!(arr_11 [i_1] [4] [i_5]))), ((var_15 || (arr_18 [i_1] [i_1] [i_1])))))), (((arr_5 [i_1] [i_5]) ^ ((~(arr_11 [4] [i_4] [i_1])))))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_31 &= (arr_16 [1] [1]);
                            arr_25 [i_1] [i_5] [i_5] [i_6] [i_7] = ((((((((var_13 ? (arr_17 [i_4] [i_4] [i_6 + 2]) : var_8))) ? ((var_10 ? var_1 : var_5)) : -var_12))) ? ((-(arr_23 [i_5] [i_5] [i_6] [i_6] [i_5] [i_1] [i_5]))) : (min((arr_24 [i_5] [i_4] [i_4 + 1] [i_6 + 1] [i_7] [i_5] [i_1]), (((arr_15 [i_7] [i_6]) ? var_10 : (arr_3 [i_4] [i_1])))))));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
            {
                arr_28 [i_8] [i_4] [i_1] = var_0;
                arr_29 [i_1] [i_1] [i_1] &= (var_10 & ((~(arr_16 [3] [i_1]))));
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
            {
                var_32 = ((~(arr_6 [i_1] [i_4] [i_9])));
                var_33 = (arr_23 [i_1] [0] [0] [0] [i_9] [i_9] [i_9]);
                var_34 = (arr_5 [i_4] [i_1]);
            }
            arr_32 [i_1] [i_1] [i_4 - 1] = (min(((min(var_1, (((var_7 ? (arr_15 [i_1] [i_4 - 1]) : (arr_17 [i_1] [i_4 + 1] [3]))))))), ((((((((arr_3 [i_1] [i_1]) + 2147483647)) << (var_15 - 1804)))) ? (((arr_16 [i_4] [i_1]) ? (arr_26 [i_1] [i_1] [i_4 + 1]) : (arr_21 [i_1]))) : (((~(arr_2 [i_1]))))))));
        }
    }
    #pragma endscop
}
