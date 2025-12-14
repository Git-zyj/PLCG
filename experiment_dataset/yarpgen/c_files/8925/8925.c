/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_2 ? ((210912913 ? var_8 : var_9)) : var_6))) ? (var_11 || 31950) : var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    var_13 = (max(var_13, (((~(((arr_1 [i_0] [i_2 - 2]) ? (arr_5 [i_0]) : (arr_7 [i_2 - 1] [i_2 - 2]))))))));
                    var_14 = (arr_1 [i_2 - 1] [4]);
                    var_15 = (min(var_15, (min((((((max(var_3, (arr_3 [i_0])))) || (arr_9 [i_0] [1] [i_2] [i_2 + 1])))), (arr_5 [i_0])))));
                    arr_10 [i_0] [i_1] [3] [i_0] = (((((((-(arr_5 [i_2])))) ? (((arr_6 [i_0] [i_0]) ? 24799 : var_5)) : (arr_4 [i_0] [i_1] [i_2 + 1]))) < ((432127784 ? -432127781 : -3026))));
                    var_16 = (max(var_16, var_11));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_17 = (max(var_17, (((~(arr_9 [i_3] [i_3] [i_1] [i_0]))))));
                    arr_13 [i_0] [i_0] [i_0] = (!45286);
                    var_18 += (!0);
                    var_19 |= ((45 ? (arr_8 [i_3]) : (max(-210912913, var_2))));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_20 |= 230;
                    arr_18 [i_4] [i_1] = (0 - (arr_15 [i_4] [i_1] [i_1]));
                }

                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] [i_0] = (((((arr_0 [i_0]) * (arr_16 [i_5] [i_5 + 3] [i_5 - 3]))) - 76));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_27 [i_6] [i_1] [13] [i_1] [i_1] [i_6] [i_7] = (arr_23 [i_0] [i_0] [i_0]);
                                arr_28 [i_0] [i_6] [5] [i_0] [i_5 - 4] [i_6] [i_7] = (((arr_12 [i_5 - 3] [i_5 - 4] [i_5 - 1]) ? (((arr_20 [i_5 - 1] [i_5 - 3] [i_5 - 3]) ? var_5 : 32768)) : (((arr_20 [i_5 + 1] [i_5 + 3] [i_5 - 1]) ? (arr_26 [i_6 + 1] [i_6] [i_5 + 1] [i_6] [i_5 + 2]) : (arr_26 [i_6 + 1] [i_6] [i_5 - 2] [i_6] [i_5 - 3])))));
                                var_21 = (((((arr_20 [i_6] [i_6 - 1] [i_6 - 1]) ? var_1 : 0))) ? (((arr_20 [i_0] [i_6 + 1] [i_6 + 1]) ? 126 : -466905025)) : (((arr_20 [2] [i_6 - 1] [i_5 + 1]) ? (arr_20 [i_0] [i_6 + 1] [i_5]) : (arr_20 [i_0] [i_6 + 4] [i_5]))));
                                var_22 = (arr_24 [i_1] [i_5 - 2] [i_6]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_23 = ((((((max(-38, (arr_31 [i_0] [i_1] [i_8] [i_0])))) ? ((-951725098 | (arr_4 [i_0] [i_1] [i_8]))) : (((arr_17 [17] [17] [i_5]) ? (-32767 - 1) : var_0))))) ? ((min((arr_9 [i_9 + 1] [i_1] [i_5 - 3] [i_8]), 24788))) : (arr_30 [i_9 - 1] [i_9 + 2] [5] [i_9 + 1]));
                                var_24 -= (arr_19 [i_9] [i_9] [i_9 - 4] [i_5 + 3]);
                                arr_34 [i_0] [i_5 - 1] [i_8] = (((((arr_9 [i_5 - 2] [i_9 + 1] [i_9 + 1] [i_9 - 1]) | (-32767 - 1)))) ? ((~(arr_11 [i_1]))) : (arr_14 [i_9 - 2] [i_0]));
                                var_25 = ((((~((217 ? -119 : 19)))) | (((arr_2 [i_5 + 1]) ? (arr_2 [i_5 - 4]) : (arr_30 [i_0] [i_9 - 4] [i_5 - 2] [1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
