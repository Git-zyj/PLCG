/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 38042;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = arr_1 [i_0] [13];

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_11 = var_8;
                        var_12 = var_3;
                        var_13 = ((var_6 | ((3584 ? (arr_8 [i_1] [i_1]) : (arr_0 [i_3])))));
                        var_14 &= (arr_9 [i_0] [i_1] [i_1] [i_2] [i_3]);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_15 = 17;
                            var_16 = ((((((arr_12 [i_1] [i_1] [i_1] [i_1]) << (((arr_7 [i_0] [i_1] [2] [i_0]) - 4193446079386755270))))) ? (((arr_5 [i_1] [i_1]) ? 1 : 4266071853128869586)) : 211871465));
                            var_17 = (((arr_4 [i_0] [i_3] [i_4]) ^ -var_5));
                            var_18 ^= (((arr_12 [i_2] [i_2] [16] [i_2]) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : (arr_11 [i_0] [i_1] [i_0] [i_1])));
                            arr_16 [i_1] [i_3] [i_2] [i_2] [1] [i_1] = (((arr_7 [i_0] [i_1] [17] [i_3]) ? var_5 : (arr_4 [i_0] [i_1] [i_0])));
                        }
                    }
                }
            }
            arr_17 [i_0] [10] [i_1] &= (((((arr_1 [i_0] [i_0]) ? (arr_8 [i_0] [i_0]) : 39885))) ? var_6 : (arr_10 [i_0] [i_0] [i_1] [i_1]));
            var_19 = ((((3981263239 ? (arr_6 [i_0] [i_0] [i_1] [i_1]) : 122)) << (((-100 & var_6) - 123))));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_20 = (max(var_20, ((((((arr_11 [i_5] [i_1] [i_1] [i_1]) + 2147483647)) >> (((arr_0 [i_5]) - 2780935706)))))));
                var_21 = (arr_8 [i_0] [i_0]);
                var_22 -= ((var_5 ? (arr_8 [i_0] [i_0]) : (arr_8 [i_0] [i_0])));
                var_23 = (arr_20 [i_0] [15] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_24 = (((arr_5 [i_0] [1]) ? -1 : (arr_11 [i_1] [i_5] [0] [i_7])));
                            var_25 = (((arr_4 [i_6 + 3] [i_6 + 2] [i_6 + 3]) << (6052 - 6047)));
                            var_26 = (((arr_25 [i_6 + 2] [i_7] [i_7] [i_7] [i_7] [i_7]) % -6663278911610791874));
                            var_27 = (!51376);
                        }
                    }
                }
            }
            arr_26 [i_0] [i_1] = (((arr_15 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] [i_1]) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])));
        }
        var_28 *= 0;
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    var_29 = (max(var_29, (((((((var_3 / (arr_29 [i_8] [18]))) / ((((arr_9 [i_8] [i_8] [i_10] [13] [i_10]) ? (arr_28 [i_8]) : -17))))) >> (((min(((127 / (arr_28 [i_8]))), var_7)) + 865508086)))))));
                    arr_36 [14] [i_9] [i_10] [i_10] = (((((arr_25 [i_9 - 3] [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_9 - 3] [i_9 - 1]) << (((arr_32 [i_9 - 3] [i_9 - 1] [i_9 + 1]) - 7094986154896267001)))) >> ((((min(var_6, (arr_23 [i_9 - 3] [i_9 - 3] [i_9 - 3] [i_9 - 2] [i_9 - 2])))) - 172))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    var_30 = (((((var_0 >= (arr_25 [i_8] [i_8] [3] [i_11] [i_11] [i_12]))) ? ((min(0, (arr_27 [i_8] [i_8])))) : var_0)));
                    arr_42 [i_8] [i_8] = -32750;
                    var_31 = (max(var_31, ((((arr_8 [i_11 + 1] [i_12]) - 4095)))));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
    {
        var_32 ^= ((((arr_35 [i_13] [i_13] [i_13] [i_13]) != (arr_35 [i_13] [i_13] [i_13] [12]))) ? -1 : (min(4937464539435511337, ((-(arr_24 [i_13] [1] [i_13] [13]))))));
        var_33 = ((-(max((arr_7 [i_13] [i_13] [i_13] [i_13]), (((-(arr_14 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))))))));
    }
    #pragma endscop
}
