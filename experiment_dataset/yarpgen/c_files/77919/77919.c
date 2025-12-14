/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max((min(-68, var_10)), var_0))) ? ((((((var_10 ? var_9 : -24927))) && 5215))) : (!var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 ^= (arr_9 [i_4] [i_2] [i_2] [i_3] [i_4 - 4] [i_1]);
                                var_17 = max((((arr_1 [i_0]) ? 13287162248309536724 : (max(7121, var_0)))), 2147483647);
                                arr_12 [i_1] [i_1] [i_2] [i_3] [i_4 + 1] = var_8;
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = ((!((min(var_13, (((arr_7 [i_3]) ? var_2 : 9223372036854775807)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_5] [i_1] [i_7] [i_1] [i_0] = (((max((arr_2 [i_0]), (arr_2 [i_5])))) ? (min((min(var_4, (arr_5 [i_6] [i_7]))), (!255))) : (arr_19 [i_0] [i_1] [i_5] [i_1] [i_7]));
                                var_18 += (arr_2 [i_0]);
                                var_19 = arr_11 [i_0] [i_1] [i_5] [i_1] [i_7] [i_7];
                            }
                        }
                    }
                }
                var_20 *= (arr_19 [i_0] [i_0] [i_1] [i_1] [i_0]);
                arr_21 [i_1] [i_0] = (((min(0, (-40 / -1405922343)))) ? var_10 : (arr_2 [i_0]));
                var_21 = ((((((arr_7 [i_1]) ? 255 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))) ? ((((((arr_14 [i_0] [i_0] [i_1] [i_1]) ? var_10 : (arr_8 [i_0] [i_0] [i_1] [i_1])))) ? (max(-2001251826183739738, var_6)) : (17107578607726753363 <= var_7))) : ((((!(arr_4 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    var_22 -= var_8;
    #pragma endscop
}
