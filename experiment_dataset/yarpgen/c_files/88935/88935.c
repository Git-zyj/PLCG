/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(23, ((max((-127 - 1), (min(var_2, var_3)))))));
    var_11 = max(var_1, var_1);

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_12 = (max((min((arr_1 [i_0]), (arr_3 [i_0]))), var_2));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_13 = (arr_11 [i_0] [i_1 + 1] [i_2] [i_2]);
                        var_14 = ((316 ? ((min(var_2, -1))) : ((max((arr_9 [i_3] [i_2] [i_1] [i_0]), 0)))));
                    }
                }
            }
        }
        var_15 = ((max((arr_11 [i_0] [i_0] [i_0] [i_0]), (arr_1 [i_0]))));

        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((min(((((arr_9 [i_5] [i_5] [i_5] [i_5]) || (arr_9 [i_0] [i_4 - 1] [i_5] [i_6])))), ((var_2 & (arr_19 [i_7] [i_7] [i_7] [i_7])))))))));
                            var_17 = 0;
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_18 = (max(var_18, -4));
                var_19 = ((((((arr_19 [i_0] [i_0] [i_4 + 1] [i_8]) * ((1 / (arr_18 [i_0] [i_4] [i_8])))))) ? var_9 : -17));
                var_20 = ((((((max(-1, (arr_13 [i_0] [i_4] [i_8])))) ? (((arr_4 [i_0] [i_4] [i_8]) ^ (arr_14 [i_0] [i_0] [i_0]))) : ((max((arr_13 [i_8] [i_4 + 2] [i_0]), var_9))))) != ((((!(-111 / -116)))))));
                var_21 |= (max(995968917, 995968943));
            }

            for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_22 = (arr_9 [i_0] [i_4] [i_9] [i_10]);
                    var_23 = (min(var_23, 2317845786));
                    var_24 = ((var_4 ? (arr_5 [i_4 - 3] [i_4 + 1]) : var_2));
                    var_25 = (((arr_25 [i_4 + 2] [i_4 + 3] [i_4 + 1]) - (arr_24 [i_4] [i_9] [i_10])));
                    var_26 = (((arr_4 [i_10] [i_4 - 1] [i_9]) != 0));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_27 = (min(0, (arr_33 [i_11] [i_4 + 2] [i_11 + 1])));
                            var_28 = ((~(((~var_3) ? ((max(var_4, var_2))) : ((27380 ? 16383 : 26))))));
                        }
                    }
                }
                var_29 = (max(var_29, (((+((max((arr_9 [i_0] [i_4] [i_9] [i_4 - 2]), (arr_9 [i_9] [i_4 - 2] [i_9] [i_4 + 1])))))))));
            }
            for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_30 &= (arr_42 [i_0] [i_4] [i_13] [i_13] [i_14] [i_15]);
                            var_31 = (min(var_31, (((min((arr_5 [i_0] [i_4 + 1]), ((max(var_7, (arr_19 [i_0] [i_14] [i_13] [i_14]))))))))));
                            var_32 |= (min(32767, (arr_24 [i_4 - 3] [i_4 - 2] [i_4 + 1])));
                            var_33 = (((((~(~31)))) | (max(1977121509, 0))));
                        }
                    }
                }
                var_34 = (min((arr_27 [i_0] [i_4 + 3] [i_13] [i_13]), (min((((arr_43 [i_0] [i_4]) | 33391)), (arr_38 [i_0] [i_0] [i_4] [i_4] [i_13])))));
                var_35 = ((((((arr_14 [i_0] [i_0] [i_13]) ? (((arr_33 [i_0] [i_4] [i_4]) ? var_6 : (arr_28 [i_0] [i_4] [i_4] [i_13]))) : ((var_3 / (arr_16 [i_4] [i_4] [i_0] [i_0])))))) <= ((min((arr_15 [i_0] [i_13] [i_13]), 2317845786)))));
            }
        }
    }
    for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
    {
        var_36 = (max(var_2, ((((max((arr_23 [i_16] [i_16] [i_16] [i_16]), var_0))) && var_4))));
        var_37 = (min((-112 || 0), ((-(arr_8 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))));
    }
    var_38 ^= var_4;
    #pragma endscop
}
