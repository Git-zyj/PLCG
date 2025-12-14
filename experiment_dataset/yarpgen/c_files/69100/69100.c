/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!951324196);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = (max(1101504558, (arr_3 [i_0])));
                    var_20 *= ((4294967295 ? 63 : 0));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = 3193462720;
        var_21 |= (((((255 ? 3544379392 : var_16))) ? (4294967295 == var_18) : var_5));
        var_22 = (~var_7);
        arr_12 [i_3] &= (var_17 / 32767);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((((-2375 ? var_10 : var_7)) % (((var_7 ? -2377 : (arr_15 [i_4] [i_4]))))));
        var_23 = ((3193462719 ? 3548842322 : 4294967278));
        var_24 -= (1101504607 ? (arr_10 [i_4]) : (arr_14 [i_4] [i_4]));
    }
    #pragma endscop
}
