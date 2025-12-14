/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_5 ? (-32767 - 1) : var_18));
    var_21 = (((((17 + ((max(-12, 28198)))))) ? 32734 : -1739213950));
    var_22 = (~308329363);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_23 = arr_0 [i_0];
        arr_2 [i_0] = (((((~(arr_0 [i_0])))) ? (((var_18 || (arr_1 [i_0] [i_0])))) : ((var_15 ? var_12 : -1))));
        var_24 = (min(var_24, 10420965270852889278));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_25 = ((!((((57105 % -31904) + 28198)))));
            arr_8 [i_1] [i_1] [i_2] = var_18;
            var_26 -= (((-(arr_6 [i_2]))));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_27 = ((((-(arr_10 [i_1] [i_3] [i_3]))) <= -308329364));
            var_28 = (((arr_7 [i_1] [i_1] [i_1]) ? (((arr_10 [i_3] [i_1] [i_1]) & -1)) : 1));
            var_29 *= (arr_5 [i_1]);
        }

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_30 = (min(-56, (min((var_0 % var_16), (arr_7 [8] [i_4] [i_4])))));
            var_31 &= (((((max(1, 32757))) / -308329376)) * ((-308329382 / ((62567 ? var_14 : var_4)))));
            arr_14 [i_1] = ((!(((107 ? (arr_7 [i_1] [i_4] [i_4]) : (arr_7 [i_1] [i_1] [i_1]))))));
        }
        var_32 = (max(var_32, ((((~(arr_9 [i_1])))))));
        var_33 = ((((((-96 || 423561486) ? -308329344 : -308329339))) ? (((arr_3 [i_1]) ? (arr_4 [i_1]) : (max((arr_13 [i_1]), var_18)))) : (((var_12 ? (arr_11 [i_1] [i_1] [i_1]) : var_9)))));
        var_34 = ((-(min((arr_3 [i_1]), ((103 ? var_0 : var_14))))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_35 = 1;
        var_36 = (((arr_13 [i_5]) ? (((((-308329393 ? (arr_5 [i_5]) : 3523))) ? ((1 ? 1 : 285823094)) : 308329317)) : (max((((arr_0 [i_5]) ? var_1 : -343694333)), -308329375))));
        var_37 = var_0;
    }
    var_38 = (max(var_38, var_7));
    #pragma endscop
}
