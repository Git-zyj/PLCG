/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((((var_8 ? ((-21092 ? var_3 : var_4)) : var_5)) - ((((var_8 ? var_2 : var_2))))));
    var_14 = 1;
    var_15 = ((~(max((min(var_11, var_4)), (~var_0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = -var_4;

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = ((-((2285363293558408071 ? (arr_1 [i_0]) : 0))));
            var_16 = (max(var_16, (arr_5 [i_0])));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_17 = ((-((min((arr_3 [i_0] [i_2]), 0)))));
            var_18 = (min(var_18, var_7));
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_19 = (min((arr_9 [i_3]), (~162)));
        var_20 = (min(var_20, var_0));
        var_21 = ((-((min(72, (arr_9 [i_3]))))));
    }
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        arr_13 [i_4] = 0;
        var_22 = (min(var_22, (((((max((!-94), (arr_12 [i_4 + 1] [i_4 - 2])))) ? (arr_11 [21] [i_4]) : ((((((arr_11 [i_4] [i_4]) | var_4))) & var_9)))))));
        var_23 = (((arr_11 [i_4] [i_4]) || ((((arr_11 [i_4] [i_4]) ? -84 : (arr_12 [i_4 + 4] [i_4 - 2]))))));
    }
    #pragma endscop
}
