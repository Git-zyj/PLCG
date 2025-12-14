/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                            {
                                var_20 = (~-255);
                                var_21 = (max(((~(arr_5 [i_4] [i_4] [i_4]))), (arr_2 [i_0])));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                var_22 = ((-64 || ((!(arr_7 [i_5] [6] [7])))));
                                var_23 = ((((-(arr_11 [9] [9] [i_2] [i_3])))) & ((-(arr_7 [i_0] [i_0] [i_5]))));
                                var_24 = ((~((~(arr_15 [4] [i_0])))));
                                var_25 = (!var_14);
                                var_26 -= ((3710828820 ? (((arr_13 [i_5] [i_1] [i_2 + 2] [i_1] [i_0]) ? (arr_4 [i_1] [i_3]) : (arr_5 [i_0] [i_3] [i_3]))) : -1));
                            }
                            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                            {
                                var_27 = (min((((max((arr_7 [i_2] [i_3] [i_6]), 1330423317)) * (arr_15 [i_0] [i_3]))), 8092954416823000460));
                                arr_20 [i_6] [i_3] [i_3] [i_2] [i_3] [i_0] = (~var_9);
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 8;i_7 += 1)
                            {
                                arr_25 [i_0] [i_3] = (~var_18);
                                arr_26 [i_0] [i_0] [i_3] = (arr_2 [i_0]);
                                var_28 = -8561;
                            }

                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 10;i_8 += 1)
                            {
                                arr_29 [i_0] [i_8] [i_2] [i_3] [i_8] &= var_2;
                                arr_30 [i_3] [i_3] [i_3] = (~-1751833216);
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 10;i_9 += 1)
                            {
                                var_29 ^= 20722;
                                var_30 = 19396;
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 10;i_10 += 1)
                            {
                                arr_35 [4] [i_3] [i_3] [i_1] [i_0] = (arr_7 [2] [i_1] [i_1 - 1]);
                                var_31 = (((((240 - (arr_28 [i_0] [3] [i_2] [9] [9] [i_10] [9])))) ? 8557 : (arr_12 [i_10] [i_3] [i_2] [i_1] [i_0] [2])));
                            }
                            var_32 &= (((((var_18 & ((-8584 ? (arr_4 [i_0] [i_0]) : 29041))))) ? (((arr_9 [i_3]) ? (~146) : (arr_9 [6]))) : var_8));
                        }
                    }
                }
                var_33 = (((((5 ? (-32767 - 1) : 796149476))) ? ((~(arr_22 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0]))) : (((min((arr_9 [i_1]), (arr_31 [i_0] [i_0])))))));
            }
        }
    }
    var_34 = -var_6;
    #pragma endscop
}
