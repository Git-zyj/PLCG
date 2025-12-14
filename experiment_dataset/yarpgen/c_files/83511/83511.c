/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_9 [i_0] [i_1 + 1] [i_2] [i_2] = var_4;
                arr_10 [i_0] [i_0] [i_0] = (~var_5);
                var_12 = (((((var_6 ? var_2 : 2959351093))) ? (!-4523749401378347364) : var_8));
            }
            for (int i_3 = 4; i_3 < 15;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_13 = (((arr_0 [i_3 + 2]) ? 94 : var_3));
                            var_14 = ((154 ? var_2 : var_1));
                        }
                    }
                }
                arr_18 [i_0] [i_0] [i_0] [i_0] = -1;
            }
            for (int i_6 = 4; i_6 < 15;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_15 = -1;
                            arr_26 [i_0] [i_7] [i_6] [i_7 + 1] [i_8] = 161;
                        }
                    }
                }
                var_16 = (arr_5 [i_0]);
            }
            for (int i_9 = 4; i_9 < 15;i_9 += 1) /* same iter space */
            {
                var_17 = ((~var_9) ? var_7 : (((-9223372036854775807 - 1) ? var_0 : (arr_25 [i_0]))));
                arr_29 [i_0] [i_0] [i_0] [i_0] = (((arr_6 [i_0] [i_9]) ? var_4 : (arr_19 [i_0] [i_0] [i_0])));
                var_18 = (max(var_18, ((((((3 ? (-9223372036854775807 - 1) : 127))) ? (((var_10 ? (arr_13 [i_0] [i_1 - 1] [i_9 + 1]) : var_5))) : ((var_3 ? -11 : 9223372036854775802)))))));
                var_19 = (((arr_24 [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9] [i_9]) ? (arr_12 [i_1 + 1] [i_9 + 1]) : (arr_24 [i_9 - 4] [i_9 + 3] [i_9 - 4] [i_9 + 2] [i_9 - 1] [i_9 - 2] [i_9 - 3])));
            }
            var_20 = ((17256437418261961354 ? (arr_7 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1]) : (arr_7 [i_1 + 1] [i_1 + 1] [i_1] [i_1])));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_21 = ((((((arr_21 [i_0]) ? var_2 : var_0))) ? -1 : ((var_10 ? 17256437418261961351 : var_11))));
                            arr_36 [i_0] = ((1 ? 541951990 : 1));
                            arr_37 [i_0] [i_1] [i_10] [i_11] [i_12] = -3;
                        }
                    }
                }
            }
            var_22 *= (~-1);
        }
        var_23 = var_2;
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 14;i_13 += 1)
    {
        arr_41 [i_13 - 2] = ((!(((-4 ? -3 : var_8)))));
        var_24 = var_11;
        var_25 = (~162);
    }

    /* vectorizable */
    for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
    {
        arr_44 [i_14] [i_14] = -11;
        arr_45 [i_14] = ((!1190306655447590261) ? 1987707818 : (var_0 | var_1));
        arr_46 [i_14] [i_14] = 28480;
    }
    for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
    {
        var_26 = (-21 ? (((var_11 ? 49 : -var_5))) : ((-29920 ? ((max(28480, -1438760685))) : 799614485)));

        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            var_27 = ((((((!var_6) ? (arr_15 [i_15] [i_15] [i_16] [i_16]) : var_3))) ? var_11 : var_3));
            arr_55 [i_15] = (min(-8212270481489428487, ((min((arr_17 [i_15] [i_15] [i_15] [i_15]), var_0)))));
            var_28 = ((((((arr_52 [i_16]) ? var_5 : 65528))) ? (arr_52 [i_16]) : (((arr_52 [i_15]) ? 6449441603672232822 : 28478))));
            var_29 = (!8212270481489428468);
        }

        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            var_30 = ((!((((9223372036854775802 | 2) ? -1829674639 : (((arr_51 [i_15] [i_17] [i_17]) ? 18 : var_0)))))));
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        {
                            var_31 = (min(var_31, (((((!((max(var_6, 246))))) || ((0 && (!0))))))));
                            arr_68 [i_17] [i_17] [i_17] [i_17] [i_17] = (max(((~(min(6, -8973553923943650222)))), 0));
                        }
                    }
                }
            }
        }
        var_32 += -135510169;
        var_33 -= -5;
    }
    #pragma endscop
}
