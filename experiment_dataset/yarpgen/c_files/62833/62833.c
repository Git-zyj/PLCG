/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] [i_2] [i_1] = ((((((((~(arr_13 [i_1] [i_2] [i_1] [i_0])))) ? ((1 | (arr_3 [i_0] [i_1]))) : (((arr_2 [i_3]) & (arr_4 [i_1])))))) ? 1 : ((~(arr_13 [i_3] [i_2] [i_1] [i_0])))));
                            arr_15 [i_2] [i_2] [i_2] [i_0] |= (max((arr_7 [i_2]), (min((min(1, var_17)), (max(1, var_10))))));
                            arr_16 [i_0] [i_1] [i_1] [i_3] = ((+((-(((arr_3 [i_2] [i_2]) * 1))))));
                            var_20 = 1;
                            arr_17 [i_1] [i_2] [i_1] [i_1] = (((((((max(43956, 32782))) ? ((max(21590, 43949))) : (arr_1 [i_0 - 1])))) ? (min(1, (min((arr_13 [i_0] [i_0] [i_0] [i_3]), -79707390)))) : ((min(32754, 1)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_21 ^= (~1);
                            var_22 |= (((((((~(arr_0 [i_4])))) || var_2)) ? (~33118) : var_18));
                            var_23 = (max(var_23, ((((((((arr_13 [i_0] [i_0] [i_0] [17]) / (arr_11 [i_0] [i_1] [i_1] [i_4] [i_4]))) * (arr_2 [i_4]))) | (((arr_1 [i_0 + 1]) ? (arr_10 [i_0] [i_1] [i_1] [i_5]) : (((arr_10 [i_5] [i_5] [3] [i_5]) ? var_14 : 1888567871)))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                var_24 = ((((((min((arr_22 [i_7] [i_7] [i_7] [i_7]), 32773))) ? ((max(var_9, 1))) : (arr_11 [i_7] [i_7] [i_7] [i_7] [i_6])))) ? (max((arr_7 [i_7]), (max(62876, 134217727)))) : (((+(((arr_4 [i_7]) + (arr_6 [i_7] [i_6])))))));
                var_25 = 21580;
                arr_28 [i_6] [i_6] &= var_6;
                var_26 += (min((((arr_22 [i_6] [i_7] [i_7] [i_7]) / var_13)), ((max((((arr_20 [i_6] [i_7] [i_6] [i_6] [i_6]) ? (arr_7 [i_7]) : 0)), (~var_5))))));
            }
        }
    }
    var_27 = var_1;
    var_28 = (max(var_28, var_4));
    #pragma endscop
}
