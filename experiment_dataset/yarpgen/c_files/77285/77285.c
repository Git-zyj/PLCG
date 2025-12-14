/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77285
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

                /* vectorizable */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_11 = (arr_2 [i_0]);
                    var_12 = (((((arr_3 [i_1]) ? (arr_8 [i_0] [i_0]) : (arr_0 [i_2]))) ^ ((((arr_8 [i_0] [i_2]) ? (arr_2 [9]) : (arr_6 [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, (((~(arr_5 [i_2 + 2] [i_1] [i_2]))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_0 [i_0]) == ((51766 ? var_0 : (arr_1 [i_1])))));
                                arr_17 [i_0] [i_4] [i_2] [i_3] [i_4] |= var_7;
                                var_14 += ((var_4 / (arr_12 [i_0] [i_1] [6] [i_3] [i_4] [i_2 - 1] [20])));
                            }
                        }
                    }
                    var_15 = (min(var_15, ((((arr_7 [i_0] [i_1] [i_2]) > (~13763))))));
                    arr_18 [i_0] [i_0] [i_2] [i_2] = var_1;
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_16 = ((+(((arr_12 [i_5] [i_1] [i_5] [i_5] [i_0] [i_5] [i_5]) - (arr_13 [i_0] [i_0])))));
                            var_17 = (min(var_17, var_1));
                            var_18 = arr_4 [1] [1];
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                arr_28 [i_7] [i_8] = 51766;
                var_19 = (arr_21 [i_7] [i_8] [i_8]);

                for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 3; i_10 < 15;i_10 += 1)
                    {
                        arr_35 [i_7] [i_8] [i_9] [i_10] = (((((max((arr_29 [i_7] [11] [i_9] [i_10]), 13766)))) ? (arr_8 [i_9] [i_9]) : (((((arr_24 [i_9] [i_8]) != var_2)) ? (arr_5 [i_7] [i_8] [i_10]) : (arr_20 [13] [i_9] [i_9 - 2])))));
                        var_20 = (max(var_0, 13762));
                        arr_36 [i_7] [i_7] [i_7] [i_7 + 3] [i_7] [i_7] = (((min(var_1, ((var_5 * (arr_2 [i_9])))))) * ((-((31932 / (arr_13 [11] [i_9]))))));
                    }
                    var_21 = (arr_31 [i_9] [i_9]);
                }
                for (int i_11 = 2; i_11 < 14;i_11 += 1) /* same iter space */
                {
                    arr_39 [i_7] [i_7] = (-(min((arr_23 [i_8] [i_11]), (((var_4 ? (arr_2 [i_11]) : (arr_31 [i_11] [i_7])))))));
                    var_22 = 251;
                    var_23 = 13769;
                }
                arr_40 [i_7] [i_8] = (2027878407 / 1506647719);
            }
        }
    }
    #pragma endscop
}
