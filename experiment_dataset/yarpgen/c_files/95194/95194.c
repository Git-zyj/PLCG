/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((max(var_2, ((9651 ? 1 : 34359738367)))), var_4));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (arr_4 [i_0] [i_1 + 1] [i_0]);
                var_14 *= ((((~((min(var_4, 86))))) / ((((((arr_3 [12] [i_1]) - 34359738382))) ? var_6 : 25072))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_15 = ((((((!(arr_6 [i_0] [i_1] [i_0] [i_3 - 3]))))) != (min((((!(arr_3 [i_0] [i_3])))), (arr_0 [i_0])))));
                                var_16 -= arr_11 [i_0] [i_0];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_1 + 1] [i_0] = max((max((min((arr_10 [i_2]), var_6)), (arr_2 [i_0]))), ((min((!18446744039349813263), (arr_12 [i_1 + 2] [i_2] [i_2] [i_2] [i_2 + 1] [i_6 + 3])))));
                                arr_19 [i_0] [i_5 - 2] [i_0] = (((arr_9 [i_0] [i_1] [i_2] [i_5] [i_0]) >= (((max((arr_6 [i_0] [i_0 + 1] [i_0] [i_5 + 1]), -15044))))));
                            }
                        }
                    }
                    var_17 = (max(var_17, (((((((max(var_3, (arr_2 [16]))) * (!75)))) ? (arr_3 [4] [i_1]) : (--9006075712187841246))))));
                }
                for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    var_18 = (arr_21 [i_0] [i_0]);

                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_7] [i_8] [i_1] [i_1] = ((max(2147483647, 734024062)));

                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((!(arr_23 [i_0] [i_7])));
                            var_19 += ((!(((var_7 ? 3859174489432756812 : (5755600195422696898 % 28))))));
                            var_20 |= (arr_3 [i_9] [i_9]);
                            arr_31 [i_0] [i_0] [i_0] = (var_1 || 2524067936392145624);
                            var_21 = ((-186459742 ? (max((max((arr_10 [i_0]), var_6)), (arr_17 [i_7] [i_1] [i_1] [i_7] [i_1] [i_0]))) : 17591649173504));
                        }
                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            var_22 = ((max((arr_27 [i_0 + 1] [i_1 + 3] [i_7 - 1] [i_8 - 1]), 18446744039349813263)) - (min(10280826466597370878, (!var_11))));
                            var_23 = (min((max(27307, (max((arr_34 [i_0 - 2] [i_0] [i_0]), (arr_34 [i_10] [i_1] [i_0 + 1]))))), 56));
                        }
                    }
                    arr_35 [i_0] [i_0] = ((!((max(((-(arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), var_2)))));
                    var_24 = var_4;
                    var_25 ^= -1;
                }
            }
        }
    }
    #pragma endscop
}
