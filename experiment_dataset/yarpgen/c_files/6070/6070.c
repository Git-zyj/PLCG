/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((((max(var_16, var_9)))) + (min(-var_0, ((max(1, -1915))))))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 = ((-((~((max((arr_2 [i_0]), var_13)))))));
        var_20 = (min(var_20, ((min(((~((var_10 ^ (arr_0 [6]))))), ((var_7 & ((44 ? (arr_2 [1]) : var_0)))))))));
        var_21 -= var_2;
        var_22 = (min(4294967286, (((var_1 ? (((((arr_2 [i_0]) + 2147483647)) >> (var_1 - 60893))) : var_4)))));
        var_23 = max((((~var_4) & ((max((arr_2 [i_0]), (arr_1 [i_0])))))), ((-5452744916401606371 ? ((max(var_14, (arr_0 [i_0])))) : 17)));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_24 = (((max((!1942), var_1))) ? (max((max((arr_10 [i_2] [i_2]), (arr_8 [i_2]))), ((15 ? 44628 : 0)))) : ((-422238512 ? var_0 : (!var_16))));
                        var_25 = (((~0) && ((!(((14 ? var_9 : 0)))))));
                        var_26 = (~-5452744916401606374);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    {
                        var_27 = ((~(max((((arr_13 [i_1 - 1]) ? var_13 : 5452744916401606397)), -8330))));
                        var_28 = (max(var_28, ((max((((0 ? 1 : 1906))), (arr_16 [0] [i_7 + 1] [i_1 - 1]))))));
                        var_29 = -var_13;
                        var_30 = (max((arr_7 [i_7] [i_6] [i_1]), (arr_16 [i_7] [i_6] [0])));
                    }
                }
            }
        }
        var_31 = 1;
    }
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        var_32 = (min(var_32, (((-(((((var_9 ^ (arr_23 [1]))) <= (max((arr_33 [i_8] [i_8] [i_8] [i_8] [i_11]), -23))))))))));

                        for (int i_12 = 4; i_12 < 23;i_12 += 1) /* same iter space */
                        {
                            var_33 &= 9;
                            var_34 = ((~583320099418323094) ? (((-((var_11 + (arr_35 [i_8 - 1] [i_9] [i_8] [i_11] [i_8 - 1])))))) : ((var_16 ? (arr_33 [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1]) : -0)));
                        }
                        for (int i_13 = 4; i_13 < 23;i_13 += 1) /* same iter space */
                        {
                            var_35 = ((((((794979954720971434 & (arr_25 [i_8]))) ? (((arr_25 [i_8]) ? var_4 : (arr_34 [i_8] [i_11] [i_10] [i_9] [i_8]))) : var_0))));
                            var_36 = 5452744916401606369;
                            var_37 -= -13511;
                            var_38 = (((((1 ? (~-9223372036854775805) : var_9))) ? (max((-2147483647 - 1), -10540793751262829648)) : var_17));
                        }
                    }
                }
            }
        }
        var_39 = var_2;
        var_40 = (max(((((((arr_24 [i_8]) + -17))) + ((var_10 - (arr_32 [i_8] [i_8] [i_8]))))), (arr_28 [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 1])));
    }
    var_41 = var_4;
    #pragma endscop
}
