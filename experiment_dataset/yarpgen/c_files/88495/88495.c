/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((var_13 ? ((((!(arr_1 [i_0] [i_0]))))) : (min(((((arr_0 [i_0]) + var_1))), 3092428128782325612))));
        var_19 = -16065;
        var_20 = 3092428128782325606;
        var_21 += var_3;
        var_22 |= (min(55347, 7));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_23 = ((18446744073709551603 ? 0 : (((((8548608312474829397 ? 20 : -32767))) ? 84 : (arr_3 [i_1 - 1] [i_1 - 1])))));
        var_24 = (arr_5 [i_1 + 1]);
    }
    var_25 += var_2;

    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_26 = (max(var_26, (((((((var_14 ? var_4 : (arr_4 [i_2 - 1])))) ? ((16368 ? 17 : 17)) : ((((arr_4 [i_2]) + 1)))))))));
        var_27 = ((((((arr_3 [i_2 - 1] [i_2 - 1]) ? (!48853) : (arr_4 [i_2 - 1])))) ? -3717615926 : (max((arr_4 [i_2]), (min((-32767 - 1), 15551551482832216870))))));
        var_28 = ((+((min((arr_5 [i_2]), 172)))));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_29 = -var_11;
        var_30 ^= (arr_7 [6]);
        arr_10 [i_3] = ((min(1, (arr_8 [i_3 - 1]))));
    }
    var_31 = var_2;
    var_32 |= var_15;
    #pragma endscop
}
