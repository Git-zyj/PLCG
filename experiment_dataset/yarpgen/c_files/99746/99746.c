/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [14] [14] = (((min(((((arr_0 [i_0]) != (arr_0 [i_0])))), -1570649633)) >= ((((arr_1 [i_0]) && ((min(9134381695762209783, -25898))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] |= (((arr_5 [i_0] [i_1]) < (arr_5 [i_0] [3])));
            arr_7 [i_0] [9] [i_1] = (~-25898);
        }
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (arr_5 [i_2] [i_2]);
        arr_12 [19] = (((~var_3) & (((arr_1 [i_2]) ? var_7 : var_3))));
        var_11 = (min(var_11, ((((~25908) > 87)))));
    }
    var_12 = (min((min((!var_2), var_9)), (((max(var_9, var_10)) / (50134 / -25875)))));
    #pragma endscop
}
