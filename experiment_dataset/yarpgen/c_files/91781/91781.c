/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] = (var_10 ? 4095 : ((var_7 ? 1 : 34225520640)));
                    var_11 = (0 ? ((-30567 ? 2302904352 : -4834885462413392332)) : (var_2 - var_4));
                    var_12 = (max(var_12, var_0));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_11 [i_0] = 200;
                        var_13 ^= ((var_2 ^ (((((var_4 ? 1 : var_8))) ? var_4 : (((var_8 ? 1 : var_0)))))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_14 = ((1 ? ((((((-3149741159836976631 ? var_0 : var_2))) ? var_9 : 1))) : (((((0 ? var_3 : var_3))) ? (var_3 | 1) : (((1 ? 1 : var_10)))))));
                        var_15 += ((var_5 | var_3) <= (48 * var_2));
                    }
                    var_16 ^= (var_7 && (((0 ? 911079718321647004 : 14))));
                    var_17 = 2696096064;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_18 = var_0;
                                var_19 = ((((((((var_3 ? var_0 : var_10))) ? var_2 : ((var_2 ? var_3 : var_5))))) ? var_4 : 207));
                                var_20 += ((var_8 ? ((0 ? 65535 : var_1)) : (((1 ? (1 + 1) : -9200815071415928201)))));
                                var_21 = (((((var_2 ? var_3 : var_4))) ? var_1 : 1));
                                arr_26 [i_1] [i_0] [i_1] = 1;
                            }
                        }
                    }
                    var_22 += var_10;
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_23 = ((((var_10 ? var_9 : var_4))) ? (((var_2 ? 86 : 1))) : (4611684918915760128 ^ 1));
                                var_24 += ((132 ? ((1650010408368833114 ? var_0 : 1)) : var_10));
                            }
                        }
                    }
                    var_25 = var_4;
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_26 = ((var_3 / (18227653120261343800 / -3149741159836976632)));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_27 &= ((((var_9 ? var_1 : ((16601313366734809336 ? -3149741159836976632 : var_5))))) ? (((1258318191 ^ 1) ? 11459 : var_7)) : (((var_0 ? ((3368922427 ? 15 : var_9)) : ((var_4 ? var_0 : 0))))));
                                arr_40 [i_0] = 0;
                                var_28 = ((57080 ? 255 : 1));
                                var_29 ^= ((2385 ? ((var_7 ? (((var_9 ? 169 : var_10))) : -2385)) : var_8));
                            }
                        }
                    }
                    var_30 = ((((var_3 ? 67 : -6004)) & var_0));
                    var_31 = ((((((0 ? var_0 : 1))) ? ((-747857224722111848 ? var_10 : var_8)) : 43)));
                }
                arr_41 [i_0] = ((1 ? -2385 : 1));
            }
        }
    }
    var_32 = var_4;
    #pragma endscop
}
