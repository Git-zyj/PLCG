/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((var_8 ? ((max(var_9, var_12))) : (~var_3)));
    var_14 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = var_7;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 -= ((~(arr_7 [i_2] [i_2 + 2] [i_2 - 1] [i_2 + 2])));
                    var_17 = (max(var_17, (((((((arr_2 [i_0]) ? var_3 : var_1))) ? 65535 : 1)))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = (((arr_7 [i_2] [i_2] [i_2] [i_2 + 2]) ? 31 : (((arr_5 [i_0] [i_0] [i_2 + 1] [i_3]) ? 1 : (arr_1 [i_0] [i_3])))));
                        var_18 = (arr_8 [i_0] [i_1] [i_1] [i_1] [i_1] [1]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_19 += ((!(~var_7)));
                            arr_15 [i_0] [i_1] [i_2] [i_4] [i_1] [1] = ((var_0 ? ((var_4 ? 0 : (arr_12 [1] [i_2] [i_0] [i_4] [i_0] [i_0]))) : (arr_11 [i_0] [i_1] [i_2] [i_0])));
                            arr_16 [i_5] = 1;
                        }
                        for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_20 &= (arr_9 [i_0] [i_1]);
                            arr_19 [i_6] [i_2] [i_6] = (((!var_12) ? (arr_2 [i_0]) : ((var_0 ? (arr_14 [i_0] [i_1] [i_1] [i_4] [i_6] [i_1]) : var_12))));
                            arr_20 [i_0] [i_1] [i_6] [i_1] = ((65535 ? (((3337587469 ? var_0 : var_9))) : (arr_18 [1] [i_6 + 1] [i_2] [i_2 + 2] [i_6 + 1])));
                            var_21 = (min(var_21, (((var_4 ? var_9 : ((330393351 ? var_3 : var_3)))))));
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_22 = ((((arr_14 [i_0] [i_4] [i_2] [i_2] [i_0] [i_0]) ? var_0 : var_5)));
                            var_23 = (min(var_23, ((((arr_18 [i_2] [i_2 + 2] [i_2 + 1] [i_2] [i_2 - 1]) ? (arr_18 [i_0] [i_0] [i_1] [i_0] [i_2 - 1]) : (arr_18 [i_0] [i_1] [i_1] [i_2] [i_2 + 2]))))));
                        }
                        for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_24 = ((var_8 ? (arr_5 [i_0] [i_2] [i_4] [9]) : var_3));
                            var_25 = var_7;
                            arr_27 [i_2] [i_0] [i_2 + 2] [i_0] = var_8;
                            var_26 = var_12;
                        }
                        var_27 = ((var_0 ? var_2 : ((var_2 ? (arr_3 [i_2]) : var_8))));
                        arr_28 [i_2] [i_1] = ((19529 ? -32697 : 1));
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_1] [i_1] |= ((((((arr_30 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_9 - 1] [i_9]) ? var_2 : var_2))) ? (((!(arr_1 [i_2] [i_2])))) : 3111653324));
                        var_28 = (var_8 ? ((34 ? var_2 : (arr_25 [i_0] [i_0] [i_1] [i_1] [i_9]))) : 1);
                    }
                    var_29 = (arr_23 [i_0] [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_2 - 1] [i_2 + 2]);
                }
            }
        }
        arr_32 [i_0] = (var_5 ? 16611766554807605182 : (((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [7] [i_0]) : (arr_29 [i_0] [i_0] [i_0]))));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        arr_35 [i_10] = var_0;
        var_30 = ((((max((arr_0 [i_10] [i_10]), (arr_30 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))) ? (((var_10 ? (arr_30 [i_10] [i_10] [i_10] [i_10] [4] [i_10]) : -805960958))) : (((arr_0 [i_10] [i_10]) ? var_12 : (arr_0 [i_10] [i_10])))));
        var_31 = ((((min((((arr_34 [i_10]) ? var_4 : 1738562980)), (min(var_12, (arr_3 [9])))))) ? ((min((arr_3 [i_10]), (!var_4)))) : (arr_34 [i_10])));
        var_32 = (((((var_2 ? var_11 : (arr_33 [i_10]))))));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        var_33 |= var_12;
        var_34 = (max(var_34, ((((!1) ? (((((var_0 ? (arr_22 [i_11] [i_11]) : var_1))) ? (arr_1 [i_11] [i_11]) : var_4)) : ((max((arr_9 [i_11] [i_11]), (arr_22 [i_11] [i_11])))))))));
        var_35 = 1;
        arr_39 [i_11] = var_8;
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 20;i_12 += 1)
    {
        var_36 = (arr_40 [i_12 - 1]);
        arr_42 [12] [i_12] = (((arr_40 [i_12 - 1]) ? (arr_40 [i_12 + 1]) : var_1));
    }
    var_37 = ((var_11 ? (((min(var_10, var_7)))) : var_5));
    var_38 = ((var_5 ? var_8 : ((((max(var_0, var_3))) ? var_3 : (!var_3)))));
    #pragma endscop
}
