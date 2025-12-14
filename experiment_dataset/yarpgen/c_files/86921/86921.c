/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((!((max((arr_0 [i_0] [i_0]), (min((arr_2 [i_0] [i_1]), (arr_0 [i_0] [i_0]))))))));
                var_20 = (((arr_3 [i_0] [17]) ? ((~(max((arr_3 [i_0] [16]), (arr_0 [i_0] [i_0]))))) : (((max((arr_3 [7] [7]), (arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_21 = ((~(arr_7 [i_1] [i_3])));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_22 = (max((((max((arr_6 [i_0] [15] [i_0]), (arr_11 [i_2] [i_1] [i_2 - 1] [i_3] [11] [i_2]))))), (min((arr_3 [2] [i_2]), (arr_3 [i_0] [i_4])))));
                                arr_12 [i_0] [i_2] [i_1] [i_0] = (((~163) ? (arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1]) : (min((arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 1]), (arr_9 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1])))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((((min(-1317505670, 14622)))), (((((-(arr_1 [i_0])))) ? (max((arr_2 [i_0] [i_3]), (arr_8 [i_2] [i_2 - 1] [i_2 - 1] [i_2]))) : (((min((arr_1 [i_0]), (arr_1 [i_0])))))))));
                                var_23 = (((min((arr_9 [17] [17] [i_2 - 1] [17] [i_4]), (arr_9 [8] [20] [i_2 - 1] [i_3] [i_4])))) ? (max((arr_9 [i_3] [i_4] [i_2 - 1] [i_3] [i_1]), (arr_9 [18] [22] [i_2 - 1] [i_3] [i_4]))) : (arr_9 [i_0] [i_1] [i_2 - 1] [i_1] [i_4]));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_0] [i_0] [i_1] = (min((max((arr_16 [i_0] [i_1] [13] [i_3] [i_5]), (min((arr_0 [5] [i_0]), (arr_14 [i_2] [i_0] [7] [i_0] [2]))))), (max((arr_15 [21] [i_0] [i_2] [i_2]), ((((arr_14 [i_0] [i_0] [i_0] [i_0] [13]) ? (arr_0 [i_1] [i_0]) : (arr_5 [i_1] [i_1]))))))));
                                var_24 = (min((max((((arr_8 [4] [i_1] [i_2] [i_3]) ? (arr_15 [i_0] [i_0] [i_2] [i_1]) : (arr_4 [i_0] [1] [15]))), ((min((arr_2 [i_3] [i_5]), (arr_0 [i_0] [i_0])))))), ((max(((!(arr_5 [i_0] [i_0]))), ((!(arr_5 [i_0] [i_1]))))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                            {
                                var_25 = 1666919403054518675;
                                var_26 = ((+(((arr_9 [i_0] [i_1] [i_0] [22] [i_1]) ? (arr_19 [i_3] [i_3] [i_2 + 1] [i_0] [i_0] [i_0] [1]) : (arr_4 [1] [i_3] [13])))));
                                arr_21 [i_1] [i_0] [i_3] = (arr_10 [i_0] [i_0] [i_2] [i_0] [5]);
                                var_27 = (((arr_16 [1] [i_1] [i_2 - 1] [i_3] [i_6]) ? (arr_16 [1] [i_1] [i_2] [i_3] [8]) : (arr_16 [i_0] [i_1] [i_6] [i_6] [i_6])));
                                var_28 = (arr_14 [i_2 + 1] [i_2] [i_2 + 1] [i_0] [i_2 + 1]);
                            }
                        }
                    }
                }
                var_29 += (((arr_15 [i_0] [1] [6] [i_0]) ? (((arr_3 [i_1] [i_0]) ? (min((arr_15 [i_0] [16] [22] [i_1]), (arr_7 [i_0] [16]))) : (min((arr_14 [i_0] [i_0] [i_1] [12] [i_1]), (arr_7 [i_0] [i_0]))))) : ((min((((~(arr_20 [i_0] [i_1] [i_1])))), (arr_0 [8] [8]))))));
            }
        }
    }
    var_30 = var_14;
    var_31 = ((-984908622 ? 12 : -1845130081));
    var_32 = min(7518323573813719482, 1666919403054518675);
    #pragma endscop
}
