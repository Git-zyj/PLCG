/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!((((((1 ? (arr_0 [i_0]) : 390137617))) ? (arr_0 [i_0]) : ((20753 ? 879 : 861))))));
        var_18 = (var_13 & var_6);
        arr_4 [i_0] = (arr_1 [i_0]);
        var_19 = (max(30477, 81));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((11674 ? 902 : -30485));
        arr_8 [i_1] = ((max((64657 * var_17), (arr_6 [5]))));
        arr_9 [i_1] [i_1] = (64675 || -1062);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = (((max(((((arr_1 [6]) <= (arr_6 [i_2])))), (var_0 - var_2))) / ((min((arr_1 [1]), (32767 ^ var_10))))));
        var_20 = (min(var_20, (((var_2 ? (((arr_6 [i_2]) ? (arr_6 [i_2]) : var_15)) : ((831 ? -483 : -4472286216143130722)))))));
    }
    var_21 = (min(var_21, var_13));
    var_22 = var_15;
    #pragma endscop
}
