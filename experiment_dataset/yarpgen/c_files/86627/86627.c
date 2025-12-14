/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_8, var_7));
    var_15 = (2877142269985777987 + var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_13, (arr_9 [0])));
                            var_17 = (min(var_17, ((max(((((arr_4 [i_1 - 1] [i_2 + 2] [i_2 + 1]) << (((max((-127 - 1), 14139329570806760887)) - 18446744073709551470))))), (((arr_2 [i_0] [i_2] [i_0]) ? var_4 : (arr_2 [i_0] [i_1 - 1] [i_2]))))))));
                            arr_12 [13] [i_1] [1] = ((-((((var_11 - (arr_1 [i_0] [3]))) + ((((arr_4 [i_2] [i_1] [i_0]) ? 72 : var_5)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_18 += ((((((arr_9 [i_5]) ? ((var_13 ? var_8 : var_11)) : var_2))) ? var_13 : -var_2));
                            arr_19 [2] [5] [5] [i_5] [i_5] [i_1] = (max(((3554297069226894319 ? (((((arr_11 [i_1]) <= var_0)))) : var_11)), (((arr_18 [i_0] [15] [11] [14] [i_1] [1]) ? (((arr_1 [19] [1]) ? (arr_8 [i_0] [i_0] [9]) : 4169457581853218846)) : var_10))));
                            var_19 = (~var_12);
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_20 = max((((arr_21 [i_0] [i_0]) ? (arr_20 [i_1 - 1] [1] [i_1 - 1]) : ((-(arr_10 [19] [19] [19] [i_1] [19]))))), (((((30 ? 4777134565485300627 : 4307414502902790729))) ? var_1 : (!1))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_28 [i_1] [1] [1] [i_1] [i_7] [14] = 148;
                                var_21 = arr_14 [i_0] [14] [i_6] [3];
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_22 = (arr_8 [i_0] [i_0] [i_9]);
                    arr_32 [i_0] [i_1] = (arr_25 [i_0] [i_0] [16] [i_1] [5] [1] [18]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                arr_40 [i_1] = (arr_9 [2]);
                                var_23 = ((-(max(3554297069226894319, (arr_10 [i_1 - 1] [i_1 - 1] [14] [i_1] [8])))));
                                arr_41 [i_0] [i_1] [i_9] [i_1] [i_1] = var_10;
                            }
                        }
                    }
                    var_24 -= (((arr_6 [i_0] [i_1] [i_9]) ^ ((((min((arr_24 [i_0] [18] [18] [i_9]), (arr_20 [i_0] [7] [7])))) ? var_10 : (arr_11 [i_9])))));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_25 = (((((var_4 ? (arr_0 [i_0]) : (arr_35 [i_1])))) ? (~3) : (((((arr_13 [i_12] [i_0]) >= (arr_13 [i_0] [i_12])))))));
                    var_26 = var_4;
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    var_27 -= ((!(arr_37 [i_1 - 1] [i_13] [i_1 - 1] [i_13] [18])));
                    var_28 = (arr_13 [i_0] [i_1 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
