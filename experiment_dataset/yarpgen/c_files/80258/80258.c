/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(-14 * -16067223428274510649)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_1] [i_2 - 1] = ((-((-(arr_1 [i_0 + 3] [i_2 - 1])))));
                    arr_8 [8] [i_1] [i_2] = ((((arr_2 [i_0 + 1] [i_0 - 1]) && var_10)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((((arr_2 [i_0 + 2] [i_0 - 2]) ? (((arr_2 [i_0 - 2] [i_0 + 3]) ? (arr_2 [i_0 - 3] [i_0 + 3]) : var_14)) : (((((arr_2 [i_0 + 1] [i_0 + 3]) > var_14)))))))));
                                arr_13 [i_0] [i_4] = ((((((((119 ? (arr_3 [12] [12]) : (arr_5 [i_0 + 1] [i_0 + 1] [i_2] [i_3])))) ? var_0 : (4616 - var_3)))) != ((-(arr_9 [i_0 + 1] [i_4])))));
                            }
                        }
                    }
                    var_18 = ((((arr_11 [i_0 + 2] [i_2 - 2] [i_2 + 1]) <= (arr_11 [i_0 - 1] [i_2 - 2] [i_2 - 2]))));
                }
                for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    arr_18 [10] [10] = (((-var_14 ^ 125) ? (((arr_11 [i_0 - 1] [i_0 + 3] [i_5 + 1]) ? (arr_16 [3] [i_1] [i_1]) : ((var_3 ? (arr_4 [i_1] [i_1]) : var_12)))) : ((min(-var_13, ((min(var_8, (arr_16 [4] [i_1] [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_19 = (((((-(max(30285, var_14))))) ? (max((arr_22 [i_6] [i_7 - 4] [i_6] [i_6] [5] [i_7 + 2]), (((arr_11 [i_7] [i_5 + 1] [i_0 + 2]) ? var_5 : var_2)))) : ((-(arr_16 [i_0] [i_1] [i_1])))));
                                var_20 = ((var_13 ^ (((-(1 * var_5))))));
                            }
                        }
                    }
                }
                for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
                {
                    arr_28 [i_8] [i_1] [i_0] [i_8] = (((((arr_17 [i_0 - 3]) ? (arr_17 [i_0 + 2]) : (arr_17 [i_0 + 2]))) ^ (((arr_22 [i_1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1]) ^ (arr_1 [i_0] [i_8 + 1])))));
                    var_21 = ((((min((arr_10 [i_8 - 1]), (arr_10 [i_8 + 1])))) + (((arr_10 [i_8 + 1]) << (((arr_10 [i_8 + 1]) - 9870))))));

                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        arr_32 [i_8] [i_1] = ((((~(arr_12 [i_0 - 3] [i_0 + 3] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_9 + 2]))) << (((((arr_12 [i_0 - 1] [i_0 - 2] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9 + 1]) | var_14)) - 4285134197))));
                        arr_33 [i_8] = (((1 <= 1) ^ ((8836 ? (max(var_11, -7890037199358400338)) : (arr_17 [i_8 + 1])))));
                        var_22 = (((-(arr_9 [i_8 - 1] [i_0 - 1]))));
                        var_23 = (min(((((arr_14 [i_8] [i_8] [i_8 - 1] [1]) + (arr_14 [i_8] [0] [i_8 - 1] [16])))), (((arr_14 [i_8] [i_8] [i_8 - 1] [i_8 - 1]) | var_9))));
                    }
                }
                var_24 = (-(((arr_25 [i_0]) ? (arr_16 [i_1] [i_1] [i_0 - 1]) : (arr_16 [i_0 + 3] [i_1] [i_0 - 1]))));
                arr_34 [i_0 - 2] [i_0] [i_0 - 3] = (((((var_2 % 64) % (arr_22 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1]))) ^ (((((var_13 ? var_6 : var_5))) ? -1 : (arr_3 [i_0] [i_1])))));
                var_25 = var_12;
                var_26 = ((((((-34 - (arr_12 [i_0] [i_0 - 3] [i_0 - 1] [16] [i_1] [i_1]))) ? (min((arr_31 [i_0] [i_1] [i_1] [i_1] [i_0 + 2]), (arr_10 [i_0]))) : (arr_10 [i_0])))));
            }
        }
    }
    var_27 = (((((var_15 ? 1 : -1))) && 1));
    #pragma endscop
}
