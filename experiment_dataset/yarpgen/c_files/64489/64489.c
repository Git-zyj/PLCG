/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (arr_1 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, -var_8));
                            var_12 = (((!-215) ? (((!(((6569150036710374701 ? (arr_8 [i_0 - 1] [i_0] [9] [i_2] [i_3]) : -1635240859)))))) : (arr_8 [i_1 + 2] [i_1] [13] [i_3] [13])));
                            var_13 = ((((9131174031158051123 ? (arr_3 [20]) : 11050301569084164275))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_17 [i_4] [i_4] [i_4] = var_2;
                    var_14 *= ((-((-(arr_3 [i_5])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_15 = (min(1, (arr_1 [i_4] [i_5])));
                                var_16 = ((((((((69 ? 1 : 1))) ? (arr_18 [i_5] [i_5] [i_5]) : var_9))) ? (max(14651, ((max((arr_1 [i_7] [i_8]), 0))))) : ((((!var_0) ? (!1) : (arr_10 [i_6]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_27 [i_10] [i_5] [i_6] [i_10] [6] = (((arr_10 [i_10]) ? ((((!(arr_19 [i_4] [i_5] [1] [2] [i_10]))) ? (!1619119472) : (arr_10 [i_6]))) : (!150)));
                                arr_28 [i_4] [i_4] [i_4] [i_6] [i_10] [8] [i_10] = (min(((((min((arr_16 [i_4] [i_4] [i_4]), (arr_14 [i_4] [i_4] [i_4])))) + var_6)), var_5));
                                arr_29 [1] [i_5] [5] [i_10] [i_9] = ((((((((var_3 ? (arr_5 [i_6] [20] [i_10]) : (arr_6 [i_4])))) ? (min(var_0, var_3)) : (arr_6 [i_9])))) ? ((min((arr_3 [i_10]), (arr_3 [i_4])))) : (((!(arr_5 [i_4] [i_4] [i_4]))))));
                                arr_30 [i_10] = (min(-var_0, (min((arr_23 [6] [i_10] [i_10] [6]), 192))));
                                var_17 = (max(var_17, var_0));
                            }
                        }
                    }
                    arr_31 [i_4] [i_5] [i_6] [i_6] = ((!(arr_25 [i_4] [i_4] [i_6] [2] [i_4] [2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 19;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            {
                arr_37 [i_11] = ((((arr_6 [i_11 - 1]) ? (arr_6 [i_11 + 1]) : (arr_6 [i_11 - 1]))));
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            {
                                arr_45 [i_11] [i_12] [i_13] [i_14 + 1] [i_14] = ((-(min((min(var_7, var_4)), (arr_3 [8])))));
                                var_18 ^= ((!(arr_4 [i_11] [i_14] [i_13] [i_12])));
                            }
                        }
                    }
                }
                var_19 = (arr_35 [i_11] [i_11] [i_12]);
                arr_46 [i_11] [i_12] [i_12] = (((min((!239), ((!(arr_0 [12] [i_12]))))) ? ((((max(70, 39106431891500944))) ? ((max((arr_7 [10]), (arr_42 [i_12] [i_12] [i_11 - 1] [i_11] [i_11 - 1])))) : 61542)) : (((!var_9) ? (arr_36 [i_11] [i_12] [i_11 - 1]) : (arr_39 [i_11] [i_11] [i_11])))));
            }
        }
    }
    var_20 = (var_8 ? var_8 : 2659472551);
    var_21 = var_8;
    #pragma endscop
}
