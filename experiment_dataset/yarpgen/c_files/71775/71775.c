/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = (((((27649 | (0 | 11)))) ? (-22002858 | -1) : (((min((arr_7 [i_0] [i_1] [10] [i_2]), (arr_6 [i_0] [i_1] [i_2]))) ^ ((~(arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = ((((255 % (arr_1 [i_1]))) - (arr_5 [16] [i_1] [i_1] [i_4])));
                                var_15 = ((var_4 - ((((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_3]))))));
                                var_16 = ((-(-32766 - 0)));
                            }
                        }
                    }
                    var_17 = ((var_5 ? ((((var_14 < ((min(-3704, (arr_12 [i_0] [i_0] [i_0] [i_1] [i_0])))))))) : (((arr_1 [i_2]) ? (((50139 ? 42317 : 2080061029))) : (9223372036854775787 % var_6)))));
                }
            }
        }
    }
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_19 = (arr_19 [i_6]);
                var_20 = (max((((634383110 ? 62828 : (33 <= 22311)))), 1514749161));
                arr_20 [i_6] [i_5] [i_6] = (~7714);
                var_21 = (min(var_21, var_5));
            }
        }
    }
    var_22 = (max(var_22, var_11));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_23 |= min((arr_19 [i_8]), (arr_22 [i_7] [6]));
                                arr_33 [i_7] [i_8] [i_9] = (1 ^ 0);
                                arr_34 [i_7] [i_8] [i_8] = (min((arr_4 [i_7] [i_10] [9]), (0 <= 4595007067189998889)));
                                var_24 ^= ((((9223372036854775792 - ((-524288 ? 30 : 4)))) != (((var_0 < (arr_5 [i_7] [i_8] [i_9] [i_11]))))));
                                arr_35 [i_9] [i_10] [i_9] [i_9] [i_9] [i_8] [i_7] &= (arr_25 [i_11] [i_11] [i_9]);
                            }
                        }
                    }
                }
                arr_36 [i_7] [i_8] = ((4532013317999273601 ^ (~8)));
                var_25 = 16384;
            }
        }
    }
    #pragma endscop
}
