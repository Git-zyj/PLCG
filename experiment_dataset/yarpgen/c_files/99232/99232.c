/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = 6144;
                    arr_12 [i_0] [i_1] = (((arr_8 [i_0] [i_0]) + (35150012350464 <= -38)));
                }
            }
        }
        var_18 = (arr_9 [21] [i_0] [7]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_19 = (((((arr_15 [i_0]) ? (arr_11 [i_0] [i_3] [4]) : (arr_8 [i_0] [i_0]))) + (arr_15 [i_0])));
                    var_20 = ((((((arr_8 [i_0] [i_0]) / (arr_13 [i_0] [i_4])))) ? ((((!(arr_18 [i_0]))))) : (min((((arr_17 [i_0]) ? (arr_3 [i_0]) : (arr_17 [i_0]))), ((((arr_17 [i_0]) * (arr_5 [15] [i_3] [5]))))))));
                }
            }
        }
        var_21 = (i_0 % 2 == 0) ? ((min((min((arr_1 [i_0]), (((arr_14 [i_0]) % (arr_14 [i_0]))))), (((((arr_9 [10] [i_0] [5]) ? (arr_15 [i_0]) : (arr_5 [i_0] [i_0] [i_0]))) >> (((arr_17 [i_0]) + 2113765143))))))) : ((min((min((arr_1 [i_0]), (((arr_14 [i_0]) % (arr_14 [i_0]))))), (((((arr_9 [10] [i_0] [5]) ? (arr_15 [i_0]) : (arr_5 [i_0] [i_0] [i_0]))) >> (((((arr_17 [i_0]) - 2113765143)) + 1143974590)))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            {
                arr_23 [1] [i_5] = (max(((((((arr_21 [i_5] [i_6]) ^ (arr_10 [6] [i_5 - 2] [6] [i_5 + 1])))) ? (min((arr_13 [i_5 + 2] [i_6 - 2]), (arr_17 [i_5]))) : -30)), ((((((arr_2 [10] [1]) << (arr_6 [i_5]))) * (arr_6 [i_5]))))));
                arr_24 [i_5] [i_5] = arr_6 [i_5];
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_22 = ((((((arr_10 [i_9] [i_8] [i_8] [i_7]) ? (arr_10 [i_9] [i_8] [i_8] [i_7]) : (arr_10 [11] [i_9] [15] [13])))) ? ((max((arr_14 [i_9]), (arr_31 [i_7] [12] [i_7])))) : (min(((((arr_29 [11] [i_8]) ? (arr_21 [i_7] [i_7]) : (arr_9 [i_7] [i_9] [i_9])))), (arr_0 [i_9] [i_7])))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_42 [i_10] [i_10] = min((((arr_28 [i_11] [i_8] [i_7]) ? (13 ^ 35150012350464) : 73)), -1747127466836355185);
                                var_23 = ((~(min((arr_18 [i_10]), (((arr_8 [i_7] [i_10]) ^ (arr_0 [i_9] [i_9])))))));
                                arr_43 [14] [i_10] [i_9] [i_10] [i_10] = (min(17726159095263163671, 17726159095263163682));
                                var_24 = (max(var_24, (arr_22 [i_7])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
