/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 *= ((((((~(arr_4 [i_0] [i_1] [0]))) - (arr_1 [8] [i_1]))) < (((-(arr_3 [i_0]))))));
                var_21 -= ((((1393551289 / 7984174337944851140) ? (((arr_0 [i_1]) ? (arr_1 [12] [10]) : (arr_5 [i_1]))) : (((arr_2 [17] [i_0]) ? (arr_1 [6] [18]) : (arr_2 [i_1] [i_0]))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_22 = (((-(min(831445058, 65530)))));
                    arr_10 [i_0] [i_1] [i_2] [i_0] = (max(-55575, ((-(arr_7 [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_18 [i_4] [i_0] [i_4] [i_3] [i_2] [i_0] [0] = 959000570075821691;
                                var_23 ^= ((-((-(arr_2 [i_0] [i_4 - 1])))));
                            }
                        }
                    }
                    var_24 = ((((((max((arr_16 [i_0] [i_0] [5] [i_0] [i_0]), 977976773733717289))) ? ((max((arr_4 [4] [i_0] [i_0]), (arr_14 [i_0] [i_2] [i_1] [i_1] [i_0])))) : (max((arr_4 [i_0] [i_0] [i_0]), (arr_0 [i_1]))))) < (((235 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [2] [i_0]))))));
                }
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    var_25 = (arr_2 [i_1] [i_5]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_26 = (arr_14 [i_0] [i_0] [12] [i_0] [i_0]);
                                var_27 = (arr_11 [16] [i_0] [21] [i_0]);
                            }
                        }
                    }
                    arr_27 [i_0] = 65529;
                }
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    var_28 = (min(var_28, (((((+((55449 ? (arr_28 [20] [i_1] [i_8] [i_8]) : (arr_9 [i_0] [i_0] [i_1] [i_8]))))) / (arr_28 [4] [4] [i_0] [4]))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_29 = ((max(3801923839322698859, 14399620921467372608)));
                                var_30 ^= ((+(min((arr_6 [i_0] [i_1] [i_8] [i_9]), -1451396163))));
                                var_31 = arr_25 [i_0] [i_0] [i_0] [i_0];
                            }
                        }
                    }
                    arr_35 [i_0] [i_0] [i_0] [i_0] = (max(((+(((arr_0 [i_0]) ? 3141501157078039172 : (arr_28 [i_0] [5] [i_1] [i_0]))))), (~41735)));
                }
                arr_36 [16] |= (((-(arr_24 [i_0] [i_1] [i_1] [i_1] [14]))));
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_32 = (max(var_32, ((max((arr_17 [i_0] [i_1]), 524224)))));
                                var_33 = (max(var_33, 56953));
                                var_34 -= ((-((~(arr_13 [i_1] [i_1] [i_1] [18] [i_1] [i_12 - 2])))));
                                var_35 = (arr_11 [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 ^= 0;
    #pragma endscop
}
