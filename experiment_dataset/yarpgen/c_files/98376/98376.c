/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((min(0, var_0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 = var_3;
        var_21 = var_8;
        var_22 = (max(var_22, (~var_14)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_23 = 1;

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [i_2] = (arr_2 [i_1]);
            var_24 = ((arr_7 [i_1]) ? 1 : (arr_0 [i_1]));
            var_25 = 562949953421311;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_26 *= (arr_0 [i_1]);
            arr_14 [i_1] = -966164433765692598;
            arr_15 [i_1] [i_1] [i_3] &= 0;
        }
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            var_27 = (arr_9 [i_4 + 1] [i_4]);
            var_28 ^= var_13;
        }
    }
    #pragma endscop
}
