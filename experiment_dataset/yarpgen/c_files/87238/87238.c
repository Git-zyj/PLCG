/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [17] [i_3] [i_3] = (((((((var_7 ? 7061 : var_2))) ? (arr_10 [11] [i_1] [i_0 + 1] [i_2]) : var_5))) ? (arr_11 [i_3] [i_3]) : ((~(((arr_12 [i_3] [i_1] [i_2] [i_2] [i_4]) ? 2048104349 : (arr_13 [i_1] [i_2] [i_3]))))));
                                var_16 -= 1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_20 [i_5] [i_5] [i_5] [i_5] = (min((((arr_8 [i_0] [i_0 + 1] [i_0] [i_0]) << (((min(var_0, (arr_17 [i_0] [i_1] [13] [i_1] [i_1] [i_6 - 1]))) - 19956)))), (((arr_12 [8] [i_6] [i_6 + 3] [i_6 + 3] [i_6 + 2]) ? (arr_12 [8] [i_6] [i_6 + 1] [i_6] [i_6 + 1]) : (arr_12 [6] [6] [i_6 + 1] [i_6 - 1] [i_6 - 1])))));
                            arr_21 [i_0] [i_0] [i_5] [i_6] [i_5] = 1;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                {
                    var_17 = (((((-(arr_17 [i_9 + 2] [11] [18] [i_8] [i_7] [i_7])))) ? ((-(arr_4 [i_7] [i_9 + 1]))) : ((~(arr_17 [i_7] [12] [i_8] [i_9 + 2] [i_9 + 2] [i_9])))));
                    var_18 ^= ((17342 && ((max((arr_15 [i_9] [i_9] [i_9] [i_9 - 1]), -1)))));
                    var_19 = (max(var_19, (arr_17 [i_7] [i_7] [i_8] [i_8] [1] [i_9])));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_20 = 1;
                                var_21 = (min(var_21, ((((((~(arr_16 [i_8 + 1] [i_8 - 1] [i_9 + 2])))) ? ((-var_2 ? ((max(var_14, (arr_11 [i_7] [i_7])))) : (arr_28 [i_10] [i_8]))) : (!1023))))));
                                arr_33 [i_7] [i_8] [i_9] [i_10] [i_11] [i_11] = (((max((48210 / -1), ((min(-538, (arr_28 [i_7] [i_9 - 1]))))))) ? (max((((-17670 + (arr_4 [i_7] [i_7])))), var_0)) : (((((((arr_23 [i_7] [i_8 + 1]) ? (arr_15 [6] [i_9] [i_10] [i_11]) : var_1)) > var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, ((((((((max(1, 7061)) > var_10)))) & (max(17361505393321312647, 12660)))))));
    #pragma endscop
}
