/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= 255;
    var_18 = var_6;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [20] [i_1] = (min(255, (arr_0 [i_1])));
            var_19 = (max(var_19, ((27644 ? ((((((arr_0 [i_0]) < 939929260689920227)) ? ((min((arr_5 [i_0] [15]), 47282))) : 2147483647))) : ((~(min((arr_1 [19]), (arr_3 [i_0])))))))));
            var_20 += (min((min((min(7463138753477741062, 7463138753477741042)), ((((arr_4 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_1])))))), var_15));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = ((!(((-(arr_0 [i_0]))))));
            arr_9 [i_2] = (min((min((~-1866455449), ((var_0 ? (arr_2 [i_0] [i_2]) : (arr_5 [i_2] [i_2]))))), ((~(arr_0 [15])))));
            var_22 = (max(var_22, 7463138753477741059));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_23 = (arr_0 [i_0]);
            var_24 = ((~(((13350 == ((var_8 ? var_14 : (arr_10 [9] [i_3] [i_3]))))))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_18 [i_4] = (-(min(((max(var_14, (arr_11 [i_0])))), (((((arr_3 [i_0]) + 9223372036854775807)) >> (((arr_13 [i_0] [15] [i_4]) - 3307)))))));

            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                var_25 = ((((((arr_1 [i_0]) >= ((max((arr_13 [i_5] [i_4] [i_0]), (arr_17 [i_0] [i_4] [15]))))))) <= var_8));
                var_26 = min((((arr_15 [i_5 + 1] [i_5] [i_5 - 1]) - (arr_15 [i_5 + 1] [i_5] [i_5 - 1]))), -7463138753477741062);
                arr_22 [i_0] [i_5] = -7463138753477741058;
            }
        }

        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_27 = ((((var_5 - (arr_21 [i_0] [i_0] [i_6] [i_6])))) ? (((arr_23 [i_0] [9]) ? (arr_12 [i_6] [11] [i_0]) : (arr_24 [i_0] [i_0] [i_6]))) : (((min(var_9, (arr_11 [i_6]))))));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_28 = (((((var_7 ? (arr_26 [i_7] [i_7 - 1] [i_7 + 3] [i_8 + 1]) : (arr_26 [i_7] [i_7 - 2] [i_7] [i_8 - 2])))) / ((((arr_20 [i_0] [20] [i_7 - 2] [i_8 + 1]) % var_0)))));
                            var_29 = ((~(min(((var_2 ? var_0 : 864691128455135232)), ((((arr_1 [i_6]) ? (arr_23 [i_6] [i_8]) : var_3)))))));
                            var_30 = (((var_11 ? ((((arr_13 [i_9] [20] [14]) && (arr_5 [i_0] [i_6])))) : (arr_23 [i_0] [i_6]))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
        {
            arr_38 [i_0] = (!22532);
            arr_39 [i_0] [i_10] = ((!((((arr_36 [16]) ? ((((arr_0 [i_0]) <= (arr_14 [i_0] [i_0])))) : var_10)))));
            var_31 += (((((((~2147483647) + 2147483647)) + 2147483647)) << (((arr_27 [i_0] [i_0] [i_0] [1]) - 12620))));
            arr_40 [4] [i_10] [i_10] = var_9;

            for (int i_11 = 3; i_11 < 20;i_11 += 1)
            {
                var_32 = ((2952689001 * (!127)));
                var_33 -= (min((arr_25 [i_11 - 2] [i_10] [19] [21]), (7680 && 47287)));
            }
            for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
            {
                var_34 += (arr_32 [i_0] [i_0] [i_0]);
                var_35 &= ((min(((~(arr_30 [i_10] [i_12])), 2111605657))));
                var_36 += (max((((((min(var_12, 322))) < (arr_23 [6] [i_0])))), (min(((-(arr_19 [i_0] [i_0]))), (((arr_26 [i_12] [i_12] [i_0] [i_0]) ? (arr_8 [i_0] [20]) : var_2))))));
            }
            for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
            {
                var_37 = ((((min(13350, -2147483645))) ? (27626 == 24915) : ((((arr_5 [i_0] [i_10]) ? var_2 : (arr_5 [i_0] [i_10]))))));
                var_38 = (((min((!13325), (((arr_45 [18]) | (arr_29 [i_0] [i_0] [i_13] [i_0]))))) - ((max((!var_11), (max((arr_47 [i_0] [i_10] [i_13] [i_10]), var_8)))))));
                arr_48 [i_0] [i_10] [i_13] = (max(1866455448, 32752));
            }
        }

        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    {
                        var_39 = arr_11 [i_0];
                        var_40 = (arr_29 [i_16] [i_16] [i_15] [10]);
                    }
                }
            }
            var_41 = (min(var_2, -13340));
            var_42 += (arr_55 [i_0] [i_14] [i_14] [i_0] [i_0]);
            arr_57 [i_14] [i_14] = ((-(arr_30 [3] [i_0])));
        }
    }
    var_43 = (min(var_43, var_7));
    #pragma endscop
}
