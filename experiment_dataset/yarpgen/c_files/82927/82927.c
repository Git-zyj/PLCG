/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] |= (((arr_1 [i_0] [i_1]) & var_6));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 *= ((((var_16 ? (var_14 && var_0) : ((120 << (((arr_9 [i_4] [i_3] [i_3] [i_3] [i_1] [i_0]) - 82)))))) < var_9));
                                arr_13 [i_0] [i_0 + 3] [i_0] [i_0] [i_2] = ((arr_8 [i_1] [i_1] [i_4]) ? (((arr_1 [i_0 - 1] [i_0 + 2]) ? (-8335 & 3119992308) : var_4)) : ((((var_13 ? 1680738390 : var_3)))));
                                var_18 = (arr_9 [i_0] [i_2 + 2] [8] [i_2] [13] [i_4]);
                            }
                        }
                    }
                }
                arr_14 [10] [i_1] [i_1] = (!0);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_19 += -20649;
                            var_20 = ((5311978917327123941 ^ ((var_16 ? 103 : -4642033119025883858))));
                        }
                    }
                }
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}
