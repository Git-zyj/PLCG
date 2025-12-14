/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_10 = (arr_0 [i_0 + 1]);
        arr_2 [i_0] = 435421790;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [1] [i_1 - 1] [i_2] [i_1] [i_3] = (arr_3 [i_0 + 3] [i_1] [i_1 + 1]);
                        var_11 = (((arr_5 [i_1] [i_1 + 1] [i_1]) >= (~var_8)));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_19 [4] [i_5] = (((((max(9164768079148088584, var_7))) ? (arr_8 [i_4] [i_4 + 3] [i_4] [i_4 + 2] [i_5] [i_5]) : ((var_0 ? var_9 : (arr_4 [i_4] [i_4] [i_4]))))));
            arr_20 [i_4] [6] = ((~((((arr_13 [i_4] [i_5]) << (var_2 - 54414))))));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_12 = (((((arr_21 [i_4] [i_4 + 2]) ? (arr_21 [i_6] [i_4 - 2]) : (arr_23 [i_4 + 4] [i_4] [i_4 + 4]))) >= var_6));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_31 [i_4] [i_8] &= (arr_15 [4]);
                            var_13 = (((arr_22 [i_6]) ? var_4 : (arr_26 [i_4] [i_6] [i_7] [7] [6])));
                        }
                    }
                }
            }
        }
        var_14 = ((max((arr_12 [i_4 - 1]), (max(114, 1015808)))) << ((((min(var_4, -69))) ? (arr_6 [2] [i_4 + 2] [i_4] [i_4 + 2]) : var_2)));
    }

    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_36 [7] = ((-(((arr_32 [i_10] [i_10]) ? -51 : ((var_2 ? var_3 : (arr_33 [i_10] [i_10])))))));
        arr_37 [i_10] [i_10] = (min(((((arr_32 [i_10] [i_10]) | (arr_34 [i_10])))), ((((max(var_6, (arr_35 [16])))) ? ((((!(arr_34 [3]))))) : (arr_32 [i_10] [i_10])))));
        var_15 += (arr_35 [i_10]);
        arr_38 [i_10] = (((((max((arr_34 [i_10]), var_2)))) >= ((((var_9 / (arr_33 [1] [i_10]))) >> (min((arr_35 [i_10]), 1))))));
    }
    #pragma endscop
}
