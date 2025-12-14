/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 -= var_3;
        var_18 = (max(var_18, ((max(10302684870992912748, -1367636299)))));
        arr_2 [i_0] [i_0] = ((((((max(549722259456, 1784))) ? ((-1784 ? 883216809 : (arr_1 [i_0]))) : (arr_0 [i_0]))) <= (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_15 [i_1] = ((49137 ? -19402 : -984739815));
                    arr_16 [i_1] [i_1] [i_1] [i_1] &= (((((((max((arr_5 [i_1] [i_1]), (arr_11 [i_1] [i_1] [i_2] [i_2])))) ? (arr_0 [i_1]) : ((((arr_3 [i_1]) ? -51017328 : (arr_6 [i_1]))))))) ? (((((65535 ? 171 : var_16))) ? var_5 : (((arr_0 [i_1]) ? 403892624 : (arr_5 [i_2] [i_3]))))) : var_5));
                    var_19 = (max((((-(arr_8 [i_1] [i_1])))), ((11143888947160501302 ? (arr_13 [i_2 + 1]) : var_5))));
                    var_20 = -219912172;
                }
            }
        }

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_20 [i_1] &= (arr_5 [i_1] [i_1]);
            var_21 = ((arr_17 [i_4]) ? var_5 : ((max(110, 2147483647))));
        }
        /* vectorizable */
        for (int i_5 = 4; i_5 < 17;i_5 += 1)
        {
            var_22 = (((arr_9 [i_5 - 4] [i_5 - 2] [i_5]) ? (arr_9 [i_5 - 4] [i_5 - 2] [i_5]) : 0));
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_31 [i_5] [i_6] [i_6] [i_6] = 38799;
                            var_23 = (((arr_30 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8]) ? -984739815 : var_10));
                        }
                    }
                }
            }
        }
        var_24 = (((arr_21 [i_1]) ? (((var_12 || 231) ? ((var_5 ? var_2 : var_14)) : -1784)) : ((((((22061 ? 1650879676 : 0))) ? ((max(var_13, (arr_13 [i_1])))) : (max(var_8, 2146435072)))))));
        arr_32 [i_1] = -1395705004;
    }
    var_25 = -var_13;
    #pragma endscop
}
