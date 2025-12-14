/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_13 -= (!var_3);
        var_14 = (arr_0 [i_0]);
        arr_2 [i_0] = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_7 [i_1] [i_2 + 1] = (arr_1 [i_2 + 1] [i_2 + 1]);
            var_15 -= 3175748555;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_17 [i_3] [i_2] [i_2 - 1] [i_4] [i_3] = ((-(((25828 && (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [8]))))));
                            arr_18 [i_3] [i_2] [i_2] [i_5] = ((var_1 << (3175748555 - 3175748544)));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_9;
                        }
                    }
                }
            }
            var_16 = (max(var_16, (((var_3 ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 + 1]))))));
            var_17 = (((arr_3 [i_2 + 1]) >= (arr_3 [i_2 - 1])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_24 [i_1] [i_1] = (arr_15 [i_1] [i_1] [i_1] [4] [i_1] [6]);

            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                var_18 = var_11;
                arr_29 [0] = -3665;
            }
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                var_19 += (-6 > 27);
                var_20 ^= var_8;
            }
        }
        var_21 = 255;
        var_22 *= min((max(((((arr_11 [i_1] [i_1]) / 21))), 1119218741)), (((((min((arr_5 [i_1] [i_1] [i_1]), 3175748555))) ? ((var_6 ? 31694 : (arr_1 [i_1] [i_1]))) : var_11))));
        arr_34 [i_1] [i_1] &= ((min((min(var_6, var_12)), var_7)));
    }
    var_23 = (max(var_23, (((((min((var_10 <= var_7), 1))) >= var_0)))));
    var_24 = (max(var_12, (((((min(var_3, var_9))) ^ var_5)))));
    var_25 = var_4;
    var_26 = ((-var_6 ? (min(var_9, var_0)) : ((~((var_7 ? var_1 : -25828))))));
    #pragma endscop
}
