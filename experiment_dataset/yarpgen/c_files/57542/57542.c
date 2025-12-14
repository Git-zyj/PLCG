/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = var_7;
        arr_4 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_9 [i_1 - 1] = (((arr_7 [i_1 - 2] [i_1 - 2]) * (arr_7 [i_1 - 2] [i_1 - 2])));
        arr_10 [i_1] = (((arr_5 [i_1] [i_1]) >= var_10));
        var_18 = (((arr_5 [i_1 + 1] [i_1 + 1]) <= (((arr_7 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : -4))));
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_19 = (((((((var_0 ? var_0 : 6876528386642740725))) ? var_1 : (arr_6 [i_2] [i_2]))) | ((((var_12 < ((min((arr_7 [i_2] [i_2]), var_7)))))))));
        arr_13 [i_2] &= (((((arr_5 [i_2] [i_2]) + ((-(arr_5 [i_2] [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_16 [i_3] = ((((((((max(var_0, (arr_14 [i_3])))) >= var_8)))) != (arr_15 [i_3] [i_3])));
        arr_17 [i_3] = (max((min((max(var_13, var_4)), ((((arr_8 [i_3]) % (arr_6 [i_3] [i_3])))))), (arr_5 [i_3] [i_3])));
    }

    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_20 = (arr_1 [i_4]);
        arr_20 [i_4] = ((arr_2 [i_4]) * (((((var_12 ? (arr_8 [i_4 + 1]) : (arr_7 [i_4] [i_4])))) ? (arr_15 [i_4] [i_4]) : (max(2255194092, (arr_14 [i_4]))))));
        var_21 = ((!((var_11 && ((!(arr_6 [i_4] [i_4])))))));
    }
    #pragma endscop
}
