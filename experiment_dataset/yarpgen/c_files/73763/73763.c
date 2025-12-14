/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = arr_1 [i_0];
        arr_4 [i_0] = -14;
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = ((!(((var_6 >> (!var_3))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_14 [i_1] = (max((((((arr_9 [i_1]) ? (arr_11 [1] [i_2] [16] [16]) : (arr_9 [i_1]))))), var_1));
                    arr_15 [i_1] [i_2 + 1] [10] = ((((((3 ? var_16 : (arr_12 [i_1]))))) ? (((arr_0 [i_1] [i_2]) ? -1 : var_14)) : var_9));
                }
            }
        }
    }
    var_17 = ((var_13 ? (((-((min(70, var_10)))))) : var_8));

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_19 [i_4] = ((((((arr_2 [i_4] [i_4]) ? (arr_2 [i_4] [13]) : (arr_10 [i_4] [i_4])))) ? (((max((arr_10 [i_4] [i_4]), (arr_10 [i_4] [i_4]))))) : (max((arr_2 [i_4] [i_4]), 1))));
        arr_20 [i_4] = (arr_16 [1]);
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_23 [i_5] [i_5] = var_12;
        arr_24 [i_5] [i_5] = (((min(((var_10 ? var_11 : -28691)), var_14)) ^ (arr_11 [i_5] [i_5] [14] [i_5])));
        arr_25 [6] = ((((((((5989881847607998823 ? 3232227896684419635 : (arr_5 [i_5])))) ? var_6 : var_13))) ? (max(248687916063978674, (arr_7 [i_5] [i_5]))) : var_8));
        arr_26 [i_5] = var_2;
        arr_27 [i_5] [i_5] = (arr_9 [i_5]);
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        arr_30 [i_6] = ((((((((var_10 ? var_2 : (arr_28 [i_6])))) ? -8 : (min(-107, 5743411369604970423))))) ? -1210493657668978395 : (((max((arr_7 [i_6] [i_6]), var_9))))));
        arr_31 [i_6] = (max((min((arr_7 [i_6] [i_6 + 1]), (arr_12 [16]))), (((!(arr_12 [i_6]))))));
        arr_32 [i_6] [i_6] = (((arr_0 [i_6 + 1] [i_6]) ? var_11 : ((((min(var_12, var_12))) ? (((arr_28 [i_6]) ? var_9 : (arr_10 [i_6] [4]))) : (((~(arr_5 [i_6 + 4]))))))));
        arr_33 [i_6] = ((~9959328530313528107) | (arr_29 [i_6 + 1] [i_6 + 1]));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        arr_43 [7] [i_7] [14] [i_9] = 1;
                        arr_44 [i_6] [i_7] [1] = ((!((((var_7 ? 16500014109183411586 : (arr_6 [13] [i_6])))))));
                    }
                }
            }
        }
    }
    var_18 = (var_15 ? ((((~var_0) ? ((((-9223372036854775807 - 1) <= -4189))) : var_8))) : ((1 ? 22460 : ((var_8 >> (var_6 - 16357709725759101039))))));
    #pragma endscop
}
