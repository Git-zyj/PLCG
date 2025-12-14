/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_14 *= ((!((((arr_2 [i_1 + 1]) ^ (arr_2 [i_0]))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_15 = ((((((!18) ? ((((!(-127 - 1))))) : -var_8))) ? (((arr_5 [i_0] [i_0] [i_0]) ? (((arr_1 [11]) ? (arr_2 [i_0]) : (arr_5 [i_0] [15] [i_2]))) : (arr_1 [i_1 + 4]))) : ((((((var_3 <= (arr_4 [10] [10] [i_2] [i_0])))) == ((min((arr_5 [i_0] [i_1] [i_2]), (arr_2 [i_1])))))))));
                    var_16 = (((arr_2 [i_1 + 1]) <= ((((arr_2 [i_1 - 1]) >= (arr_2 [i_1 - 1]))))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_17 = ((!(arr_9 [i_1 + 3] [i_1 + 4] [i_1 + 3] [8])));
                            var_18 &= ((-(arr_6 [i_1 - 3] [i_1 + 3] [i_1 + 3] [i_1 - 3])));
                            var_19 = (((arr_11 [i_1 - 3]) >= (((-(arr_14 [i_5] [i_4] [i_3] [i_3] [i_0] [i_0]))))));
                        }
                        var_20 -= (((arr_7 [i_3] [i_1 + 4] [i_0] [i_0]) ? ((((arr_11 [i_0]) ? (arr_12 [i_4] [i_1] [i_3] [i_4] [i_4] [i_1 + 1]) : (arr_9 [i_4] [i_3] [i_1] [i_0])))) : ((((((arr_11 [i_3]) ? (arr_4 [i_0] [i_1 + 4] [i_1 + 4] [i_1 + 4]) : -117))) ? ((((!(arr_5 [i_0] [i_3] [i_3]))))) : (max((arr_15 [i_0] [i_0]), var_3))))));
                    }
                    var_21 = ((((arr_12 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_3] [2] [i_1 - 3]) / (arr_12 [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_3] [i_3] [i_3]))));
                    var_22 = ((0 ? (((arr_8 [i_1 + 2] [i_1 + 2]) % (arr_8 [i_1 + 1] [i_1 - 1]))) : (((~(((arr_4 [i_0] [i_1 - 3] [i_1 - 3] [i_0]) ? var_6 : -8860661962408408607)))))));
                }
            }
        }
    }
    var_23 = ((max((((var_10 ? var_0 : var_11))), (max(11277294156998101562, var_5)))));
    #pragma endscop
}
