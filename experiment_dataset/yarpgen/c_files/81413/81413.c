/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_0 [i_0 + 2] [8])));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [9] [i_2] [11] = ((((!(arr_8 [i_0] [1]))) && (((0 ? var_2 : 83)))));
                        arr_11 [i_0] [i_0] [0] [18] = ((var_11 > (arr_7 [i_2 - 1] [i_0])));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [15] [13] = (((arr_4 [i_1 + 4]) ? (arr_4 [i_3]) : 549754765312));
                    }
                }
            }
        }
        arr_13 [10] [i_0] = (((arr_4 [i_0 + 1]) ? (arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 1]) : 4192256));
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                arr_21 [i_4] [1] = (min(((((((129918703 ? var_13 : var_6))) ? (arr_17 [i_4 + 1] [i_4 - 1]) : (((arr_17 [2] [i_4]) << (1615468903 - 1615468903)))))), (--0)));

                /* vectorizable */
                for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_5] [i_4] = ((!(~57)));
                    var_16 += ((~(((arr_18 [3] [i_4]) & (arr_16 [i_6])))));
                }
                for (int i_7 = 3; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    var_17 = (((arr_22 [i_7] [i_7 + 1]) * ((((arr_19 [i_4 - 2]) > (arr_19 [i_4 + 1]))))));
                    var_18 = (((((((4192256 ? var_12 : var_12)) + ((var_6 ^ (arr_14 [6] [i_5])))))) ? (((arr_14 [i_4] [7]) ? (arr_25 [i_4] [i_5] [2]) : (arr_23 [i_7] [i_7 - 1] [i_4 - 1] [i_4]))) : ((~(arr_16 [18])))));
                }
                /* vectorizable */
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    arr_32 [i_8] [i_5] [i_5] [1] = (((arr_26 [i_4 + 1]) | var_14));
                    arr_33 [14] [i_8] [0] = ((-(arr_19 [i_8 - 3])));
                    var_19 = (max(var_19, var_6));
                }
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    var_20 -= (((var_11 << ((((var_12 ? var_7 : var_8) - 27252))))));
                    var_21 = ((~(min((((arr_35 [4] [15] [i_5] [i_9]) ? var_2 : var_8)), (arr_18 [7] [i_4 - 2])))));
                    arr_37 [17] [i_5] [i_5] [i_9] = -var_4;
                    var_22 = (max(var_22, ((max((((~((26 ? 12 : var_9))))), (max(523218861281866970, var_10)))))));
                }
            }
        }
    }
    var_23 = (min(var_23, var_9));
    #pragma endscop
}
