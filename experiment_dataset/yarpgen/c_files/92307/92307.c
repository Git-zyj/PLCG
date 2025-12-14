/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 255;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = arr_0 [i_0] [i_1];
                    var_16 = (((-(arr_5 [i_0]))));
                    arr_8 [i_0] [i_0] [i_2] = ((((((arr_4 [i_0] [i_1] [i_2 - 1]) | (arr_4 [i_0] [i_1] [i_2 - 4])))) ? (arr_4 [i_0] [i_0] [i_0]) : (((arr_4 [i_0] [9] [9]) << (((arr_4 [i_0] [8] [12]) - 3713371586))))));
                    var_17 = (max(var_17, ((((arr_4 [i_0] [5] [i_2 - 3]) ? ((((((arr_1 [13]) + (arr_0 [i_1] [i_0]))) >= var_10))) : (arr_1 [i_1]))))));
                }
            }
        }
        arr_9 [i_0] [i_0] = (((((((~(arr_3 [i_0])))) ? (((arr_2 [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [10]) : -7758672428614733499)) : (-1765565043 & 1598640779))) | (arr_5 [i_0])));
        arr_10 [i_0] [i_0] = ((~((((arr_6 [i_0] [i_0] [i_0]) || (arr_6 [i_0] [i_0] [i_0]))))));
        arr_11 [i_0] [i_0] = ((!(~8191)));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = ((~(min((arr_5 [i_3]), (arr_3 [i_3])))));
        var_18 = (max(var_18, (((((((min((arr_1 [i_3]), var_10))) ? (arr_0 [i_3] [i_3]) : (((arr_4 [i_3] [i_3] [16]) ? (arr_7 [i_3]) : var_1)))) / (arr_3 [i_3]))))));
        arr_15 [i_3] [i_3] = ((((min((((arr_13 [i_3] [i_3]) ? -2063440375 : (arr_7 [i_3]))), (((var_9 || (arr_1 [i_3]))))))) ? 2505819140 : (((arr_0 [i_3] [i_3]) ? (min(var_4, 14613)) : (((((arr_12 [i_3]) || var_5))))))));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_25 [i_6] = (((((((0 ? 1789148156 : (arr_21 [8]))) * ((((arr_19 [i_4] [i_6]) % (arr_5 [6]))))))) / ((((((!(arr_6 [i_4] [i_4] [i_4]))))) | (max((arr_18 [i_4] [i_5] [i_4]), (arr_24 [i_4] [i_4] [i_5] [4])))))));
                    arr_26 [i_6] [i_6] [i_6] [i_4] = ((-(((arr_5 [i_5]) - (arr_1 [i_4])))));
                    arr_27 [i_6] [i_6] [i_4] = -10201;
                    arr_28 [i_4] [i_5] [i_6] [i_5] = ((-((((max(-335539662, var_8))) ? (arr_19 [2] [2]) : (min((arr_3 [i_5]), 2505819140))))));
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
