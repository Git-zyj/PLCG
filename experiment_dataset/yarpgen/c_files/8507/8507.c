/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((((!(((69 ? -22769 : 7502359501217470930))))) ? (min((arr_1 [i_0] [i_0]), var_1)) : (((28 != ((18446744073709551588 ? 4074641162997211698 : (-2147483647 - 1))))))));
        var_18 = (max(var_18, (((3773 ? (((arr_0 [10]) + (arr_0 [2]))) : ((((max(1, 32761))))))))));
    }
    var_19 = (max((min(-18446744073709551603, (var_1 >= -1441117368746235629))), (((~(max(59676, -2147483637)))))));

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = ((!((min(((-1625542194 ? (arr_3 [i_1]) : var_11)), ((((-127 - 1) || (arr_3 [i_1])))))))));
        arr_5 [i_1] = (max(114, ((max(var_4, (((!(arr_2 [i_1])))))))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_1] = (min(61762, 18446744073709551577));

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_21 = -3213;
                var_22 -= ((!(((~(arr_3 [i_3]))))));
                arr_14 [6] [i_2] [2] [i_3] = min(((((var_7 && (arr_4 [i_1]))))), 18659);
                var_23 = var_13;
            }
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_24 |= 1;
            var_25 = (min(((max(var_8, 2613353773112553604))), (((min(var_11, (arr_6 [18] [i_1] [i_4])))))));
            var_26 -= ((!((max((arr_3 [i_4]), (arr_3 [i_1]))))));
            var_27 = (((((arr_7 [i_1] [i_1] [i_4]) == (arr_7 [i_1] [i_1] [i_4]))) ? (((arr_13 [i_4]) ? (arr_7 [i_1] [i_1] [i_4]) : (arr_15 [i_1]))) : (~1)));
        }
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            var_28 ^= (min((arr_11 [14] [i_1]), (((((arr_13 [i_5 - 1]) + 2147483647)) >> (3769 - 3761)))));
            var_29 = (max(-3773, (max(((18659 ? 1152921500311879680 : 25010)), (((~(arr_13 [i_1]))))))));
            var_30 = (min(var_30, ((max((((arr_6 [i_5 - 2] [i_5] [i_5 - 2]) ? (arr_6 [i_5 - 3] [i_5] [i_5 - 3]) : (arr_6 [i_5 - 3] [i_5 - 2] [i_5 - 2]))), (arr_6 [i_5 + 1] [i_5] [i_5 - 2]))))));
        }
    }
    var_31 = (!var_0);
    #pragma endscop
}
