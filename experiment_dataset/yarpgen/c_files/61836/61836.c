/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = min(469762048, ((((min(-36, 3717576885)) > 7))));
        var_19 = (max(var_19, ((((((((((arr_1 [i_0] [i_0]) > 577390416)))) <= 3717576879))) < ((((max(var_18, -4183830880881440322)) < (112 == 4160973024))))))));
        arr_3 [i_0] = (min(((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_14)) > (min(var_12, (arr_1 [i_0] [i_0])))))), (((((577390416 ? 577390411 : (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 = (min(var_13, (((1071584747706977797 >= (arr_1 [i_1] [16]))))));
        var_21 *= ((((((((max(1, var_17))) < ((((arr_6 [i_1]) <= 0))))))) != (min(4095, (min((arr_5 [1]), (arr_6 [i_1])))))));
        var_22 = ((var_13 <= (((arr_0 [i_1]) & (arr_0 [i_1])))));

        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            var_23 = (max(var_1, (arr_8 [19])));
            arr_10 [14] = (((arr_1 [i_2 - 1] [i_2 - 1]) ? (max((arr_4 [i_2 + 1] [i_2 - 2]), var_8)) : (arr_9 [i_2 + 1] [i_2] [i_2 + 1])));
        }
        var_24 = (min((max(var_0, (max((arr_4 [i_1] [i_1]), 1014311021059003248)))), (min((var_2 | 2277949517), (arr_0 [i_1])))));
    }
    var_25 = (max(2147483648, 1));
    #pragma endscop
}
