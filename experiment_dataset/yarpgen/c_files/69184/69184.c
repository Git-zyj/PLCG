/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max((43 && var_2), (!43))) ? var_5 : (((!((max(var_6, var_6)))))));
    var_16 = min(((min(0, (!43)))), var_13);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((!108) ? (min(var_13, var_9)) : (min(212, ((var_13 ? (arr_1 [i_0]) : 0))))));
        arr_4 [i_0] = max(-40, (((((min((arr_1 [i_0]), (arr_2 [i_0] [i_0])))) && ((!(arr_1 [i_0])))))));
        var_17 = 2048;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_11 [i_1] [i_1] = (min(((192 ? (arr_7 [i_1] [i_1] [i_1]) : 1)), 1));
            var_18 = (((min((arr_5 [i_1]), (arr_5 [i_1])))) ? ((213 ? var_1 : 200)) : (((!(arr_5 [i_1])))));
        }
        var_19 = ((((max((arr_8 [i_1] [i_1] [i_1]), var_8))) ? var_12 : (((835579913 ? var_5 : (!var_13))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_20 = 0;
            var_21 = (min(var_21, -8115));
            arr_15 [i_1] = 1;
        }
    }

    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_22 = ((min(1, var_12)));
        arr_20 [i_4] = min((arr_13 [i_4] [i_4 + 1] [i_4 + 2]), (min(-198, -50027)));
        var_23 = ((((arr_19 [i_4]) && var_12)) && (((min(var_2, 1)))));
    }
    #pragma endscop
}
