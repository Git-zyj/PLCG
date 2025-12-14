/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [4] [i_2] [i_0] = (~1826854097);
                        arr_10 [i_0] [i_2] [i_1] [i_0] = 305528451;
                        arr_11 [i_1] [0] &= ((((max(var_4, (max(var_9, 1))))) ? (~var_13) : 7779));
                        var_15 = ((max(-8041, (arr_4 [i_0] [i_0] [i_3]))));
                        var_16 += 1831521947;
                    }
                }
            }
        }
        arr_12 [i_0] = ((-(~var_6)));
    }
    var_17 = (max(var_17, (((var_6 ? var_0 : 305528462)))));
    var_18 = (max(var_18, ((((((((max(-8192, 305528436))) ? (((var_10 ? 160 : -305528451))) : ((1 ? -1918764142 : var_6))))) ? var_7 : ((var_12 ? (((max(26989, 34668)))) : (max(15807604049363979489, -1826854093)))))))));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            {
                var_19 = (min(var_19, (max(((-var_1 ? 7779 : 66)), (~-5794)))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_22 [i_4] = -var_2;
                            var_20 = max(((min(24, 14156))), ((100 ? -305528444 : (arr_14 [i_5 + 3] [i_4 + 1]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {

                            for (int i_10 = 0; i_10 < 15;i_10 += 1)
                            {
                                var_21 = ((((min((-5227858289880891920 ^ 28724), (arr_27 [i_4] [i_5 - 1] [i_10] [i_10])))) ? ((~(max(var_11, 24)))) : var_2));
                                var_22 = ((((min(2221311083155569734, (((57754 ? -21445 : 65535)))))) ? (~var_5) : (~-32760)));
                                var_23 ^= (var_4 < 31237);
                                var_24 += var_2;
                            }
                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                            {
                                arr_33 [i_4 + 1] [i_5 - 1] [i_4] [i_9] = arr_24 [i_4] [6] [i_9];
                                var_25 = var_4;
                                arr_34 [i_4] [9] [i_9] [i_8] [i_5] [i_4] = (!28734);
                                arr_35 [4] [4] |= -104;
                            }
                            for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                            {
                                var_26 = (min(var_26, ((max(((3615074700551907753 ? -7 : -2126901266)), 1)))));
                                var_27 -= (((((~(arr_30 [i_4 + 1] [1] [i_4 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 3])))) ? (arr_30 [i_4 + 1] [10] [i_4 + 1] [i_5 + 3] [14] [i_8]) : (min(-3733178283392194082, var_5))));
                            }

                            /* vectorizable */
                            for (int i_13 = 0; i_13 < 15;i_13 += 1)
                            {
                                arr_40 [i_4] [8] = (((var_0 ? var_3 : 6074632594332231961)));
                                var_28 = (max(var_28, (((((11281 ? -984024536842195780 : 539609659)) < (663426224 == 1061298598))))));
                                var_29 = 52;
                            }
                            for (int i_14 = 0; i_14 < 1;i_14 += 1)
                            {
                                var_30 = (((arr_20 [i_4] [i_5 + 3] [i_8] [i_4] [1]) ? (arr_44 [i_4] [i_4] [i_5] [i_5] [i_8] [i_9] [i_14]) : 223));
                                var_31 = (min((~-20913), -var_6));
                                arr_45 [i_4] [i_4] [i_4] [i_4] = 16184610849295547835;
                                arr_46 [i_4] [i_5] [i_8] [i_4] [3] = 4611686018427387776;
                            }
                            var_32 *= (max(((-3733178283392194082 ? (min(var_9, 3898499768)) : (-2147483647 - 1))), 3233668698));
                        }
                    }
                }
            }
        }
    }
    var_33 = ((-(52 <= 34)));
    #pragma endscop
}
