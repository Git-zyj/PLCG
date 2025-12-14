/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((-(max(-1, 118))))) ? var_3 : var_7));
    var_17 = (min(((max((!1), 112))), var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((max((21578 || var_12), (!57946))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 = ((-(arr_5 [i_0] [i_0] [i_0])));
                        var_20 ^= (arr_9 [i_1] [i_2] [i_3]);

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_21 += (((-7589 ? 53555 : ((31308 ? var_14 : -119)))));
                            var_22 = ((-7325017081070730628 ? ((-(arr_6 [i_2] [i_4 - 2]))) : 57946));
                            var_23 = (min(var_23, (!8536386018097139545)));
                            var_24 = (min(var_24, ((((!(!var_14)))))));
                        }
                        var_25 ^= 2;
                        var_26 ^= (((((((arr_4 [i_0]) ? (arr_9 [2] [2] [2]) : 7))) && ((min(1, (arr_6 [i_1] [i_3])))))));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_27 ^= ((11 - ((max(((~(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))), (!1228836388))))));
                        var_28 = (min(var_28, ((-var_0 / (((((var_8 ? 562949953421311 : var_9))) ? ((var_3 << (((arr_8 [i_0] [i_0] [i_0]) - 346333998)))) : (!-24959)))))));
                        var_29 = (min(var_29, ((((max((max(1, var_14)), -0)) - ((-(((arr_12 [i_2] [i_2] [i_2]) ? 2246413999 : (arr_14 [12]))))))))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_30 += ((((!((!(arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6]))))) ? ((var_15 ? (((1 ? -1011701675 : (arr_14 [7])))) : (arr_12 [i_2] [i_2] [i_1]))) : -1));
                        var_31 = (((((!(((var_0 ? -8 : -1)))))) - ((((var_6 ? var_11 : (-2147483647 - 1)))))));
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_32 = (min(var_32, var_10));
            var_33 += ((4924865003704279427 ? (arr_21 [i_7] [i_7] [i_7] [i_7] [i_8] [i_8]) : (((!(var_1 * var_2))))));
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
        {
            var_34 = var_7;
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        arr_35 [i_7] [i_7] [i_7] [i_7] [i_11] = (((((arr_10 [i_7] [i_10 - 1] [i_11] [i_11]) ^ 31308))) ? ((187769008371981499 / (arr_10 [i_7] [i_10 - 1] [i_10] [i_10]))) : ((max((arr_17 [i_10] [i_10 - 1] [i_10] [i_10 - 1] [i_10]), (arr_10 [i_10] [i_10 - 1] [i_10 - 1] [i_10])))));
                        var_35 ^= -8848872777901224917;
                    }
                }
            }
        }
        var_36 = (max(var_36, (min((~0), (max(0, ((~(arr_25 [i_7] [i_7] [i_7])))))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        arr_38 [i_12] [i_12] = ((!(arr_36 [i_12] [i_12])));
        var_37 = 1;
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 16;i_15 += 1)
            {
                {
                    var_38 = (min(var_38, (arr_41 [i_13 + 1])));
                    var_39 = (min(var_39, 0));
                    var_40 = (((arr_10 [i_14] [i_15] [i_15 + 1] [8]) ? (arr_15 [i_15] [10] [i_15 + 1] [i_15] [i_15]) : (arr_21 [i_13] [i_15] [i_15 + 1] [i_15] [i_15 - 1] [i_15])));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            {
                                var_41 = (min(var_41, (1490 > 61)));
                                var_42 = (max(var_42, ((((arr_39 [i_16]) / ((var_3 ? 4924865003704279422 : (arr_8 [i_13] [i_13] [11]))))))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_18 = 0; i_18 < 0;i_18 += 1)
        {
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        {
                            var_43 = (min(var_43, ((((250 ? -1046641473 : -25))))));
                            var_44 ^= ((10876867775646116082 ? (arr_39 [i_13 + 1]) : (arr_39 [i_13 + 1])));
                            var_45 = ((!(~27)));
                        }
                    }
                }
            }
            var_46 = (min(var_46, (((!(((63 ? 3894379434071638461 : -1495669221))))))));
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 0;i_23 += 1)
                {
                    {

                        for (int i_24 = 2; i_24 < 15;i_24 += 1) /* same iter space */
                        {
                            var_47 = (~11797);
                            arr_72 [i_13] [i_24] [i_22] [i_23] [5] = -3599880625;
                        }
                        for (int i_25 = 2; i_25 < 15;i_25 += 1) /* same iter space */
                        {
                            var_48 = (min(var_48, (((!(arr_59 [i_25 - 2] [i_18 + 1] [i_18] [i_13 + 1]))))));
                            var_49 += ((((arr_44 [i_13] [i_18]) ? var_3 : (arr_8 [i_18 + 1] [i_18 + 1] [i_18 + 1]))));
                            var_50 += ((!(((11 ? var_12 : 0)))));
                            var_51 += (arr_11 [i_18] [i_18 + 1]);
                        }
                        for (int i_26 = 0; i_26 < 1;i_26 += 1)
                        {
                            var_52 = (min(var_52, var_7));
                            var_53 = (max(var_53, 48286));
                        }
                        arr_78 [i_13 + 1] [i_22] [i_23] = ((!(~255)));
                        arr_79 [i_13] [i_13 + 1] [i_13] [i_13] = 2356607408641606061;
                        var_54 = ((var_2 - ((9581 ? (arr_64 [i_13 + 1]) : (arr_18 [i_13] [i_18 + 1] [i_23])))));
                    }
                }
            }
            var_55 = ((~(((arr_7 [i_13] [15]) + (arr_41 [i_18])))));
        }
        for (int i_27 = 0; i_27 < 1;i_27 += 1)
        {
            var_56 = (min(var_56, (!var_7)));
            /* LoopNest 2 */
            for (int i_28 = 2; i_28 < 16;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {
                    {
                        var_57 = (((arr_43 [i_13 + 1]) ? (~15872) : (!-396)));
                        arr_87 [i_27] = (((((-3508 / (arr_14 [i_28])))) && var_9));
                    }
                }
            }
            var_58 = ((~(arr_75 [i_13] [i_13 + 1])));
            var_59 = (min(var_59, -63));
        }
    }
    for (int i_30 = 0; i_30 < 0;i_30 += 1) /* same iter space */
    {
        var_60 ^= var_3;
        arr_90 [i_30 + 1] [i_30 + 1] = ((-(arr_2 [i_30 + 1] [i_30 + 1])));
        var_61 = (min(var_61, (((!(((var_11 ? ((~(arr_1 [i_30]))) : (!5652114426385342519)))))))));
        var_62 += (+-13);
        arr_91 [i_30] = ((0 ? 25 : -62));
    }
    #pragma endscop
}
