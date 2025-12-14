/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_9, (((min(25, 3386969587))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [7] = ((((((var_7 ? -35 : (arr_0 [i_0] [1]))) ? (((arr_1 [i_0] [i_0]) ? var_7 : (arr_0 [i_0] [17]))) : ((var_3 ? var_1 : var_6))))));
        arr_3 [i_0] = ((-1 ? (((var_2 ? (((arr_1 [1] [i_0]) ? (arr_0 [i_0] [i_0]) : var_1)) : ((11484711822865251395 ? var_2 : (arr_0 [i_0] [i_0])))))) : (((~var_6) ? ((117 ? var_0 : var_1)) : (((var_1 ? 1 : var_1)))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_11 = (min(var_11, (((((max(var_1, (arr_0 [i_1] [i_1])))) ? (~1) : (min((max(907997721, -15)), ((((arr_5 [i_1]) / (arr_0 [i_1] [15])))))))))));
        arr_6 [i_1] = var_5;
        arr_7 [i_1] [i_1] = (min(((min((arr_4 [i_1]), 2128107275))), ((-1320623039 ? (((var_8 | (-127 - 1)))) : ((var_7 ? var_5 : var_3))))));
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            arr_14 [i_2] [18] [i_2] = (arr_13 [i_2] [i_2] [i_2]);
            arr_15 [i_3 - 1] [19] [i_2] = (((~var_9) ? -var_6 : ((((arr_12 [i_2 + 2] [i_3 + 3] [i_2 + 3]) & (arr_8 [i_2]))))));
            arr_16 [i_2 - 2] = ((-(min((arr_11 [i_2 + 3] [i_3 + 1] [i_3 - 1]), (min((arr_13 [i_2 + 3] [i_2] [10]), var_1))))));
        }
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            var_12 = (min(var_12, ((max(var_1, (((var_2 ? 49 : (arr_12 [i_2] [i_2 + 3] [i_2])))))))));
            var_13 += (min(((~(((arr_17 [i_4]) ? var_6 : var_7)))), (((var_2 ? (arr_11 [i_2] [i_2 + 2] [8]) : var_4)))));
            arr_20 [i_2] |= -1100143058;
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            arr_24 [1] [1] [i_5] = (arr_23 [i_5]);
            var_14 = var_0;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_32 [i_2 - 1] = 2;
                            var_15 -= ((((((arr_22 [i_5 + 2] [i_5 - 1] [i_5 - 1]) ? (arr_29 [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 - 1]) : 637924889))) * (min(((~(arr_25 [i_8] [i_7] [18]))), -var_4))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 3; i_9 < 20;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    {
                        var_16 = (min(var_16, ((((arr_9 [i_9 + 1]) ? 48 : -17292)))));
                        arr_42 [i_9] = ((~(arr_10 [i_2 + 1])));
                        arr_43 [i_2] [i_2] [i_2 + 1] |= ((-(var_3 + var_0)));
                    }
                }
            }
            var_17 = var_3;
            var_18 = ((((!(arr_17 [i_9]))) ? ((var_1 ? (arr_13 [10] [i_9 - 1] [10]) : var_7)) : var_6));
        }

        /* vectorizable */
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            var_19 = (arr_25 [i_12 - 1] [7] [i_12 - 1]);
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 18;i_15 += 1)
                    {
                        {
                            arr_55 [i_2] [i_12 - 1] [i_12] [i_13] [i_14] [i_2] [i_15 + 3] |= (((var_4 || 36680) ? (arr_23 [i_2 + 1]) : ((-(arr_45 [1] [1] [13])))));
                            arr_56 [i_13] [4] [i_13] [i_14] [i_15 + 3] = (~var_6);
                        }
                    }
                }
            }
            var_20 -= ((386491336 ? var_4 : (arr_10 [i_2 + 2])));
        }
        var_21 += ((min((((arr_18 [i_2]) ? 2075425061 : var_5)), var_4)));
    }
    #pragma endscop
}
