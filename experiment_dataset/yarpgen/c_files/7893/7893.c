/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((!((min(var_5, (((21983 ? var_0 : (-9223372036854775807 - 1))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((21983 ? ((var_0 - (arr_1 [i_1] [20]))) : ((var_0 ? var_6 : (-127 - 1))))) ^ ((-(arr_4 [i_0] [i_1] [i_1]))))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_17 = ((((((-2147483647 - 1) > (min(var_14, var_10))))) != ((~((1153123251760066098 ? var_2 : -174316158))))));
                    var_18 = 43553;
                    var_19 = (max((((65520 != (((-127 - 1) / -3914))))), (max((arr_2 [i_0 - 1]), (-127 - 1)))));
                    var_20 = ((((((min(9962500411208220040, var_1))) ? ((var_9 - (arr_1 [i_0 - 1] [i_2]))) : (arr_2 [i_0 - 1]))) != ((((((min((-9223372036854775807 - 1), 0))) != (((arr_3 [i_0]) ? 21983 : var_5))))))));
                    var_21 = ((((((((0 ? 1787 : 63762))) >= (((arr_2 [i_2]) - (arr_3 [i_1]))))))) | (min((((6256635566566988878 ? (arr_4 [i_0] [14] [i_2]) : var_4))), (~3597823296098432174))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_22 = (-2147483647 % 251);
                    var_23 = (arr_8 [i_0 + 1] [i_0 - 1] [i_3] [i_3]);
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_4] [i_4] [i_4] = ((((!3597823296098432180) != ((((arr_0 [i_1]) > var_4))))));

                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        var_24 = 1920;
                        arr_19 [i_0] [14] [i_4] = ((2147483647 > ((max((arr_17 [i_5] [i_4] [i_0 + 1] [i_0 - 1] [i_0 - 1]), (arr_17 [i_0 + 1] [3] [i_0 + 1] [i_0 + 2] [14]))))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_25 = ((1784 > (max(-1153123251760066068, 0))));
                        arr_23 [i_6] [i_6] [i_6] [i_0] = (~430913931076903451);
                        var_26 = ((!((min((min(3270045575, (arr_3 [i_1]))), (~247))))));
                    }
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    var_27 = min((((11538087982641006793 == (max(17829503339362623863, -649699746))))), (arr_17 [i_0] [i_1] [i_1] [i_1] [i_1]));
                    var_28 ^= ((1455529409 ? ((((min(var_2, var_8))) ? (arr_16 [i_0 - 1] [i_0]) : (!var_1))) : ((~(arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0])))));
                    var_29 = (min((((9962500411208220033 ? (arr_20 [i_0] [i_0 - 1] [i_0 - 1] [i_7]) : var_6))), (min(var_14, (arr_6 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
