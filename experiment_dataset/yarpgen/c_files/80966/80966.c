/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = ((((arr_1 [i_0] [i_0]) ^ (arr_4 [i_0] [i_0] [i_1]))) - ((max(var_1, (arr_0 [i_0])))));
                var_13 += (arr_4 [14] [4] [i_1]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_14 = ((!(((var_2 ? var_1 : var_0)))));
        var_15 = ((((((arr_6 [i_2 + 2]) >= var_6))) - (arr_2 [17])));
        var_16 = (((((var_7 % (arr_5 [i_2])))) ? ((var_7 / (arr_5 [6]))) : -var_6));
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_17 |= (max((((!(((-(arr_7 [i_3 - 2]))))))), (((((var_2 ? 6835076963325415100 : (arr_7 [0])))) ? (arr_3 [3]) : (max(var_3, var_3))))));
        var_18 |= (max(((max((arr_1 [i_3 - 1] [22]), (arr_1 [i_3 - 3] [12])))), (var_11 - var_0)));
    }
    var_19 = min(var_11, var_7);
    #pragma endscop
}
