/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -109;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] |= ((((((arr_1 [i_0] [i_0]) ? 31 : var_6))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) : (arr_1 [i_0] [i_0])));
        var_13 = (min(var_13, -1088965925));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_14 = (var_9 + var_0);
        var_15 = var_1;
        var_16 = (arr_4 [i_1]);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 += ((!((((arr_5 [i_2] [i_2]) ? (arr_5 [i_2] [i_2]) : var_11)))));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_18 = (((min(var_2, 9789445280382160119)) << (arr_15 [i_2] [i_3] [i_3])));
                            var_19 = (arr_11 [i_4] [i_4]);
                        }
                        var_20 = (max(var_20, (arr_12 [i_3] [i_3] [i_3] [i_3])));
                        var_21 |= (-(((arr_18 [i_3] [i_3] [i_3] [i_4] [i_2] [i_3] [i_2]) % 8855200562008637202)));
                    }
                    var_22 &= (arr_6 [i_3]);
                }
            }
        }
    }
    var_23 &= (-64 % var_4);
    #pragma endscop
}
