/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? ((max(var_4, var_9))) : (!var_7)));
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = var_7;

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_13 = (arr_2 [i_0] [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_14 = (min(var_14, ((((-(arr_9 [i_3] [i_3] [i_2] [i_3])))))));
                            arr_13 [3] [i_1] [3] [i_1] [i_1] = (min(((var_2 ? (arr_5 [i_0]) : (arr_5 [i_0]))), ((~(arr_5 [i_2])))));
                            var_15 = ((~(arr_6 [i_0] [i_0] [i_0])));
                            var_16 = -853519753;
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_17 -= ((~((max((arr_15 [i_5]), 127)))));
            var_18 = ((max(var_4, var_7)) * ((((arr_10 [i_5] [i_0] [i_0] [i_5] [i_0]) >= 0))));
            arr_16 [i_5] [i_5] [i_5] = ((-((1 - (max((arr_9 [i_0] [i_0] [i_0] [i_5]), var_3))))));

            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                var_19 = (min(var_19, var_5));
                var_20 |= min(var_3, (((min((arr_8 [5]), var_2)))));
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
            {
                arr_24 [i_0] [i_0] [i_0] [i_5] = (arr_8 [i_0]);
                var_21 += var_3;
                var_22 = (max((min((arr_2 [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_5] [i_5]))), var_9));
                arr_25 [i_5] [i_5] = ((((853519753 + 35563) || var_2)));
            }
            arr_26 [i_5] [i_5] [i_5] = (~var_8);
        }
        arr_27 [i_0] = (((((arr_22 [10] [i_0] [i_0] [i_0]) ? (arr_22 [8] [i_0] [i_0] [i_0]) : 60339)) < 60334));
        arr_28 [2] = (((var_9 >= var_9) ? (max(((1528 ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((~(arr_23 [i_0] [i_0] [8] [i_0]))))) : ((~(((arr_8 [i_0]) & (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_23 = 8;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            {
                var_24 = (max(var_24, (~var_7)));
                var_25 = (max((((var_6 & var_7) ? ((var_9 ? (arr_32 [22]) : var_3)) : ((-(arr_29 [i_8]))))), (arr_31 [i_8] [i_9])));
            }
        }
    }
    #pragma endscop
}
