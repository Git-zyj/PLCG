/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = var_1;
                                var_14 = (((var_9 ^ var_6) ? (min(0, 1641718373)) : ((((var_5 * 1) ? var_3 : 1)))));
                                var_15 = var_8;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((((((((((arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_12 [i_0 - 1] [i_1] [i_1] [i_6]) : 1))) ? ((0 ? 1 : var_12)) : ((1 << (9046740013468105992 - 9046740013468105979)))))) ? (((((~var_8) || (var_2 | var_6))))) : (((var_8 < 0) ? (1 && 149) : -var_5)))))));
                            var_17 = (min(var_17, (((-(max(1, 101317838282904947)))))));
                            var_18 = (~var_0);
                        }
                    }
                }
                var_19 = (max((~-5707078882709479428), var_8));
                var_20 = ((!(arr_14 [i_0 - 1] [i_1] [i_1 - 1] [i_1] [17] [i_0])));
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_21 = (arr_1 [10] [10]);

        /* vectorizable */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_22 = ((var_0 ? 1 : (arr_3 [i_8] [i_8])));
            var_23 = (((arr_10 [i_8]) ? (((1 ? (arr_2 [i_7] [i_7]) : 0))) : (arr_14 [i_7] [i_7] [i_8] [7] [i_8] [1])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        var_24 = ((var_10 != (var_4 != var_3)));
                        var_25 = (!-var_7);
                    }
                }
            }
            var_26 = ((1 ? 750060500213353357 : 4294967295));
        }
        /* vectorizable */
        for (int i_11 = 4; i_11 < 15;i_11 += 1)
        {
            var_27 = (((~-750060500213353357) ? 1 : 1));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    {
                        var_28 = 322998914;

                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            var_29 = ((-(arr_32 [i_11 - 4] [i_13 - 1])));
                            var_30 = (+-1);
                            var_31 = -1;
                            var_32 = ((-1069708051166562936 && (arr_23 [i_11 - 3])));
                        }
                    }
                }
            }
            var_33 = 322998904;

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_34 = 1;
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        {
                            var_35 = (1 | 37);
                            var_36 = (((arr_38 [i_7] [i_11 - 3] [i_17] [10] [i_16 - 2] [i_17]) ? 219 : (arr_38 [i_7] [i_11 - 4] [i_7] [2] [i_16 + 3] [2])));
                            var_37 = ((16105992916392915356 ? 170 : 243));
                            var_38 = ((!(arr_37 [i_16 + 4] [i_16] [i_16 + 4] [i_16 + 3])));
                            var_39 = -255;
                        }
                    }
                }
                var_40 = ((1 ? var_0 : var_12));
            }
            for (int i_18 = 1; i_18 < 16;i_18 += 1)
            {
                var_41 = (arr_29 [i_11 - 4] [i_11 - 1] [i_11] [i_11 + 2] [i_11 - 1] [i_11 + 2]);
                var_42 = var_4;
                var_43 = ((arr_19 [3] [i_7] [3] [5] [i_11] [i_18]) <= var_9);
            }
            for (int i_19 = 1; i_19 < 1;i_19 += 1)
            {
                var_44 = (min(var_44, -18));
                /* LoopNest 2 */
                for (int i_20 = 2; i_20 < 16;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 15;i_21 += 1)
                    {
                        {
                            var_45 = ((var_4 ? (arr_58 [i_19 - 1] [i_19 - 1] [i_20 - 1] [i_19 - 1]) : var_10));
                            var_46 = (min(var_46, 610922472));
                            var_47 = (~-27614);
                        }
                    }
                }
            }
            var_48 = var_10;
        }
    }
    for (int i_22 = 1; i_22 < 13;i_22 += 1)
    {
        var_49 = (max(((((min(var_4, (arr_23 [i_22 + 3])))) ? ((min(248, 12))) : (var_10 <= var_12))), (((((50 ? -26021 : var_8))) ? (((arr_48 [6]) ? 34 : (arr_47 [i_22] [i_22]))) : (arr_63 [i_22 + 3] [i_22])))));
        var_50 = (min(var_50, (((4294967270 & ((((52380 / var_5) - -var_0))))))));
        var_51 = var_12;
        var_52 = ((arr_24 [i_22]) ^ var_8);
    }
    for (int i_23 = 0; i_23 < 19;i_23 += 1)
    {
        var_53 -= (~27620);
        var_54 = 16105992916392915353;
        var_55 += (min(var_4, ((-(arr_3 [i_23] [i_23])))));
        var_56 = ((1 * (((arr_2 [i_23] [i_23]) + 153))));
    }
    #pragma endscop
}
