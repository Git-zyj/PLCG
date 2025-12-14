/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_19 = (max(-40, (((((max(64, (arr_1 [i_0])))) || (arr_1 [i_0]))))));
        var_20 ^= (~-419138203378060791);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = ((~(((!(arr_3 [0] [i_1]))))));
        arr_4 [i_1] [i_1] = 7;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_22 ^= 419138203378060791;
            var_23 = ((((111 ? -2601094696221910538 : 135))) ? ((((arr_6 [i_1] [i_2] [i_2]) / (arr_5 [i_1] [i_1])))) : (((arr_5 [i_2] [i_1]) ? (arr_5 [i_1] [i_2]) : (arr_1 [i_1]))));
            arr_7 [i_1] |= (!0);
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            arr_16 [i_5] [i_6] [1] [i_4] [6] [i_5] = ((((arr_8 [i_3 + 2]) ? (arr_8 [i_3 + 1]) : (arr_8 [i_3 - 1]))));
                            var_24 = ((69 ? ((~((234 ? 141 : 76)))) : -72));
                        }
                        var_25 ^= (max((arr_6 [14] [i_3 + 2] [i_4 - 2]), (arr_5 [i_1] [i_3 + 2])));
                        var_26 = ((((((arr_2 [i_3 + 2]) ? (arr_2 [i_1]) : (arr_2 [2])))) | 281474976710655));
                        var_27 = (min(151, 186));
                    }
                }
            }
            arr_17 [i_1] = -17;
            var_28 |= ((67 ? 32767 : 72));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_29 ^= min(((((arr_27 [i_1] [i_1] [8] [i_1] [i_7] [i_8] [5]) | (arr_15 [i_1] [i_1] [i_1] [i_3 - 1])))), ((19 ? 119 : 288230376151711740)));
                            arr_28 [i_1] [i_3] = 16;
                            var_30 ^= ((((((arr_8 [i_3 + 3]) ? (arr_8 [i_3 - 1]) : (arr_8 [i_3 - 1])))) ? ((-(arr_8 [i_3 + 2]))) : (((arr_8 [i_3 + 2]) ? (arr_8 [i_3 + 2]) : (arr_8 [i_3 + 2])))));
                        }
                    }
                }
            }
            arr_29 [i_3 + 1] [i_1] = ((-(-6025830827634581848 & 71)));
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 14;i_10 += 1)
        {
            var_31 ^= ((-(arr_15 [i_10 + 1] [i_10] [i_10 + 1] [i_10])));
            arr_34 [i_1] [i_10] = ((((-(arr_2 [i_1]))) * -1));
            arr_35 [i_10 + 1] = (arr_10 [8] [i_10 - 1] [i_10 - 1]);
        }
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_32 = (min((((!(arr_5 [i_11] [i_11])))), (min(((-(arr_15 [10] [i_11] [i_11] [i_11]))), (arr_25 [i_11] [i_11] [12] [11])))));
        var_33 = arr_5 [1] [i_11];
    }
    #pragma endscop
}
