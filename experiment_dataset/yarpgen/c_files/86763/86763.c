/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((((-((min(var_4, var_2)))))) ? (((var_1 ? ((64342011143837567 ? var_16 : var_3)) : (max(var_9, var_11))))) : (max((var_19 % var_15), (var_17 - var_13)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 *= var_2;
        arr_2 [i_0] [i_0] = var_8;
        arr_3 [i_0] = var_14;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_11 [i_1] [i_1] = (!-var_17);
            var_22 = 11;
            var_23 = (~((-(arr_1 [i_1] [0]))));
            var_24 += (arr_1 [i_2] [i_2]);
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_25 = ((((((arr_16 [i_1] [i_1] [i_1] [0]) ? (arr_4 [i_4] [i_4]) : var_5))) ? ((11 ? (arr_8 [6] [6] [i_4]) : 64342011143837576)) : (arr_6 [i_1 - 1])));
                arr_18 [1] [i_1] [i_3] [i_1] = -135;
                var_26 &= 1912;
                arr_19 [i_4] = (arr_13 [i_1] [i_1 + 1]);
            }
            var_27 = -64342011143837567;
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_28 = ((-1941098522 ? 1155173720 : 1967508893));
            arr_23 [i_1] [i_1] [i_1] = (((arr_14 [i_1] [i_5] [i_1 - 2]) ? var_1 : var_15));
            var_29 += (((((var_9 ? 6750694089312061561 : var_14))) && (arr_12 [i_1 - 3] [i_1 - 2] [i_1 - 3])));
        }
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                arr_30 [i_1] [i_7] = (var_10 ? (arr_27 [i_1] [i_1 + 1] [i_7]) : (arr_14 [i_1] [i_1 - 2] [i_1]));
                arr_31 [i_6] = ((~((~(arr_22 [i_1])))));
            }
            var_30 = 255;
        }

        for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
        {
            arr_35 [i_8] = ((!(~var_17)));
            arr_36 [i_1] [i_1] [i_1] = 64342011143837567;
        }
        for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
        {
            arr_39 [i_1] [i_9] [i_9] = arr_12 [i_1] [i_1] [i_1];
            var_31 = (((((var_2 ? var_19 : var_5))) ? (((arr_29 [i_1]) ? 64342011143837557 : 252)) : var_1));
        }
        for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
        {
            var_32 = (min(var_32, (arr_37 [i_10 + 2] [i_10])));
            var_33 = ((-((13030013266569548082 ? (arr_41 [4] [i_1]) : (arr_41 [1] [i_10])))));
            arr_42 [i_1] = ((57776 ? 1389718895 : (arr_17 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1])));
            arr_43 [i_1] [i_10] = (((arr_17 [i_1] [i_1] [i_10] [i_10]) ? (~28116) : 1134408180));
        }
        for (int i_11 = 2; i_11 < 9;i_11 += 1) /* same iter space */
        {
            arr_47 [i_1] [i_1] = (((arr_14 [i_1] [i_1] [i_11]) ? (arr_29 [i_1 - 2]) : (!var_6)));
            arr_48 [i_1] [i_1] [i_1] = (((9223372036854775807 <= -126) >> ((((var_3 ? var_9 : 64342011143837562)) - 64342011143837552))));
            arr_49 [11] = (-8351002571455933376 > 0);
        }
    }
    var_34 = min((((~(~4499)))), 4153174033);
    var_35 = (min((((-((max(63741, 213)))))), var_1));
    #pragma endscop
}
