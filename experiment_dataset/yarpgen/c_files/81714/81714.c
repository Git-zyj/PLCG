/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((var_15 ? 1 : ((var_12 ? -4434031184166107425 : (15 && 4434031184166107441))))))));
    var_21 = (min(var_21, 18446744073709551615));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0 - 1] = ((-(((arr_1 [i_0 + 3]) / (((-(arr_3 [21] [i_0 + 1]))))))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_1] = (((arr_1 [i_1 - 2]) >> (-36028797018832896 + 36028797018832904)));
            arr_8 [i_1] [i_1] = -4434031184166107416;
            var_22 = 36028797018832879;
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_23 = (min((((~var_14) ? 12 : 49)), 219));
            var_24 |= (arr_3 [i_0 - 1] [i_0 + 1]);
            var_25 += 5;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_26 -= ((min(var_0, (max((arr_12 [i_0] [i_0] [19]), (arr_0 [i_0] [i_3]))))));
            arr_14 [i_0] = (76 + 36028797018832896);
            arr_15 [i_0] = ((536870911 ? 196 : 0));
            var_27 = 32767;
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_28 = (((arr_12 [i_4] [i_4] [1]) ? (arr_11 [i_4] [i_4] [i_4]) : 1));

        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            var_29 = 1;
            var_30 = (!36028797018832896);
            arr_22 [i_4] [i_4] = (((arr_2 [i_5 + 1]) ? ((((arr_2 [i_4]) + 1388765423))) : ((219 ? var_10 : 9223372036854775804))));
            arr_23 [i_5] [i_5] [i_4] = -26084;
            arr_24 [i_4] [i_4] [i_4] = -36028797018832875;
        }
    }
    var_31 = (max(((min((!0), 9))), -var_4));
    #pragma endscop
}
