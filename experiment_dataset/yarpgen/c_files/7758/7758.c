/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_11) || (((var_8 ? var_7 : ((3555149624 ? -3 : 739817672)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((arr_1 [i_0]) != var_2)) ? (arr_0 [i_0]) : 1952596660);

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_1] = ((~(arr_1 [i_1 + 1])));
            var_20 *= (((arr_4 [i_1 - 1] [i_1 - 1]) ? (arr_4 [i_1 - 1] [i_1 + 1]) : (arr_4 [i_1 + 1] [6])));
        }
        var_21 = ((2475822544 >> (1819144781 - 1819144772)));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_22 = (min((max((min((arr_6 [i_2] [i_2]), (arr_1 [11]))), (50 >= 49))), (min(var_2, 9))));
        var_23 = 0;
    }
    #pragma endscop
}
