/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-var_0 / ((var_1 ? var_4 : var_7)))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_14 = arr_1 [i_0 - 1] [i_0 - 1];

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_15 = (max(((((arr_4 [i_0] [i_0 - 1] [i_0 + 1]) <= (arr_2 [i_0] [i_0 - 1] [i_0 + 1])))), ((var_6 ? (arr_1 [1] [i_0 - 1]) : -26))));
            var_16 = (arr_1 [i_1] [i_0]);
            arr_6 [i_1] = var_0;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_17 = (((arr_9 [i_2] [12] [i_0]) && (!var_0)));
            var_18 = ((30011 ? 0 : 3762));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_19 = ((~((((((var_1 ? 30008 : var_4))) != (max(0, 1)))))));
            var_20 = ((-1 + (~var_7)));
            var_21 = (arr_1 [7] [7]);
            var_22 = ((((((max(var_4, var_11))) - (((!(arr_13 [i_0 - 2])))))) < ((((-110 != (arr_9 [i_0 - 1] [i_3] [i_0])))))));
        }
    }
    #pragma endscop
}
