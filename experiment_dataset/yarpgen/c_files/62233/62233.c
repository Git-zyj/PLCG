/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(-2822585141734194484, ((max((min(var_2, var_11)), var_2)))));
    var_15 = 1260840742;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = arr_2 [i_1] [i_0];
                var_16 = ((~(((((arr_4 [i_1]) ? var_1 : 57)) * ((-31647 / (arr_4 [10])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_17 = (((((arr_10 [i_3] [i_2]) ? ((max(-59, var_0))) : (arr_9 [i_3] [i_2] [i_2]))) >> (((((((10000 ? 48026 : -1))) | (5294659120918462860 | -46))) + 62))));
                var_18 = (arr_8 [i_2]);
                var_19 -= ((((max((arr_9 [6] [i_2] [i_3]), (max((arr_5 [i_3] [i_2] [i_2]), var_11))))) ? ((((((arr_11 [i_2]) ? (arr_3 [i_2]) : (arr_8 [i_3])))) - (arr_10 [i_3] [i_3]))) : ((((arr_2 [i_2] [i_3]) + ((126 ? var_1 : 249)))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_17 [i_2] [i_5] [i_4] [i_5] = (arr_16 [i_2] [i_3] [i_4] [i_5]);
                            var_20 = (max((arr_13 [i_2] [i_2] [20] [i_2]), ((var_11 ? (arr_7 [i_2] [i_3]) : (arr_7 [i_3] [i_2])))));
                            var_21 = (min(var_21, ((((arr_4 [i_2]) % ((17510 - (((arr_15 [i_2] [i_2] [i_2] [i_2]) ? (arr_2 [20] [i_3]) : (arr_2 [i_3] [i_3]))))))))));

                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                var_22 = (max(var_22, ((((arr_16 [i_2] [i_2] [i_2] [i_2]) <= (max((max((arr_18 [18] [i_3]), (arr_10 [i_5] [i_4]))), (((var_10 || (arr_20 [i_2] [i_3] [18] [i_6])))))))))));
                                arr_22 [i_6] [i_6] [i_6] [i_6] [i_6] = ((-52 ? (((126 ? (!var_6) : -21280))) : (min((arr_5 [i_2] [i_3] [16]), (((-(arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                                arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] &= (max((arr_1 [i_4]), (max(9223372036854775807, (arr_1 [i_6])))));
                                var_23 = (max(var_23, (((~(max((arr_3 [i_6]), (arr_3 [i_5]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
