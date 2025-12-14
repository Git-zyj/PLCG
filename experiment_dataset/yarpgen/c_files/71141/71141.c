/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 *= (~85);
                    var_20 = ((((min((arr_6 [i_0] [i_0] [i_1] [i_2]), (arr_9 [i_0] [i_1] [i_2])))) || ((min(-1234, -74)))));
                    var_21 = (max(var_7, -1234));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_2] [i_2] [i_3] [i_4] = min((!-51), 255);
                                arr_18 [i_0] [i_0] [10] [i_2] [12] [i_3] [i_4 - 1] = (((~var_9) ? (((((var_13 % (arr_10 [1] [i_1] [9] [i_3] [10])))) ? var_0 : var_15)) : ((((1051226568 ? 0 : 0))))));
                                var_22 = (max(3702106488495190917, 125));
                                var_23 -= (min((max((arr_13 [i_4 + 1]), (arr_13 [i_0]))), (arr_6 [i_0] [i_1] [i_0] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_32 [i_5] [i_7] [i_7] [i_7] [8] [i_5] [i_5] &= (((((-127 - 1) ? -1234 : var_6)) == (((((arr_12 [i_9] [i_9] [i_9] [i_6 - 1] [i_9] [i_6 - 1]) <= (arr_12 [i_6 + 1] [i_9] [i_9] [i_9] [i_9] [i_6 + 1])))))));
                                arr_33 [i_9] [i_6] [i_6] [i_6] [i_6] |= ((((max((arr_27 [i_6] [i_8 + 1] [8] [i_6 - 1]), 213))) - ((((arr_27 [5] [i_8 - 1] [9] [i_6 - 1]) != (arr_27 [i_5] [i_8 + 1] [i_7] [i_6 + 1]))))));
                                var_24 -= (min((((arr_22 [i_6 - 1]) + -32752)), (arr_6 [i_5] [i_6] [i_7] [i_9])));
                            }
                        }
                    }
                    var_25 = ((var_14 ? 22 : 65512));
                    var_26 -= (max(((65521 ? (arr_10 [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_6 + 1]) : (arr_10 [i_7] [i_7] [i_6 + 1] [i_6 - 1] [i_6 + 1]))), -27));
                    arr_34 [2] [i_7] [i_7] [i_5] = ((((min(65519, (arr_29 [i_6] [i_5])))) ? (((62445 << (((max(33, 9000486608352358256)) - 9000486608352358252))))) : -3273886054932375558));
                }
            }
        }
    }
    var_27 += (~(((!((max(3702106488495190940, 12282690988494986079)))))));
    #pragma endscop
}
