/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_1] [i_0 + 2] = (arr_2 [8]);
                    var_18 ^= ((~((+((max((arr_2 [i_1]), var_16)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1]);
                                var_20 = 2448429625878260202;
                                var_21 -= ((((max(var_0, (arr_3 [i_0])))) ? (!1) : var_7));
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = (max(-var_3, var_11));
                                var_22 = 40;
                            }
                        }
                    }
                    var_23 ^= ((((max((arr_13 [i_0 - 3] [i_0 - 3]), (arr_13 [i_0 - 3] [i_0 - 3])))) ? ((((var_6 != (arr_7 [i_2] [i_2]))) ? (arr_1 [i_0]) : (215 ^ var_0))) : (((((-(arr_13 [i_0] [i_0])))) ? (((var_16 ? (arr_8 [i_0] [i_0]) : 69))) : ((var_12 ? (arr_6 [i_2]) : (arr_8 [15] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] = (max(9142300465430842296, 25));
                                arr_21 [i_0] [i_1] [i_1] [6] [i_6] = (max(((-(arr_8 [i_0 - 2] [i_0]))), (arr_8 [i_0 - 2] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                var_24 = ((((!(arr_26 [i_7] [i_7] [i_8]))) ? (((arr_26 [i_7] [i_8] [i_8]) ? (arr_26 [i_7] [i_7] [i_7]) : (arr_26 [i_8] [i_7] [i_7]))) : ((max((arr_26 [i_7] [18] [i_7]), (arr_26 [i_7] [i_8] [i_7]))))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {

                            for (int i_11 = 0; i_11 < 20;i_11 += 1)
                            {
                                arr_33 [i_9] [i_9] = (arr_26 [i_9] [12] [i_7]);
                                var_25 |= ((224 ? (-127 - 1) : 33389));
                                var_26 = (max(138, 0));
                            }
                            for (int i_12 = 0; i_12 < 20;i_12 += 1)
                            {
                                arr_37 [i_9] [i_8] [i_8] [i_8] [i_8] = ((((max((((arr_24 [i_7]) ? (arr_34 [i_7] [18] [i_7] [i_7] [i_7] [i_7] [18]) : var_13)), 1253002468))) ? (arr_36 [i_7] [i_8] [i_9 + 3] [i_10]) : var_3));
                                arr_38 [i_12] [i_10] [i_9] [i_9] [i_7] [i_7] = (min(((((-127 - 1) || (((var_17 ? (arr_32 [i_9] [i_8] [4] [14] [11] [i_8] [11]) : var_12)))))), ((58 ? 8344 : 12))));
                                var_27 = (((((((((arr_36 [i_12] [i_8] [i_9 + 1] [i_10]) ^ (arr_27 [i_7] [i_8] [i_9] [i_12])))) ? ((min((arr_25 [i_7] [i_7] [i_7]), (arr_36 [i_8] [i_9] [0] [i_12])))) : (~18446744073709551597)))) ? (arr_35 [i_7] [i_7] [i_8] [i_10] [i_8] [i_12]) : var_13));
                                var_28 = (((arr_34 [i_9] [i_7] [3] [i_7] [i_9] [i_7] [i_7]) ? ((max((arr_27 [i_9 - 1] [i_9 + 3] [i_9 + 2] [i_9 + 2]), (((var_6 < (arr_24 [i_12]))))))) : ((var_15 ? var_15 : (arr_26 [12] [7] [i_9])))));
                            }
                            var_29 = (arr_31 [i_7] [i_8] [17] [i_9] [i_10]);
                        }
                    }
                }
            }
        }
    }
    var_30 = ((-68 ? ((((-var_15 || (((-8121 ? 23845 : -63))))))) : (min((max(31, var_7)), 1020))));
    #pragma endscop
}
