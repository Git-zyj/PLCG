/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = 0;
        var_14 = 887947674;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_15 = 17981881845937697721;
        arr_6 [i_1] = 145;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_11 [i_2] = 146;
            arr_12 [i_2] [i_3] = 146;
        }
        arr_13 [i_2] [i_2] = 1509192566;
    }
    var_16 = var_4;
    #pragma endscop
}
