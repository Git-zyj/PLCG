/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_17 = (min(var_17, ((max((((!(arr_5 [i_1 - 2] [i_1 - 2])))), (arr_2 [16]))))));
                var_18 = (max(((max(-2, (arr_4 [14] [i_1 + 1])))), (((arr_3 [i_1 + 2] [i_1 + 1]) * (arr_8 [i_1 - 2] [i_1 - 2])))));
                arr_10 [1] [i_1] [i_2] = (max(((((!(arr_4 [i_0] [i_1 - 1]))))), (max(((-(arr_7 [i_0]))), (((536862720 ? 12 : 47866)))))));
            }
            arr_11 [i_0] [i_1 + 2] [i_1 + 2] = (((arr_2 [15]) ? (((((((~(arr_7 [i_1])))) && (arr_0 [i_1 + 1]))))) : ((-536862720 - (arr_5 [i_0] [i_1])))));
            arr_12 [i_1] = (max((((arr_7 [i_1 + 1]) ? (arr_7 [i_0]) : (arr_3 [i_1 - 1] [i_1 + 2]))), ((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 1]) : (arr_4 [i_0] [i_1 + 2]))))));

            for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
            {
                var_19 = (max((arr_1 [i_1] [i_1]), ((((arr_3 [i_1 + 1] [i_1 - 2]) && (arr_1 [i_1 + 1] [i_1 - 2]))))));
                arr_15 [i_0] [i_1 + 1] [i_3] [i_3] = (arr_5 [i_0] [i_1]);
                arr_16 [6] [i_3] = (arr_0 [i_0]);
                var_20 = (max(var_20, (((((min((arr_0 [i_1 + 2]), (arr_6 [i_1] [i_1] [i_1 + 1] [i_3 - 1])))) ? (((arr_0 [i_1 - 1]) ? (arr_6 [i_1] [i_1] [i_1 - 2] [i_3 + 1]) : (arr_6 [i_0] [i_0] [i_1 + 1] [i_1]))) : (arr_6 [i_0] [i_0] [i_1 + 2] [i_1 - 1]))))));
                arr_17 [i_3] [i_3] [i_3] = -32;
            }
            for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_24 [i_0] [4] [4] [4] [0] [i_0] [i_0] |= (min(((-(arr_4 [i_1 - 1] [i_5]))), (arr_4 [i_4 - 1] [i_1 + 1])));
                            var_21 = (min(var_21, (((~(arr_6 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_4 - 1]))))));
                            var_22 = (max(var_22, (arr_3 [i_6] [i_5])));
                            arr_25 [i_4] [5] [i_4] [1] [i_4] [i_4] = (max((arr_23 [i_1 - 2] [i_1 + 1]), (((arr_23 [i_1 - 1] [i_1 - 2]) ? (arr_23 [i_1 - 2] [i_1 - 2]) : (arr_23 [i_1 - 2] [i_1 + 1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_23 = (max((min((arr_8 [i_1 + 1] [i_4 + 2]), (arr_29 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_4 + 1]))), (((arr_7 [i_0]) + (((max((arr_1 [i_0] [i_0]), (arr_2 [i_0])))))))));
                            var_24 = ((+((max((arr_13 [i_4 + 2] [i_4] [i_4] [i_0]), (arr_13 [i_4 - 1] [i_4] [i_4] [14]))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                {
                    arr_40 [i_0] [i_0] [i_9] [i_10] = arr_13 [i_10 - 2] [i_0] [i_10 + 1] [i_10 - 1];
                    var_25 *= ((((((arr_29 [13] [11] [i_9] [i_9] [i_10 - 1]) ? (arr_29 [6] [i_0] [i_0] [6] [i_10]) : (arr_29 [i_0] [i_0] [i_0] [i_0] [13])))) ? ((((!((min((arr_18 [12]), (arr_4 [i_0] [i_9])))))))) : ((((arr_7 [i_0]) ? (arr_21 [0] [i_9] [i_10 - 2]) : (arr_38 [i_0] [i_9] [i_10] [17]))))));
                }
            }
        }
        var_26 -= (max((~-32), 1));
        var_27 = ((-(arr_3 [1] [i_0])));
    }
    var_28 = var_5;
    #pragma endscop
}
