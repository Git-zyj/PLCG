/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((~(~var_8))) ^ var_6));
    var_14 = (var_0 ^ var_8);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [0] = ((((((min((arr_1 [i_0 + 1]), var_11))) ? (min(-32761, 13125121149798616910)) : var_2)) ^ ((20 & (((var_2 ? (arr_1 [1]) : var_1)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (~((13125121149798616894 ? 5321622923910934702 : 31208)));
                    var_15 = (arr_7 [10] [i_0 + 1] [i_2] [i_2]);
                    var_16 = (min(var_16, ((((~var_11) > ((min((arr_1 [i_0 + 1]), (arr_4 [i_0 + 1] [i_0 + 1])))))))));
                }
            }
        }
        var_17 = -3709;

        for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_18 += (max(((((min(var_6, (arr_12 [i_3])))) ? 8347901385777570635 : var_6)), (~1)));
            arr_13 [i_0] [i_0] [1] = ((13 ^ (((((min(var_3, (arr_11 [i_0] [i_3 + 1])))) ? (var_3 - 1798817038) : (-1988577494 < var_1))))));

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_16 [2] [i_3] [i_0] [12] = (15 ^ -2147483633);
                var_19 = (min((min((arr_4 [i_0 + 1] [i_3 + 3]), 18446744073709551604)), 4294967286));
                var_20 = (min(var_20, (((!(arr_11 [i_3 - 1] [i_0 + 1]))))));
                var_21 = (min(((((158 ^ var_8) ? ((var_11 ? (arr_3 [i_0] [i_0]) : var_6)) : 1798817059))), (((arr_3 [i_0] [i_0]) ? var_11 : (max(var_4, 910126358))))));
                var_22 = ((((((max(243, (arr_3 [i_0] [i_0]))))) & (arr_1 [i_0 - 1]))));
            }
            var_23 = ((min((arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_3 - 1]), (arr_1 [i_0 + 1]))));
            arr_17 [i_0] [i_3] = (-(arr_8 [i_0] [i_0 + 1] [i_0 - 1]));
        }
        for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_24 &= (min((((arr_8 [5] [i_5] [5]) & (arr_12 [i_5]))), ((((arr_0 [i_5] [i_5]) ^ 27763)))));
            var_25 = ((((max((arr_12 [i_0]), ((min((arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_5 + 3]), var_3)))))) < (((~-2147483633) ? 2147483637 : 1))));
            arr_21 [i_0] [6] [i_0] = max(((((arr_7 [i_0 + 1] [i_0 - 1] [i_5 + 3] [i_5 - 1]) % 252))), ((~((1 ? var_5 : 3691)))));
            arr_22 [i_0] [i_0] = (((!var_1) && (((var_0 ? ((-(arr_19 [i_0]))) : (((var_1 ? var_4 : (arr_6 [i_0] [i_0 + 1] [i_0])))))))));
        }
        for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
        {
            arr_26 [i_0] = (((((((max((arr_15 [i_0] [i_0] [i_6 - 1] [i_6]), (arr_7 [i_0] [i_6 + 2] [i_6 + 1] [i_6])))) ? (18446744073709551607 == 2141627225) : (~4294967295)))) ? ((~(((arr_7 [i_0 + 1] [i_6] [i_6] [i_0]) % var_9)))) : ((((min(4294967271, -1554774601))) ? ((min(1, var_2))) : (var_4 * var_11)))));
            arr_27 [i_6] |= ((((((arr_20 [i_0] [i_0] [i_6]) ? var_8 : var_0)))) | (((arr_23 [i_0] [8] [i_6]) ? -var_11 : var_11)));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                {
                    var_26 = (min(var_26, (~17475021342092662597)));
                    var_27 = (max(var_27, 1796764151));
                }
            }
        }
    }
    var_28 = ((var_8 ? var_10 : var_9));
    #pragma endscop
}
