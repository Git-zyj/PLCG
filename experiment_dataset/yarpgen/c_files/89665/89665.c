/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 17215032316316253933;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((((max((arr_0 [i_1 - 2] [i_1 + 3]), (arr_0 [i_1 + 3] [i_1])))) == (((2182938463 && (arr_0 [i_1 - 2] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = (((((!(arr_4 [i_1 + 4])))) < ((min((arr_4 [i_1 + 2]), var_1)))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_15 [i_4] [i_1] [i_1] [0] = (min((min(243, var_10)), 16));
                                var_17 ^= -1775780489;
                                var_18 += (min((((arr_14 [i_3] [i_1] [i_1 + 2] [i_3 - 2] [i_1] [i_3]) ? (arr_14 [i_2] [i_0] [i_1 - 1] [i_3 - 2] [i_2] [i_3 - 2]) : (arr_14 [i_2] [i_1 + 3] [i_1 + 3] [i_3 - 1] [i_4] [i_1 + 3]))), (arr_11 [i_1 - 1] [i_1 + 4] [i_1 + 1])));
                            }
                            for (int i_5 = 1; i_5 < 18;i_5 += 1)
                            {
                                arr_18 [i_2] [i_2] [i_1] [i_2] [i_2] = ((!((max((arr_6 [i_3 + 1] [i_5 + 2]), (arr_6 [i_3 + 1] [i_5 - 1]))))));
                                arr_19 [i_1] [i_1 + 1] = (i_1 % 2 == zero) ? ((max((((arr_5 [i_1] [i_3 + 1] [i_1 - 1] [i_3 - 1]) << (((arr_5 [i_1] [i_3 - 1] [i_1 + 3] [2]) - 340634841)))), var_6))) : ((max((((((arr_5 [i_1] [i_3 + 1] [i_1 - 1] [i_3 - 1]) + 2147483647)) << (((((arr_5 [i_1] [i_3 - 1] [i_1 + 3] [2]) + 340634841)) + 1604541498)))), var_6)));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 20;i_6 += 1)
                            {
                                var_19 = 2422588100;
                                arr_22 [i_6] [i_1] [i_3] [i_2] [i_1 + 3] [i_1] [i_0] = (((arr_0 [10] [10]) ? 2422588100 : (arr_17 [i_0] [i_1] [i_2] [3] [13])));
                                var_20 = (((arr_9 [i_1] [i_1 + 1]) ? (arr_14 [i_1] [i_6] [i_3 + 1] [i_3 + 1] [i_0] [i_1]) : 1));
                            }
                        }
                    }
                }
                arr_23 [i_0] [i_1] = (min(((-113 ? 26 : 0)), (arr_1 [i_1 + 1])));
                arr_24 [i_1] [i_1] = (arr_12 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 3] [i_1 - 1] [i_1 + 4] [i_1 - 1]);
            }
        }
    }
    var_21 = ((16 ? var_9 : var_1));
    #pragma endscop
}
