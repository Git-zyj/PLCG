/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((237 != (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_15))));
        arr_3 [14] = 237;
        var_19 = ((((min((arr_1 [i_0] [i_0]), (((arr_1 [i_0] [13]) ? (arr_0 [i_0]) : -1))))) ? 255 : ((~(max((arr_0 [7]), (arr_2 [i_0] [4])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_7 [14] = (!-952901277);
        arr_8 [i_1] = (((arr_4 [i_1]) / (134217727 - 99)));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_11 [8] [5] = ((-115 ? ((-4221 - (arr_10 [i_2]))) : (((min((arr_4 [7]), (arr_9 [i_2])))))));
        arr_12 [i_2] = 8;
        var_20 *= (!4226);
    }
    var_21 = var_17;
    var_22 += 3250559197;

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_15 [1] = (max((arr_10 [i_3]), ((6998186997319120868 ? (arr_6 [17] [17]) : (arr_0 [6])))));
        arr_16 [14] = (((((111 <= 1) == (arr_1 [i_3] [i_3]))) ? (max((!1), 1044408098)) : (((((arr_6 [i_3] [i_3]) != 3))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_23 = (min(var_23, (((arr_17 [i_4] [i_4]) == (((!(arr_17 [i_4] [9]))))))));
        arr_19 [i_4] = (max(((-21790233 ? 32764 : (((!(arr_17 [i_4] [16])))))), (arr_18 [i_4])));
    }
    var_24 = (var_2 <= 32764);
    #pragma endscop
}
