/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((max((11822 || var_8), (max(var_4, var_1))))) != var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = ((~(arr_3 [i_0])));
                    var_12 = ((5385 ? (((arr_4 [i_1] [i_2 - 2]) ? 88 : (arr_3 [i_2]))) : (~0)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 |= ((5385 ? ((9234309544808577254 ? 31 : (arr_3 [i_0]))) : (~62)));
                                var_14 = ((-(arr_0 [i_0] [i_2 - 3])));
                                arr_12 [2] [i_1] = (arr_6 [i_2 - 4] [14] [i_3 + 1] [i_4 - 1]);
                                arr_13 [i_0] [i_1] [i_2] [i_4] = (((arr_7 [i_3] [i_2] [i_1] [i_0]) ? -335876356 : (arr_0 [i_2 - 3] [i_2 - 4])));
                            }
                        }
                    }
                }
            }
        }
        var_15 = (((arr_6 [i_0] [20] [i_0] [i_0]) >> (((arr_6 [1] [i_0] [i_0] [i_0]) - 571754514))));
        var_16 |= (((arr_7 [i_0] [i_0] [10] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [15] [i_0] [i_0])));
        var_17 = (568 && 63);
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_18 [i_6] [i_5] = (min((arr_5 [i_6] [i_6] [i_5]), (((((min((arr_9 [3] [13] [2] [i_5] [i_5]), (arr_14 [i_6])))) ^ ((max((arr_17 [i_5]), 0))))))));
            arr_19 [i_6] [i_6] = ((-((max(37766, 769)))));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_27 [i_5] [i_6] [i_6] [i_8 + 2] [i_9] = (max((((((arr_16 [16]) & 3676882465)) ^ (arr_7 [i_9] [i_8 - 1] [i_6] [i_5]))), ((max(((-(arr_10 [16]))), ((63 / (arr_14 [i_5]))))))));
                            var_18 = ((((arr_23 [i_8 + 1]) || (arr_23 [i_5]))) ? (min((arr_7 [i_5] [i_8 + 2] [i_9] [i_9]), (max(335876353, 5309794992450005579)))) : (((143 ? ((((arr_7 [i_9] [i_8] [i_6] [7]) != (arr_7 [i_9] [i_8] [i_6] [i_5])))) : (!7)))));
                            var_19 |= (min((((((min(-1373113364, -1237211649))) ? (arr_24 [i_5] [9]) : (arr_11 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_8 + 1])))), (max((arr_5 [i_8] [i_5] [i_5]), (((-(arr_17 [i_5]))))))));
                        }
                    }
                }
            }
            arr_28 [i_6] [i_6] = (max((max(((max(32017, 2147483647))), (arr_20 [i_5] [i_6] [2]))), (max((max((arr_20 [15] [12] [i_5]), 0)), (127 * 0)))));
        }
        for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
        {
            arr_33 [i_10] [i_5] [i_5] = (min(61316, (((!33518) ? (min((arr_8 [i_5] [i_10] [i_5] [i_5] [i_5] [i_5]), 16278610741570959229)) : (arr_16 [19])))));
            arr_34 [i_10] = (arr_6 [i_10] [15] [15] [i_5]);
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
        {
            var_20 = ((-(arr_11 [i_5] [i_5] [i_5] [8])));
            var_21 = (-9223372036854775807 - 1);
            var_22 |= (((arr_11 [12] [i_5] [i_11 - 1] [15]) + (arr_10 [i_11 + 3])));
        }
        var_23 = (min(((((arr_20 [i_5] [1] [1]) < (((255 % (arr_37 [13] [i_5]))))))), (max((arr_26 [i_5] [i_5] [6] [i_5] [6]), (~145325706)))));
        var_24 = (((((max(((((arr_8 [i_5] [16] [i_5] [i_5] [i_5] [i_5]) && (arr_30 [i_5])))), (arr_32 [i_5]))))) > (max((arr_6 [i_5] [19] [i_5] [i_5]), (arr_0 [i_5] [12])))));
        var_25 = (((((((20526 ? (arr_6 [i_5] [i_5] [i_5] [i_5]) : (arr_32 [i_5])))) && (arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) ? (((max(64954, -13521)))) : (((arr_4 [i_5] [i_5]) ? (((arr_10 [i_5]) ? (arr_31 [4] [i_5]) : (arr_22 [i_5]))) : ((((arr_1 [4] [i_5]) ? (arr_36 [i_5] [i_5] [12]) : (arr_14 [i_5]))))))));
    }
    var_26 = var_9;
    var_27 = (max(var_6, (var_1 + var_7)));
    #pragma endscop
}
