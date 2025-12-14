/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(((~(!var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_3] [i_4 + 1] = (((((!(arr_0 [i_0] [i_0])))) > (+-255)));
                                arr_17 [8] [i_3] [i_2] = (((0 && -var_9) == (((((-(arr_9 [i_1] [i_1] [3] [i_1]))) == (var_10 - var_4))))));
                                arr_18 [i_0] [i_3] [1] = ((~((~(((arr_5 [6] [i_1] [i_1]) + 1))))));
                                var_16 = ((~(((!(~18446744073709551615))))));
                                arr_19 [i_0] [i_3] = ((((-(!247))) < (((!(!7))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_26 [i_0] [14] [i_6] [i_2] [i_0] [i_6] = ((-((((-127 - 1) && 255)))));
                                var_17 = (max(var_17, ((((((((~(arr_7 [i_0] [i_0] [i_0]))) || (((arr_5 [i_0] [i_0] [7]) <= (arr_5 [i_0] [i_5 + 3] [i_5 + 3])))))))))));
                                var_18 = (min(var_18, (((-((((~(arr_1 [i_6]))) >> ((((-(arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] [i_6]))) + 139)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_33 [i_8] = (((!-1) ^ (((((!(arr_32 [i_0] [1] [i_2] [i_0])))) * (-84 / 126)))));
                                var_19 ^= 1;
                                var_20 ^= ((((-(!65535))) < -var_0));
                                var_21 = (((22 < 1) | ((-(~var_11)))));
                            }
                        }
                    }
                    arr_34 [i_0] [i_0] [i_0] = ((-(((!(((-(arr_8 [i_0] [i_1] [i_1])))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            {
                var_22 = ((-((0 - (1 * 1)))));
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_50 [i_13] [i_12] [i_13] [i_13] [3] [i_9] = ((~((((!(arr_43 [i_13] [i_12] [i_10])))))));
                                arr_51 [i_13] [i_13] = (((((!(arr_37 [i_9] [i_10]))))));
                            }
                        }
                    }
                }
                arr_52 [i_10] = ((-((~(arr_35 [i_9])))));
                arr_53 [1] [i_10] = ((!(((((~(arr_42 [i_10] [i_9] [i_9 - 2]))) + (~var_9))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 4; i_14 < 19;i_14 += 1)
    {
        for (int i_15 = 3; i_15 < 20;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                {
                    arr_61 [i_14] [i_16] [i_14] [i_16] = ((-((-(~-22)))));
                    var_23 += ((-(!-var_5)));
                    var_24 *= (((1 << (111 <= 2944112113151766968))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 24;i_17 += 1)
    {
        for (int i_18 = 4; i_18 < 23;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                {
                    arr_71 [i_18 + 1] [i_18 + 1] [i_19] [i_18] = (((((!((!(arr_62 [i_17])))))) * ((((224 + -9223372036854775780) == -var_13)))));
                    var_25 = 86;
                }
            }
        }
    }
    #pragma endscop
}
