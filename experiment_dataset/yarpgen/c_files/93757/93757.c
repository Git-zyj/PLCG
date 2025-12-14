/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_7 ? (min(var_8, -var_11)) : ((min((~-1), ((var_2 ? var_3 : -1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_20 = (min(-16, 68));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_0] [i_3] [i_0] [i_3] = ((-((var_4 ? (arr_8 [3] [i_1 - 1]) : 46))));
                                arr_14 [i_2] [i_4] [i_3] [i_3] [i_2] [i_1] [i_2] |= -var_0;
                                arr_15 [1] [i_3] [1] [1] [i_1 - 1] [i_3] [11] = var_1;
                                arr_16 [i_3] = (70 % 17207);
                                var_21 = 3394219323;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    var_22 |= (((arr_19 [i_0] [i_1 + 2] [i_0 - 1] [i_0 - 1]) ? var_10 : (arr_7 [i_0 + 2] [i_0 + 2] [i_0])));
                    var_23 = (arr_9 [i_0] [i_0] [i_0] [10] [i_5] [i_5]);
                    var_24 = var_0;
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    var_25 = var_2;
                    var_26 = ((~((+(((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]) / (arr_3 [i_0] [i_1 + 1] [i_6])))))));
                }
                var_27 = (!187);
                var_28 = (((((((arr_2 [i_0 + 1]) == var_15)))) ? var_9 : ((min(var_13, (min(var_12, 126)))))));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_29 = (arr_7 [i_7] [i_1] [i_0 + 1]);
                    var_30 = (((26 <= 188) ? ((~(arr_9 [i_0] [i_0] [i_0 + 3] [i_0] [i_1 + 1] [i_7]))) : (((!(arr_9 [1] [i_0] [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_7]))))));
                    var_31 = (((-127 + 2147483647) << ((((((((((arr_8 [i_1] [i_7]) ? (arr_21 [i_7] [i_0 - 1] [i_1] [i_0 - 1]) : 15))) ? (min((arr_21 [i_0] [i_1 - 1] [i_1 - 1] [9]), (arr_10 [i_7] [i_1] [i_7] [i_7] [i_7]))) : ((max(65535, (arr_4 [i_0] [i_0 + 2])))))) + 601599628290943987)) - 6))));
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    arr_29 [i_0] [i_1] |= (max(((((((var_16 <= (arr_10 [i_0] [i_0] [i_0 + 1] [1] [i_0])))) > var_8))), ((~(!var_16)))));
                    var_32 = (min(((((!(arr_2 [2]))))), -var_8));
                    var_33 = 10135;
                }
            }
        }
    }
    var_34 = var_1;
    #pragma endscop
}
