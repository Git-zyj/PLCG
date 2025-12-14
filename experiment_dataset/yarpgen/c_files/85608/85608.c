/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (max((((min(var_7, var_3)) * (!46))), ((1 ? ((max(var_8, -26))) : var_9))));
    var_12 = (min(-12726, var_9));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 = ((0 ? (((!(arr_0 [i_0 + 3])))) : (((-127 - 1) ? -26 : (-105 == 684112803)))));
        arr_4 [13] = ((((max(1, 964351401794621595))) ? 1 : 70));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_14 = ((var_10 ? ((var_2 ? (((max((arr_8 [i_1]), var_4)))) : (13258279031152067501 * var_3))) : (((-(arr_5 [i_1]))))));
        arr_9 [i_1] = (max(var_8, (max(26, 37))));
        arr_10 [i_1] = (((max(var_6, ((var_2 ? -684112803 : 95)))) >> (((((17482392671914930021 ? (arr_6 [i_1]) : (arr_7 [i_1] [i_1])))) ? ((var_7 ? var_1 : (arr_6 [i_1]))) : 1))));
    }
    #pragma endscop
}
