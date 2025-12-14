/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (min((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0 - 1]) : var_1)), (((31 ? (arr_1 [i_0]) : var_7)))));
        arr_4 [i_0] [i_0] = ((((-51 ? 179 : -32))) ? (((var_0 > var_8) ? var_1 : -11)) : var_2);
        var_10 -= ((var_2 ? (-1001849573 < 49189) : (min(-18, var_7))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_15 [i_1 - 1] [i_2] [i_1] [i_4] = (arr_11 [i_2] [i_2] [i_4 + 3]);
                        arr_16 [i_1] [i_2] [i_3] [i_2] [i_3] [i_1] |= ((~((var_8 ? (arr_8 [i_1 + 1]) : var_1))));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_11 = (((((((max(107, var_6))) ? (-31 % var_5) : 20))) % ((-(arr_19 [i_6] [i_5] [i_1])))));
                var_12 = (~-var_4);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_28 [i_1] = 1242325334;
                            arr_29 [i_1] [i_5] [i_6] [i_7] [i_1] = ((arr_22 [i_1] [0] [i_6] [i_5]) | ((max((!var_2), (min(16346, 16346))))));
                        }
                    }
                }
            }
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                var_13 = (max(2877976479, ((-2649998151 << (!var_8)))));
                var_14 = (min(var_14, var_3));
                var_15 &= arr_21 [i_9] [i_1] [i_1];
                var_16 = (((~(arr_17 [i_1 + 1] [i_9 + 1]))) & (max(-1805015166, var_3)));
            }

            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_17 = (-2147483647 - 1);
                            var_18 = (min(var_18, (arr_10 [i_11] [i_12] [10])));
                        }
                    }
                }
                arr_40 [i_1] = (((34 < var_3) >= (((arr_35 [i_1 - 2] [i_1]) ? (-3707317363908865764 > 2529780776600485008) : var_3))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            var_19 = ((((var_5 ? ((var_7 ? var_6 : -36)) : 7643))) ? 134217727 : -7804985059864593789);
                            var_20 = ((-((var_3 ? (~220) : (arr_21 [i_1 - 1] [i_10 - 1] [i_10 + 1])))));
                            var_21 &= var_4;
                        }
                    }
                }
                var_22 = ((-var_4 ? (arr_31 [i_10 - 1] [0] [i_1] [i_10 + 1]) : (((arr_31 [i_10 + 2] [i_10 + 2] [i_1] [i_10 + 2]) ? 2147483647 : -1))));
                var_23 = (min(var_23, ((((((var_8 % (min(-33, var_6))))) ? ((-(((arr_25 [i_1 - 2] [i_1] [i_5] [11]) % var_3)))) : (((var_2 | var_5) ? (-31 > -58) : ((var_3 ? (arr_25 [18] [18] [i_1 - 3] [i_1]) : var_3)))))))));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                var_24 = (~-33);
                var_25 *= (!var_7);
                var_26 = (min(var_26, (var_0 == var_7)));
            }
        }
        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_17 = 1; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        {
                            var_27 = (((max((!var_4), (((arr_18 [i_1]) | var_7)))) > 0));
                            arr_58 [i_1 - 1] [i_16] [i_17] [i_1] [1] = (((((var_4 ? (2147483647 == var_9) : 71))) % ((var_0 ? var_9 : var_4))));
                            var_28 = var_8;
                            var_29 *= ((var_9 || ((!(863069910 || var_1)))));
                        }
                    }
                }
            }
            var_30 = (+(((!4159119262865109850) % var_8)));
            arr_59 [i_1] = -var_9;
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 19;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 19;i_22 += 1)
                    {
                        {
                            arr_66 [i_1] [i_1] [i_1] [i_1] [i_1] = ((-3065864227765149102 & (~2147483647)));
                            var_31 = ((-(((((var_3 ? var_4 : 193))) ? var_6 : (((643150094 << (var_8 - 43))))))));
                            arr_67 [i_1] [i_1] [i_16] [i_20] [i_21] [i_1] = (((var_7 % 4120762366281945870) ? ((min(var_7, (arr_35 [i_1 + 1] [i_1])))) : var_4));
                            arr_68 [i_1] [i_16] [i_1] = ((var_9 & ((+((150 ? (-2147483647 - 1) : var_9))))));
                            var_32 = (((min(var_0, 1752104001))) == var_3);
                        }
                    }
                }
            }
            var_33 = -52;
        }
    }
    var_34 = var_7;
    #pragma endscop
}
