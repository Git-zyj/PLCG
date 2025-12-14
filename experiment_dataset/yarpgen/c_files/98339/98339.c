/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (((arr_5 [i_4] [8] [i_2] [2]) ? ((-(arr_6 [i_2 + 1] [i_3 + 2] [i_3 + 2]))) : (1292472187 || 29)));
                                var_14 = ((-(((arr_5 [i_0] [i_1] [i_2 - 2] [i_3 + 2]) ? (arr_5 [i_0] [i_0] [i_2 - 2] [i_3 + 2]) : (arr_5 [i_0] [i_1] [i_2 - 2] [i_3 + 2])))));
                                var_15 -= ((!(arr_9 [i_2] [i_3 + 2] [16] [i_0] [i_4] [i_2] [i_4])));
                                var_16 = ((((((arr_9 [i_0] [i_1] [i_3 - 1] [i_4] [i_0] [i_4] [i_2 + 1]) ? (arr_9 [i_4] [i_4] [i_3 - 1] [i_4] [i_4] [i_2] [1]) : (arr_9 [i_0] [i_1] [i_3 - 1] [i_4] [i_0] [i_3] [i_0])))) ? (min((arr_9 [i_0] [i_1] [i_3 - 1] [i_4] [i_4] [i_0] [i_1]), (arr_9 [i_0] [i_0] [i_3 - 1] [i_4] [i_0] [i_4] [i_1]))) : (min((arr_9 [i_0] [i_1] [i_3 - 1] [i_4] [i_3] [i_0] [i_4]), (arr_9 [i_4] [i_2] [i_3 - 1] [i_4] [i_4] [i_4] [i_4])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_17 = (min(var_17, -1554836316));
                            var_18 = (min(var_6, (max(((-(arr_10 [i_0] [i_0] [i_5] [i_6] [i_5 - 3]))), (((arr_13 [i_0] [i_6] [1]) + (arr_3 [i_5] [i_5] [i_0])))))));
                            var_19 = (((~var_7) ? (arr_11 [i_0] [i_0]) : -var_11));
                        }
                    }
                }
            }
        }
    }
    var_20 = (1554836306 % 1554836314);
    var_21 |= ((((!(var_8 & var_6))) ? var_0 : var_1));
    var_22 *= var_1;
    #pragma endscop
}
