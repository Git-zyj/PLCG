/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, ((max(((min((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 - 1])))), ((-(arr_1 [i_0 - 1] [i_0 - 1]))))))));
        arr_3 [i_0] = ((~(!19)));
        arr_4 [i_0] [i_0] = (((~7944920558382595381) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_19 = (arr_6 [i_1 - 2]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_1] [i_1] [i_3] [10] [i_5] = (!(arr_12 [i_1 + 2] [i_1 - 1] [13]));
                            var_20 ^= -2147483647;
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_21 = (max(var_21, (((-((((!(arr_15 [i_3] [i_6] [i_3] [i_4]))))))))));
                            var_22 ^= (arr_20 [i_1] [15]);
                            arr_21 [i_1] [i_2] [i_1] [i_4] [i_1] [i_1 - 3] = ((((max(2147483647, (arr_19 [i_1 - 3] [i_1] [i_1 - 3] [i_1] [i_1] [i_1 + 2] [i_4])))) ? 1488703896 : -2147483630));
                            arr_22 [i_1] [i_1 + 1] [0] [i_1 + 1] [i_1 + 1] [i_1] [14] = ((!(!2147483630)));
                        }

                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            var_23 = (arr_5 [i_7 - 3] [i_7 - 1]);
                            arr_26 [14] [i_1] = ((-((-(arr_12 [i_7 - 2] [i_1 + 1] [i_1 - 1])))));
                            arr_27 [1] [i_2] [1] [6] [i_1] [i_7] = ((~(!36)));
                            var_24 = (max(var_24, (((+((min((arr_12 [14] [i_1 - 3] [i_1 - 1]), 0))))))));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_30 [i_1] [i_1] [i_1] [i_4] [6] = (max((!2147483630), ((-(arr_5 [i_1 - 2] [i_1 - 1])))));
                            var_25 = (max(var_25, (arr_8 [i_1] [i_1 - 2])));
                            var_26 = (arr_8 [i_1 + 2] [i_1 + 2]);
                        }
                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            arr_33 [i_1] [i_1 + 2] [2] [13] [i_1] [i_1 - 1] = ((~((-(arr_32 [i_1] [i_1 + 1] [i_1] [i_9 + 1] [i_9])))));
                            arr_34 [i_1] [i_3] = ((-5 ? ((((!(arr_10 [i_9 + 1] [i_1]))))) : (max((((!(arr_6 [i_1])))), (((arr_9 [i_1]) ? (arr_7 [i_1] [15]) : (arr_32 [i_1] [i_1 - 1] [7] [i_4] [i_9])))))));
                            var_27 *= -92;
                            var_28 = ((arr_32 [i_1 - 3] [i_9] [i_9 + 1] [i_9] [3]) ? (arr_20 [i_3] [5]) : (arr_19 [i_1] [0] [13] [0] [i_3] [13] [13]));
                        }
                        var_29 *= (arr_8 [i_1 + 2] [i_1]);
                        var_30 = ((((!(arr_28 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1] [1] [i_1] [0])))));
                        arr_35 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] = (arr_23 [i_1] [5] [5] [i_2] [5] [3]);
                    }
                }
            }
        }
        arr_36 [i_1] = (min((arr_32 [i_1] [i_1] [7] [2] [i_1]), (arr_32 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1])));
    }
    var_31 = var_15;
    #pragma endscop
}
