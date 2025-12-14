/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(var_3 ^ var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((((!var_9) << ((((~(((arr_4 [i_0]) ? var_3 : (arr_5 [i_2]))))) - 2519293532222712385)))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = ((!(arr_7 [i_0] [i_1] [i_3] [i_3])));

                        for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_13 |= (((arr_4 [i_0]) ? ((~(arr_8 [i_4 - 2]))) : (max(var_4, (arr_2 [i_2])))));
                            var_14 = (max(var_14, ((max(((((!var_2) > (~8498)))), (max((arr_7 [i_4 + 1] [i_1] [i_4] [i_3]), (arr_7 [i_4 + 1] [i_3] [i_2] [i_3]))))))));
                            var_15 = ((-(min(((1643591262 ? (arr_4 [i_3]) : var_1)), ((8492 ? 0 : var_5))))));
                            var_16 = (min(8488, -8498));
                        }
                        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, (((((((((arr_11 [i_5] [i_3] [i_0]) & var_2))) ? (((min(1, (arr_5 [i_5]))))) : (arr_9 [i_5 - 2] [i_5 - 2] [i_5 - 1]))) / (max(8498, (arr_9 [i_5] [i_1] [i_0]))))))));
                            var_18 = (~29967);
                        }
                        for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_19 = ((!((min(1, 12599072795960891617)))));
                            var_20 &= (max(((((arr_17 [i_0] [i_1] [i_2] [3] [i_6 + 1] [i_2] [i_6]) % ((((arr_4 [i_3]) || var_8)))))), (max((var_1 || var_5), (max((arr_18 [i_2] [i_2] [i_2] [i_3]), (arr_13 [i_0] [i_1] [i_1])))))));
                            var_21 = ((min((arr_1 [i_6 + 1]), (arr_0 [i_6 - 1] [9]))));
                            var_22 &= (8379204747896560508 | 1901276194);
                        }
                        var_23 &= (min((max(-8481, 8468)), ((((((arr_1 [i_0]) + 9223372036854775807)) << (((!(arr_14 [i_0] [i_0] [i_0] [i_2])))))))));
                    }
                    var_24 &= -8489;
                }
            }
        }
    }
    #pragma endscop
}
