/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_15 = (((((~(arr_3 [i_0 - 3])))) && ((max((arr_3 [i_0 - 1]), var_8)))));
        arr_4 [4] [4] &= (max((min((((~(arr_3 [i_0])))), (min(0, 4284785506)))), (!var_13)));

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_16 |= (((((((max(7, (arr_5 [6] [i_1])))) ? 4284785518 : (var_6 / var_3)))) ? (arr_3 [i_0]) : (((arr_3 [i_0 - 3]) >> (((arr_3 [i_0 - 2]) - 40))))));
            var_17 ^= (max(((((((arr_2 [i_1]) * (arr_3 [i_0])))) ? (max(213, 10181796)) : (var_7 / var_0))), ((max(((var_8 ? var_7 : (arr_0 [i_0]))), (((arr_5 [4] [i_1]) << var_8)))))));
            var_18 = ((((max((arr_2 [i_0]), var_8))) ? (var_12 - var_7) : (((arr_6 [i_0 + 2] [i_0] [i_0 + 2]) ? (arr_6 [i_0 - 2] [i_0] [i_0 + 1]) : var_10))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_19 = (max((((((10181790 ? 1 : var_4))) ? (-9223372036854775807 - 1) : var_10)), (arr_6 [11] [i_0] [i_0])));
            var_20 = (((((((((arr_3 [i_2]) == var_8)))) != (var_12 & var_11))) ? (((((max(var_8, 252))) | (var_3 & -125)))) : (max(19718, var_0))));
        }
    }
    for (int i_3 = 3; i_3 < 24;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_21 = (((arr_11 [i_3 + 1]) >= (min(var_1, (arr_14 [i_3 - 1] [i_4])))));
            var_22 = ((((min(126, 8183905817808607041))) && ((((((14680064 ? (arr_10 [i_3 - 3] [i_4]) : var_3))) ? ((((var_2 + 2147483647) << (((var_2 + 87) - 12))))) : ((var_8 ? (arr_12 [i_3] [i_4] [i_4]) : var_0)))))));
            var_23 = ((((max(9223372036854775807, (var_8 && var_0)))) ? (((var_10 >= var_6) ? var_0 : var_6)) : ((max((((14234783717084225216 ? var_12 : 7779))), (((arr_12 [i_3] [i_3] [i_3]) ? var_0 : var_13)))))));
        }
        var_24 = (max((((-((var_9 ? var_4 : var_3))))), (((9223372036854775807 ? 1 : var_0)))));
        var_25 = (arr_11 [7]);
    }
    for (int i_5 = 3; i_5 < 24;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5 - 2] = ((((min(((var_5 ? 338 : 4284785506)), 193))) ? -253 : ((min((!855647092), 1)))));
        arr_20 [i_5] = (max(((((var_6 + var_1) <= (arr_17 [i_5 - 3])))), var_12));
        var_26 = (max(var_26, (((1 / (max((arr_12 [19] [19] [10]), (var_7 & 113))))))));
        var_27 = (((arr_11 [i_5 - 2]) * ((((!((max((arr_11 [i_5]), 1)))))))));
        var_28 = (((((+(((arr_10 [i_5 - 2] [21]) + var_10))))) ? ((-68 ? -127 : (max((arr_15 [i_5]), -2055282741)))) : ((-(arr_15 [i_5])))));
    }
    for (int i_6 = 3; i_6 < 24;i_6 += 1) /* same iter space */
    {
        arr_23 [0] = ((((max((arr_22 [4]), (arr_22 [i_6 - 1])))) ? ((((((arr_10 [i_6] [10]) + 1))) ? var_7 : (~var_9))) : ((((!0) ? -20966 : -var_8)))));
        var_29 = (((arr_16 [i_6 + 1]) ? var_0 : (arr_14 [i_6] [i_6])));
    }
    #pragma endscop
}
