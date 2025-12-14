/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = ((((((var_3 ? 1 : var_10)) / (min(-4955355123099682170, 13024))))));
                    var_13 = ((((min((arr_2 [i_0] [i_1]), (arr_1 [i_2])))) ? (max(1403869411, -625897979439667855)) : (min((arr_1 [i_0]), (arr_2 [i_0] [i_1])))));
                    var_14 += (-(arr_4 [24] [i_1] [24]));
                    var_15 = ((min((arr_1 [i_1]), (arr_1 [i_0]))));
                    arr_9 [5] [i_0] [i_0] [i_0] = var_11;
                }
            }
        }
    }
    var_16 = (var_3 > 625897979439667855);
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_18 ^= (min((((~(arr_6 [i_3] [i_4] [i_4] [i_5])))), ((~(max(var_12, -625897979439667849))))));
                    arr_19 [i_4] [i_4] [i_4] [i_4] = (min(((-20466 | (arr_4 [i_3] [i_4] [i_5]))), (((arr_4 [i_3] [i_4] [i_5]) ? (arr_4 [i_3] [i_4] [i_5]) : (arr_4 [i_5] [i_4] [i_3])))));
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_29 [i_3] [17] [i_6] = (((((arr_7 [i_8] [i_7] [i_7] [i_6 - 1]) <= (arr_7 [i_7] [i_8] [i_7] [i_6 - 1]))) ? ((625897979439667854 ? (arr_7 [i_8] [13] [i_6 - 1] [i_6 - 1]) : (arr_7 [5] [1] [i_6] [i_6 - 1]))) : 117));
                                var_19 *= 625897979439667847;
                                var_20 = (((((((arr_22 [i_3]) + var_6))) ? (arr_12 [i_3]) : (arr_27 [i_6] [i_6] [i_6 - 1] [i_6] [i_6] [i_6]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
