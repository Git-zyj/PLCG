/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((!-6485643793024402801), var_12));
    var_18 = (~12986810978163541938);
    var_19 = 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [20] = ((32763 ? (((-3748 ? -19341 : 1537365818633261915))) : 366812845394360914));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = (!((((arr_1 [i_0 + 1] [i_0]) ? ((-2147483637 ? 0 : (arr_8 [i_1] [i_0]))) : -3749))));
                            arr_12 [16] [i_0] [i_2] [i_3 - 2] = 176;
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_21 = (arr_4 [i_5] [i_0] [i_1 + 1]);

                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            arr_21 [i_0 + 1] [i_0] [i_4] [i_6] = ((((6485643793024402779 >= (arr_19 [i_0] [i_1] [i_1] [i_0] [i_4] [i_5] [20])))));
                            var_22 = ((!(-127 - 1)));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_0] [i_5] [i_0] = 10249897948733288504;
                            var_23 = (arr_6 [i_0 + 2] [i_1] [i_5] [i_7]);
                            var_24 = (!1);
                        }
                        var_25 = 17169458100335681390;
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_26 = 218;
                        var_27 = (min(var_27, (arr_10 [i_0] [i_0] [i_1] [i_4] [i_8])));
                    }

                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        arr_31 [i_0] [i_4] [i_1] [i_0] = (((arr_16 [i_1 - 1] [i_0] [i_0 + 1]) ? (arr_16 [i_1 - 1] [i_0] [i_0 + 3]) : -597992726));
                        arr_32 [i_0] [i_9] [3] [i_4] [i_1] [i_0] = (((arr_14 [i_0]) ? (arr_14 [i_0]) : (arr_14 [i_0])));
                        var_28 |= (((-1034962822 - (arr_19 [i_0] [i_0 + 3] [i_1] [i_4] [i_4] [i_4] [0]))) < 119);
                        arr_33 [i_0] [i_0] = 3748;
                        var_29 = (((((arr_19 [i_0] [i_0] [4] [i_0] [i_0] [i_9] [i_9 + 1]) ? (arr_26 [i_0] [i_0] [i_4] [i_9 - 2]) : 4294967295)) >= ((((arr_9 [i_0] [i_0] [i_0]) / 38994)))));
                    }
                    for (int i_10 = 2; i_10 < 21;i_10 += 1)
                    {
                        var_30 = (((119 ? 145 : 6598532274426892533)));
                        arr_36 [i_10] [i_0] [i_0] [i_0] = (~-3749);
                    }
                    var_31 = (max(var_31, ((!(arr_3 [i_4])))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_32 = (min(var_32, (arr_14 [i_4])));
                                arr_44 [i_0] [i_0] [i_4] = (((((-7868719414351595623 ? 597992726 : 2695187772111780390))) ? ((((!(arr_34 [i_0] [i_1] [i_12] [i_12] [i_12] [i_0]))))) : ((18446744073709551615 ? 0 : 1))));
                                var_33 = 276106355;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                arr_52 [1] [i_0] [i_14] [i_13] [i_13] [i_0] [i_0] = 46743;
                                var_34 |= 537212165;
                            }
                        }
                    }
                    var_35 = ((~(~144)));
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                {
                    var_36 = (!-6895);
                    arr_56 [i_0] [1] [i_0] = (~112);
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                {
                    arr_60 [i_0] = (!1);
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        for (int i_19 = 3; i_19 < 20;i_19 += 1)
                        {
                            {
                                var_37 ^= -47;
                                var_38 = (((arr_4 [i_19 + 2] [i_0] [i_0 - 1]) || 0));
                            }
                        }
                    }
                    var_39 = ((4079522743 ? -6895 : 1));
                }
            }
        }
    }
    #pragma endscop
}
