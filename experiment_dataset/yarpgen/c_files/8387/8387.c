/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_15 = (max((min(-91, (arr_1 [i_0 + 4]))), ((max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 3]))))));
        arr_3 [i_0] = (max(((min(var_10, 31525197391593472))), (((((((arr_1 [i_0 + 4]) ? var_7 : 4198903768035434414))) || ((((arr_1 [i_0]) ? var_11 : (arr_0 [i_0])))))))));
        var_16 = var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = ((((max((arr_0 [i_0 - 1]), ((~(arr_1 [i_0])))))) ? ((-1680019833241830311 ? 549755811840 : 2065782794)) : ((min((arr_0 [i_2]), (arr_6 [i_1] [i_2]))))));
                    arr_10 [i_1] [i_1] [i_2] [i_0] = (arr_4 [i_0] [i_0 + 4] [i_1]);
                    arr_11 [i_0] [i_1] = -1680019833241830305;
                    var_18 = (max(var_18, ((max(((max((1680019833241830305 || 7658568661831605976), (arr_5 [i_0] [i_1])))), -886486559537560063)))));
                    var_19 *= (max((((((max(1139182210093839637, (arr_2 [i_0] [i_0])))) || (arr_9 [i_0 + 4] [i_0] [6])))), ((max(var_4, (arr_0 [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_20 = ((-(((((2938853566 ? -757496025774640595 : 2938853566))) ? 106 : -8444097976510851266))));
                            arr_23 [i_6] [i_3] [i_5] [i_3] [i_3] = ((var_14 <= (max((((arr_8 [i_5]) ? var_3 : (arr_6 [i_3] [i_4]))), var_14))));
                            var_21 = max(var_13, (arr_16 [i_3] [i_4] [i_3]));
                            var_22 = var_8;
                        }
                    }
                }
                var_23 = (max(var_23, ((min((max(((var_2 ? (arr_15 [i_4] [i_4]) : (arr_18 [i_3] [i_4]))), ((max(239, (arr_15 [i_4] [i_4])))))), var_6)))));

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_24 = var_11;
                                var_25 -= 3485299871;
                            }
                        }
                    }
                    var_26 = arr_12 [i_3] [i_7];
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        var_27 = (min(var_27, var_6));
                        var_28 = var_8;
                        var_29 = ((((((arr_38 [i_3] [i_4] [i_3] [i_4] [i_4] [i_11]) - var_3))) ? ((var_0 ? (arr_19 [2]) : var_6)) : var_4));
                    }
                    var_30 = var_13;
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                {
                    var_31 = (min((arr_30 [i_3] [i_3] [i_3] [i_12]), var_5));
                    arr_42 [3] [i_3] [i_4] [i_12] = ((((min(var_6, var_3))) ? ((-255 - (((arr_35 [i_3]) ? -6947748524592974763 : var_6)))) : ((var_0 ? (3370798634 ^ 4) : var_13))));
                }
            }
        }
    }
    var_32 += 45;
    var_33 = (((((((max(4294967295, 35183298347008))) || var_2))) / var_7));
    #pragma endscop
}
