/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = ((-(((var_19 && ((min(var_15, var_14))))))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_21 = ((124 << (!1233506927)));
                    var_22 = ((((((arr_4 [i_0] [i_0] [i_0]) + ((var_8 ? var_8 : var_5))))) ? (min((var_10 - var_12), (arr_4 [i_0] [i_1] [i_1]))) : ((min(var_12, 1233506928)))));
                    var_23 -= (14403029568538982725 + 1);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_24 = (((var_14 != 131) >= ((3 | (min(-32, 131))))));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            var_25 = ((((var_5 ? var_0 : var_2))) % var_11);
                            var_26 = var_8;
                            var_27 = (~-var_16);
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_28 = (min(((((((arr_8 [i_0] [i_1] [1] [i_3]) | var_14)) / (((arr_13 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2]) & var_19))))), (((((var_13 ? var_18 : var_6))) ? ((var_12 ? var_0 : (arr_2 [7]))) : var_16))));
                            var_29 = (max(var_29, ((((((~var_9) | var_18)) & (((~(arr_16 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_3])))))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_5] [12] = ((124 ? 65518 : ((var_1 ? (0 % -1233506927) : 17))));
                        }

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_30 = (((arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]) || (14583145495487671041 % var_16)));
                            var_31 = (91 != 0);
                            var_32 -= var_8;
                            var_33 *= ((+((((var_18 || var_12) != var_15)))));
                        }
                        arr_20 [i_2] [i_2] [i_2] [i_2] = (((((var_15 ? 1873528123 : ((-(arr_8 [i_3] [i_1] [i_1] [i_0])))))) + (-var_17 - var_8)));
                        var_34 = ((-(2972532608 && var_7)));
                    }
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {

                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            arr_28 [i_9] [i_8] [i_8] [i_1] = var_18;
                            var_35 += (var_7 ^ var_13);
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_36 = ((175 ? (arr_4 [i_0] [i_7] [i_0]) : var_15));
                            arr_31 [i_10] [i_8] [i_8] [i_8] [i_0] = 47272;
                            var_37 = ((arr_9 [i_0] [i_1]) + (arr_9 [i_0] [i_1]));
                            var_38 = ((!(arr_14 [i_0] [i_1] [i_1] [i_7] [i_8] [i_10])));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_39 = var_1;
                            var_40 *= var_16;
                            var_41 = (var_0 || var_6);
                            var_42 -= ((((var_2 ? var_3 : var_1))) ? ((-1233506928 ? (arr_27 [i_11] [i_1] [i_1] [i_1] [i_11]) : var_10)) : (((arr_30 [i_11] [i_11] [i_11] [i_11] [i_11]) - (arr_3 [i_8]))));
                        }
                        var_43 = var_1;
                        var_44 = ((var_6 & ((var_15 >> (var_18 - 823)))));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_38 [i_0] [i_1] [i_1] [i_1] [i_12] = ((131 >> (-1873528123 + 1873528143)));
                        arr_39 [i_0] = ((!((((var_5 <= var_7) | ((var_4 ? (arr_18 [i_0] [i_0] [i_1] [i_0] [i_7] [i_7]) : var_6)))))));
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_45 += (((var_19 || 17) + ((-0 ? var_16 : ((var_10 ? 0 : (arr_35 [i_7])))))));
                        arr_43 [i_1] [i_1] [i_7] [i_13] [i_1] |= (max((((((var_4 ? var_2 : (arr_25 [i_0] [i_1] [i_1] [i_7] [i_13] [i_13]))) - -var_1))), (((max(var_6, 4)) ^ (-7219117087316300509 ^ var_15)))));
                        var_46 ^= (((((((1 ? 11 : 208))) ^ var_0)) ^ ((((!3) + var_2)))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_47 = var_11;
                        var_48 = (arr_6 [i_0] [i_0] [i_0] [i_0]);
                    }
                    arr_47 [i_0] [i_7] = ((((min(-97934304, 4))) && ((max(var_2, ((var_3 ? 2 : var_4)))))));
                    arr_48 [i_0] [i_1] [i_7] = (--var_19);
                }
            }
        }
    }
    var_49 ^= (((var_4 - var_5) + (((0 ? 48033 : 0)))));
    var_50 = (((((!(-1233506927 || 3)))) & (~var_4)));
    #pragma endscop
}
