/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((((var_9 && (!1)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] = (1 ? 1 : 0);
            arr_8 [6] [i_1] [6] = var_8;
            arr_9 [i_0] [i_0] [i_1] = (arr_6 [7] [7]);
        }
        var_12 = (arr_0 [i_0]);
        var_13 = (arr_1 [10] [i_0]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_14 = 2020369857;
        arr_12 [i_2] = -692251872505168396;
        var_15 ^= ((arr_0 [1]) ? -87 : (arr_4 [i_2]));
    }
    #pragma endscop
}
