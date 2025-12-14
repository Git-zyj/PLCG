/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max(var_11, var_0))));
    var_14 = (min(var_14, ((((((((39226 ? var_3 : 26310)) / -28191))) ? (((-((var_1 ? var_1 : var_12))))) : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] = ((max((((9921061288858004909 && (arr_4 [10])))), (arr_2 [8]))));
                                arr_16 [i_0] [i_1] [i_2] [i_3 + 1] [i_0] = (max((((min((arr_9 [i_0] [i_0]), var_2)))), ((((max(2541466065, (arr_0 [i_0])))) ? (~var_10) : (arr_10 [i_4] [i_3] [i_2] [i_1] [i_0])))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((((~(arr_0 [i_0]))))), (26310 | -var_0)));
                            }
                        }
                    }
                    arr_18 [i_1] [i_0] [i_2] = (arr_3 [i_0]);
                    arr_19 [i_0] [i_0] [i_0] = ((+(((4006859229 <= 3265046668) ? ((var_3 ? 39226 : (arr_6 [i_0] [i_1] [i_1]))) : (arr_6 [i_0] [i_2 + 1] [7])))));
                    var_15 = (min(var_15, ((-(!-41)))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_26 [i_0] [i_5 - 2] [i_2 + 1] [11] [i_0] = (arr_20 [i_2] [i_5]);
                                var_16 = var_0;
                                arr_27 [i_0] [5] [i_5 - 1] [7] [5] [i_0] [i_0] = (((((((41 ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : 13932))) ? (arr_22 [i_2 + 1] [i_6] [i_6 - 3]) : (arr_13 [i_5 - 2] [i_5 + 1] [i_5] [i_5 - 1] [i_5 - 1] [i_0]))) - 8755));
                                var_17 = (max(var_17, (arr_9 [i_6] [2])));
                                var_18 -= ((min((arr_11 [i_0] [i_1] [i_2] [i_5] [8]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
