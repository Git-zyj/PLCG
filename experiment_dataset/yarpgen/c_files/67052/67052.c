/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max((min(2, var_8), (!-1339446353))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 7060515904780793583;
        var_21 ^= 70;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = arr_3 [i_1];
        var_22 = (((arr_3 [i_1]) & (arr_5 [i_1] [i_1])));
    }
    #pragma endscop
}
