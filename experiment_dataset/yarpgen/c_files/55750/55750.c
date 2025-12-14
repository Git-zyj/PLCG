/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 159;
    var_21 = (max(var_21, (((!(((((var_4 ? var_2 : var_14)) ^ (!var_19)))))))));
    var_22 = ((!(((-6001842904148461055 ? var_15 : (110 >= var_12))))));
    var_23 |= var_13;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_24 = (min(var_24, 17027842726018474516));
        var_25 = var_14;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_26 = (((((arr_2 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_1 [i_1])))) ? ((((~(arr_1 [i_1]))) - (~var_10))) : var_0);
        var_27 = var_7;

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_28 = (max(var_28, (((max(var_8, ((max(var_11, var_13)))))))));
            arr_8 [i_1] [i_1] [i_2] = (((arr_2 [i_1] [i_2]) ? var_6 : var_2));
        }
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            var_29 = (min(-2764, (max(9095958023016979890, 17027842726018474503))));
            var_30 = (((((((var_8 != (arr_3 [i_3]))) ? (var_5 && var_7) : (((arr_10 [i_1] [i_3] [i_3]) ? -9 : (arr_5 [i_3] [i_3])))))) * (max((min((arr_6 [i_1] [i_3]), (arr_9 [i_1] [i_1] [0]))), (~var_0)))));
            arr_11 [i_1] [i_1] [i_3] = -428306994;
            var_31 = (max(38968, var_13));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_32 = ((((min(17027842726018474516, (arr_13 [i_1] [i_4])))) || ((((((~(arr_2 [i_1] [i_4])))) ? (arr_2 [i_1] [i_4]) : ((max((arr_6 [i_1] [i_4]), (arr_2 [i_1] [i_4])))))))));
            arr_14 [i_1] = ((max(var_8, (arr_0 [i_4]))));
            var_33 = (!var_7);
            var_34 += -9;
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_35 *= -56;
            var_36 = (((((~var_2) ? (var_17 ^ 9223372036854775807) : 37))) ? (((arr_2 [i_1] [i_1]) ? (arr_6 [i_1] [i_5]) : (max((arr_7 [i_1] [i_1] [i_1]), var_11)))) : (arr_3 [i_1]));
            var_37 = (max(var_37, (min((((16 ? var_5 : (arr_0 [i_1])))), (((~(arr_15 [i_1]))))))));
        }
        arr_18 [i_1] = (arr_2 [i_1] [i_1]);
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_38 |= (max((((!(arr_10 [i_6] [i_6] [i_6])))), (((((arr_10 [i_6] [i_6] [i_6]) + 2147483647)) << (((((arr_10 [i_6] [i_6] [i_6]) + 1685981978)) - 26))))));
        var_39 = (max(var_39, ((min(-var_5, (arr_5 [i_6] [6]))))));
        arr_22 [i_6] [i_6] = -1;
    }
    #pragma endscop
}
