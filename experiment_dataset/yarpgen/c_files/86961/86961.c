/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_16 = -32678;
        var_17 = ((var_8 ? ((var_10 ? var_13 : var_15)) : var_8));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        var_18 = ((((max((max(var_6, var_10)), var_7))) ? ((var_2 ? var_8 : var_9)) : ((min(((var_0 ? var_14 : var_0)), (max(var_8, var_13)))))));
                        var_19 = var_10;
                        var_20 = (max(var_14, ((var_8 ? var_6 : var_5))));
                        var_21 = var_12;
                    }
                }
            }

            for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_22 = (((((var_7 ? var_3 : var_8))) ? var_5 : (((!(((var_11 ? var_8 : var_8))))))));
                            var_23 += (min((max(var_3, var_9)), ((-((var_13 ? var_3 : var_6))))));
                            var_24 = (max((!var_4), var_11));
                            var_25 = var_9;
                        }
                    }
                }
                var_26 = (min(var_26, ((max(-2147483642, 2147483622)))));
                var_27 = (~var_2);
                var_28 = (max(var_28, var_0));

                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_29 = var_0;
                        var_30 = var_9;
                        var_31 = var_13;
                        var_32 = var_5;
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        var_33 = (!var_12);
                        var_34 = ((var_1 ? var_5 : var_4));
                        var_35 = ((var_8 ? var_15 : var_6));
                        var_36 = ((var_9 ? var_0 : var_12));
                    }
                    var_37 = var_4;
                    var_38 = ((var_11 ? ((var_5 ? ((var_0 ? var_11 : var_9)) : (!var_12))) : var_7));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_39 = ((var_15 ? var_10 : var_11));
                    var_40 = (!50567);
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_41 = (max(var_41, var_8));
                    var_42 = (min(var_42, var_5));
                }
            }
            for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_43 &= (!var_6);
                            var_44 = (min((min(var_0, var_3)), (((var_1 ? var_8 : var_1)))));
                            var_45 = var_6;
                        }
                    }
                }
                var_46 |= var_15;
                var_47 = ((!(!var_7)));
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 8;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        {
                            var_48 = ((var_15 ? ((((!((min(var_1, var_5))))))) : (max(var_2, var_3))));
                            var_49 = (((!var_1) ? (max(var_3, var_6)) : (((var_13 ? var_11 : var_5)))));
                        }
                    }
                }
            }

            for (int i_17 = 1; i_17 < 1;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 1;i_19 += 1)
                    {
                        {
                            var_50 = -var_8;
                            var_51 ^= ((-((min(var_11, var_5)))));
                            var_52 = (~((var_10 ? var_8 : var_2)));
                        }
                    }
                }
                var_53 = (((!var_15) ? ((1 ? 50567 : 50565)) : ((var_0 ? var_2 : var_1))));
                var_54 += var_4;
                var_55 = var_8;
            }
        }
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            var_56 = var_8;

            /* vectorizable */
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                var_57 = ((var_4 ? var_11 : var_8));
                var_58 = var_7;
            }
            var_59 = (min(var_59, var_14));
        }
        var_60 = (min(var_60, var_13));
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 1;i_22 += 1)
    {
        var_61 = ((var_1 ? var_0 : var_5));
        var_62 = var_7;
        var_63 = var_5;
        var_64 = ((var_2 ? var_13 : var_9));
    }
    var_65 = ((var_10 ? var_13 : var_3));
    #pragma endscop
}
