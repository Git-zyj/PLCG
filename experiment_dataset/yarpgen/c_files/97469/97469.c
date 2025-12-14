/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_20 *= (((-((1 ? 1 : (arr_6 [10] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [1] [i_1] [i_2 - 2] = (max(((-(arr_3 [i_0] [i_1] [i_1]))), (((!3672621777) ? 18 : (!0)))));
                            var_21 = (max(var_21, 18));
                            var_22 ^= arr_7 [8] [4] [i_1] [8];
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_23 = min(((min(1, (arr_15 [10] [10] [i_5])))), (arr_13 [i_5]));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_24 = ((((((((-(arr_16 [i_6] [i_7])))) ? (arr_16 [i_5] [i_5]) : (((-(arr_15 [i_4] [i_6] [i_7]))))))) ? ((min(((18 ? (arr_15 [i_7] [16] [i_7]) : (arr_20 [i_4] [i_5] [i_5] [1] [1]))), (((!(arr_13 [18]))))))) : (min((max((arr_14 [i_4] [i_4]), (arr_16 [i_4] [i_4]))), (((!(arr_19 [i_4] [i_4] [2] [i_4]))))))));
                            var_25 = (max(var_25, ((((arr_19 [16] [i_5] [8] [i_5]) ? ((-(((!(arr_15 [i_4] [i_4] [14])))))) : (1 > 1))))));
                            var_26 = (((min(1, (((arr_12 [i_4]) ? (arr_17 [i_4] [i_5] [i_6] [i_4]) : (arr_14 [i_4] [i_5])))))) ? ((((-(arr_15 [i_6] [17] [i_6]))))) : ((((~(arr_18 [i_4]))))));
                            var_27 = ((~(((!(((1 ? (arr_18 [i_4]) : (arr_12 [i_4])))))))));
                        }
                    }
                }
                arr_21 [i_4] [i_4] = (arr_18 [1]);
                arr_22 [i_4] [i_5] = (-((((!(arr_20 [i_4] [i_4] [i_4] [i_4] [i_4]))) ? ((~(arr_13 [1]))) : ((((arr_16 [8] [8]) ? (arr_20 [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_15 [i_4] [1] [19])))))));
                var_28 = (max(18446744073709551614, ((min((min((arr_20 [i_4] [i_5] [i_5] [i_5] [i_5]), (arr_18 [i_4]))), ((((arr_14 [i_4] [i_5]) ? 1 : 113))))))));
            }
        }
    }
    #pragma endscop
}
