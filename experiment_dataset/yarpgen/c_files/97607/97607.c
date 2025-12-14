/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = -var_1;
                arr_6 [i_0] [i_0] [i_1] = ((3801 > (8191 * 18)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 17;i_4 += 1)
                            {
                                var_16 = (min(var_16, (var_7 | -1709096534)));
                                var_17 ^= (max(((((max((arr_8 [i_0] [18] [18] [i_4]), 37))) ? ((min(var_14, var_11))) : var_4)), ((((max(42, 24))) ? ((var_9 ? (arr_13 [i_4] [i_3] [i_1] [i_1] [i_0]) : var_14)) : var_11))));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_18 -= (((-(arr_14 [19] [i_1] [i_1] [i_2] [i_2] [i_3] [i_1]))));
                                var_19 += 200;
                                var_20 = (max(218, 230));
                                arr_16 [i_0] [18] [i_2] [i_3] [i_5] = ((8625093697079307795 ? var_10 : (((min(41, 239))))));
                            }
                            for (int i_6 = 1; i_6 < 17;i_6 += 1)
                            {
                                var_21 = (max(var_21, var_8));
                                var_22 &= 2088960;
                                var_23 = (min(var_23, ((max(201, 57)))));
                                arr_21 [i_0 + 1] [i_0] [i_6] [i_0 + 1] [i_1] |= 1;
                            }

                            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                            {
                                var_24 = 3;
                                arr_25 [i_0] [i_0] = ((-6079878286548383108 ? (arr_5 [i_0]) : ((var_6 ? var_2 : var_13))));
                                var_25 = (((((-(arr_8 [i_1] [i_2] [i_1] [i_2 - 1])))) ? var_5 : (arr_7 [i_2] [i_2] [i_2] [i_2 - 1])));
                                var_26 = ((((max(var_8, 1))) ? (max(((var_5 ? (arr_20 [0] [i_3] [i_2] [i_1] [i_0 - 1]) : var_12)), ((var_1 ? 1 : 226)))) : (arr_17 [i_0] [i_0 - 1] [i_2] [i_0] [i_2] [i_0])));
                                var_27 += (arr_4 [i_1] [i_0]);
                            }
                            for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                            {
                                var_28 = 11431349571828632000;
                                var_29 |= 59;
                            }
                            var_30 = ((((((arr_10 [i_0 + 1] [i_0] [i_2 + 1] [i_3]) ? ((var_5 ? (arr_27 [i_0] [i_3] [i_0] [i_1] [i_1] [i_0]) : var_11)) : ((max(var_9, var_6)))))) ? ((((max(var_7, -8625093697079307796))) ? (arr_20 [i_0 - 1] [16] [i_0] [i_2] [i_2 + 1]) : (max(64512, var_2)))) : var_13));
                            var_31 = 214;
                            var_32 = 172;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_33 ^= ((var_4 ^ ((803 ? (arr_26 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]) : var_5))));
                                var_34 = (max(var_34, (max(var_0, var_13))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = 27;
    var_36 = 64703;
    #pragma endscop
}
