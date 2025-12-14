/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = (min((((max(var_5, 18446744073709551615)) > (((var_9 ? var_12 : 3249382338))))), (var_6 > var_11)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_22 = (max(var_22, ((((((((min(var_16, (arr_0 [i_0] [i_0]))) > 4294967295)))) - (((((var_4 >> (var_10 + 84)))) ? (((min(var_9, var_15)))) : ((var_3 ? (arr_0 [i_0] [i_0]) : var_9)))))))));
        var_23 = (min(var_23, 509521110));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_24 = ((var_15 ? (min((((arr_5 [i_1]) ? var_12 : var_4)), var_12)) : (((((arr_5 [i_1]) && var_9))))));

        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_25 = (max(((min(var_7, var_9))), (min(var_12, var_13))));
            var_26 = var_13;
            var_27 = var_9;
            var_28 = (max((min(var_19, (min(var_13, var_1)))), ((min(((509521127 / (arr_4 [i_2]))), 509521115)))));
            arr_9 [i_1] [i_2 + 1] = ((((var_11 / 369367020) ? (638619115 - var_3) : var_2)) - (((((-(arr_4 [i_1])))) / (((arr_8 [i_2] [i_2]) ? 12616443254828068776 : var_12)))));
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_29 = (min(((((var_10 > var_12) >> (min(1724106870, (arr_13 [i_1] [i_3])))))), (min((4177866813 - var_12), var_2))));
            var_30 -= (min((((var_2 ? (((max(var_14, 245)))) : (max(11, (arr_6 [i_1] [i_1] [i_1])))))), (min(((509521141 ? (arr_4 [9]) : var_8)), ((13908098857521436744 ? var_1 : var_18))))));

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_31 = (((((7 ? var_12 : (((min(3, var_15))))))) ? (((var_2 ? (max(var_19, var_0)) : (var_15 > 1564835313)))) : (min(var_5, ((max(3785446154, var_16)))))));
                var_32 ^= ((((((var_16 && 47) ? ((((var_12 && (arr_13 [i_1] [i_1]))))) : (min(var_11, var_0))))) ? (((((var_0 >> (((arr_16 [i_1] [i_1] [i_4]) + 49))))))) : (((min(var_5, 5746333509086010672)) >> (((max((arr_5 [i_1]), 1511426036)) - 18112479980648596356))))));
                var_33 = (((min(((2344276055 ? var_5 : var_15)), 246))) ? var_11 : (arr_7 [11] [i_3 + 1] [11]));
            }
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_34 |= ((((min((arr_7 [i_1] [i_5 - 1] [i_5]), (arr_14 [i_1] [i_5 + 1] [i_5 - 1])))) ? (((min((arr_10 [i_1] [i_5 + 1] [i_5 + 1]), (arr_17 [i_1] [i_5 + 1]))))) : ((((var_15 ? 117100493 : (arr_13 [i_1] [16]))) >> (((arr_16 [i_1] [i_1] [i_5]) + 34))))));
            var_35 = (min((min(7350864708712749295, var_14)), (min(((min(var_18, -92))), (max(2344276055, 4))))));
        }
        var_36 |= (((((((min(var_11, 2344276039))) + (min(18446744073709551615, 71))))) ? (min((((var_13 ? var_15 : -3255369840199557796))), var_4)) : (max((var_3 - var_6), (max(var_19, 18446744073709551598))))));
        var_37 = (((((min(var_1, var_12))) && var_19)));
    }
    var_38 = ((((min((var_6 ^ 72057594037927680), (var_1 ^ var_12)))) ? (min(var_3, ((var_13 ? 1193688974440673098 : 4)))) : (min((6950346936125550046 & 2344276065), ((min(var_17, 3785446168)))))));
    #pragma endscop
}
