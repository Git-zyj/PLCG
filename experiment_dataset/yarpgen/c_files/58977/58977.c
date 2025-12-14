/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (18446744073709551615 <= 21645);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max((((((max(var_6, var_5))) >= var_11))), ((var_3 ? var_4 : (arr_1 [i_0])))));
        arr_3 [3] [3] = var_0;
        arr_4 [i_0] = (min((min(var_7, (arr_0 [i_0]))), 21645));
        arr_5 [i_0] = ((var_13 || ((((arr_1 [i_0]) ? ((min(-21645, -1933057531))) : -var_7)))));
        arr_6 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_10 [1] = ((((var_13 ? (arr_9 [i_1] [i_1]) : var_0)) << (var_0 - 85)));
        arr_11 [i_1] = (arr_9 [i_1] [i_1]);
        arr_12 [i_1] [19] = (((((max(-1933057522, 3367805638391904895)))) >> (68719476735 - 68719476732)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_15 [i_2] = (arr_9 [i_2] [i_2]);
        arr_16 [i_2] = (((arr_13 [i_2]) != (arr_13 [i_2])));
    }
    #pragma endscop
}
