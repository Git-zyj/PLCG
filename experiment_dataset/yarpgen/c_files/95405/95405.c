/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((!((max(0, (max(19276, var_11))))))))));
    var_18 *= var_15;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_19 = (max(var_19, var_1));
        var_20 = (max(var_20, (arr_1 [10])));
        arr_4 [i_0] [i_0] = (arr_1 [i_0 - 3]);
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_6 [i_1]);

        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_21 *= (min(var_9, (((~var_11) ? (((max(3469, var_15)))) : 4813545781951294349))));
                            arr_20 [i_2] [i_2] [i_3] [i_1] &= (arr_9 [i_1] [i_1] [i_1 - 2]);
                            var_22 = (max(var_22, ((min(5194217136770718811, -19259)))));
                            var_23 ^= var_5;
                        }
                    }
                }
            }
            var_24 = var_3;
            var_25 = (arr_14 [i_1] [5] [i_1 - 1] [1]);
            var_26 = (min(var_26, (arr_19 [14] [i_2] [i_2] [i_1] [i_2] [i_2])));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_27 *= ((!(((var_1 ? -5194217136770718812 : 214)))));
                            var_28 -= ((!(arr_22 [5] [5])));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_29 -= (!var_3);
                            var_30 = (min(var_30, ((((((var_4 | ((0 >> (80 - 71)))))) || (((1048576 + (var_4 / -5194217136770718812)))))))));
                            var_31 = (max(var_31, ((min(17179868672, 19247)))));
                            var_32 = (((((-var_10 ? (var_10 * var_5) : (min(1, 7221935285023059613))))) && ((min(var_0, var_3)))));
                        }
                        arr_35 [i_1] [i_1] [i_6] [i_1 - 1] &= var_14;
                        var_33 -= var_5;
                    }
                }
            }
            var_34 = (max(var_34, ((min((((!((min(var_16, var_12)))))), var_0)))));
            var_35 = (min(var_35, 6));
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_36 = -5194217136770718812;
                            arr_45 [i_1] [i_12] [i_14] [i_13] [i_14] = (((arr_9 [i_1] [i_11] [i_1 - 1]) ? (((((63839 ? var_0 : var_6))) ? (min(19238, -5194217136770718812)) : ((((arr_18 [i_1] [i_14] [i_1] [i_1] [i_1]) ? (arr_11 [i_1] [i_1] [i_1]) : (arr_10 [i_1 - 2] [i_1 - 2] [7])))))) : var_14));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    var_37 &= (((~8642258155742303845) ? (arr_24 [i_16]) : var_14));
                    var_38 ^= ((var_5 ? ((var_8 ? var_0 : 48314)) : var_1));
                    arr_50 [14] [i_1] [i_11] [i_11] [i_15] [3] &= ((17179868689 ? (arr_34 [15] [9] [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 2]) : (arr_34 [i_15] [6] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1 - 2])));
                }
                for (int i_17 = 3; i_17 < 15;i_17 += 1) /* same iter space */
                {
                    var_39 ^= ((((~(arr_31 [i_1 - 2] [i_11] [i_15] [i_15] [i_17])))) ^ 21980680);
                    var_40 *= -17179868649;
                }
                for (int i_18 = 3; i_18 < 15;i_18 += 1) /* same iter space */
                {
                    var_41 |= ((31 & (((arr_10 [i_1] [i_1] [i_1]) ? var_14 : var_7))));
                    arr_58 [i_1] [i_11] [i_11] [i_18] [i_15] [i_1] = 55576;
                    var_42 &= (arr_12 [i_1] [i_1]);
                }
                var_43 = (min(var_43, 922440628));
            }
            var_44 ^= ((!(~9223372036854775807)));
        }
        /* LoopNest 3 */
        for (int i_19 = 1; i_19 < 13;i_19 += 1)
        {
            for (int i_20 = 2; i_20 < 16;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 16;i_21 += 1)
                {
                    {
                        var_45 = (max(var_45, (((!((((arr_34 [i_19 + 4] [i_19 - 1] [i_19 - 1] [i_19] [i_19] [i_19 + 2] [7]) ? var_6 : var_8))))))));
                        var_46 = (min(var_46, (((28016 ? var_16 : (0 ^ 17179868672))))));
                    }
                }
            }
        }
    }
    var_47 = ((var_14 ? var_10 : var_3));
    #pragma endscop
}
