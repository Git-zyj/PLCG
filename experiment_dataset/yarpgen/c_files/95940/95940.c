/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] = (arr_0 [i_1 - 2]);
            var_10 = (((arr_2 [i_0 + 3] [i_1 - 1]) ? 1587028924918247498 : var_8));
        }
        arr_6 [i_0 - 1] = (((arr_1 [i_0]) ? 81 : (arr_1 [i_0 + 2])));
    }
    var_11 = (max(var_11, var_1));
    #pragma endscop
}
