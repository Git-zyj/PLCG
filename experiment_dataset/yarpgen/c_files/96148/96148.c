/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = (((min(var_3, (((arr_2 [i_0]) % (arr_2 [i_0 - 1])))))) ? (((arr_2 [i_0 - 1]) ^ ((((arr_3 [i_0]) ? 9223372036854775807 : var_12))))) : ((((arr_0 [i_0] [i_0 - 1]) ? ((((arr_3 [i_0]) - (arr_3 [i_0])))) : ((var_9 ? 113 : var_13))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        var_18 = (((max((arr_3 [i_0 + 2]), (arr_7 [i_0] [i_2] [i_0]))) <= (arr_4 [i_0 + 1])));
                        var_19 = ((((min(1, 117))) << (((arr_9 [i_0 + 1] [i_0 - 1]) + 63))));
                        var_20 = (arr_7 [i_0] [i_0] [i_0]);

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_21 = (arr_11 [i_0 + 1] [i_1] [i_2] [i_3 - 2] [i_4]);
                            var_22 = 1;
                            arr_12 [i_0] [i_2] = (min((((arr_7 [i_3 - 1] [i_3 + 2] [i_0]) & var_0)), ((((arr_10 [i_0 + 1] [i_0] [i_0 - 1] [i_3 + 1] [i_3 - 3] [i_3] [i_0 - 1]) >= ((1 ? -24 : (arr_10 [i_0] [12] [i_1] [i_1] [i_3] [i_3] [i_4]))))))));
                            arr_13 [7] [i_1] [i_1] [i_3 + 2] [i_0] = (arr_9 [i_3 + 1] [i_0 + 1]);
                        }
                        for (int i_5 = 4; i_5 < 19;i_5 += 1)
                        {
                            var_23 = 567897563;
                            var_24 = (((!1) || ((((arr_3 [i_0 - 1]) ? ((~(arr_0 [i_0] [i_2]))) : var_9)))));
                        }
                    }
                }
            }
            arr_16 [i_0] = (((arr_15 [i_0]) ? ((1080065723428211175 ? (arr_14 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2]) : var_6)) : (((10 ? 16675 : 252859903)))));
            arr_17 [i_0] = ((1629918300 ^ (arr_11 [i_0] [i_1] [i_1] [i_1] [i_0 - 1])));
        }
        var_25 = ((((((108 < (arr_7 [i_0] [i_0] [i_0])))) - 99)));
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] [i_6 + 2] = (98 || 32);

        /* vectorizable */
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            var_26 = (arr_8 [4] [i_6 - 1] [i_6] [i_6 + 1] [i_7 + 2]);
            arr_23 [i_7] = ((~(arr_18 [i_6 + 3])));
            var_27 = (((((-(arr_0 [10] [i_7])))) ? (arr_2 [i_6 - 1]) : (arr_18 [i_6])));
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_27 [i_6] = 1;
            var_28 = (arr_19 [i_6 + 1] [i_8]);
            arr_28 [i_6] [i_8] = (arr_2 [i_8]);
            arr_29 [i_8] = (!var_1);
            arr_30 [i_6 + 2] [i_8] [i_8] = (~(((arr_25 [i_6 + 2]) ? (arr_25 [i_6 + 3]) : var_3)));
        }
        var_29 = -754339852;
        var_30 = (arr_19 [i_6 + 1] [i_6]);
    }
    var_31 = var_13;
    var_32 = var_5;
    #pragma endscop
}
