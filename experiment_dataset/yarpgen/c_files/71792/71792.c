/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_8 [i_1]) / ((max((arr_2 [i_1] [i_1]), (-127 - 1))))));
                                var_17 ^= ((((arr_10 [i_0] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_4] [i_2 - 1]) ? 0 : (arr_10 [i_1] [i_2 - 1] [i_2 + 1] [i_2] [i_4] [i_2 - 1]))));
                                var_18 = ((-(max(var_8, ((((arr_1 [i_0]) && var_0)))))));
                            }
                        }
                    }
                    var_19 = (min(var_19, ((((0 ^ var_6) ? (min((arr_10 [8] [0] [i_2] [i_1] [0] [i_0]), (max((arr_3 [1] [1]), var_14)))) : ((((min(var_7, var_8))) ? (arr_6 [10]) : (((-2 ? 4294967295 : (arr_6 [8])))))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 &= (min((max((arr_15 [i_6 + 1] [i_6 - 1] [i_5] [i_6 - 1] [i_5] [i_2 + 2] [i_0]), (arr_15 [i_6] [i_6 - 1] [i_5] [i_6 - 1] [i_5] [i_2 - 1] [i_0]))), (((!(arr_14 [i_5] [i_2 + 1] [i_6 - 1] [i_2 + 1] [i_2 + 1] [i_2]))))));
                                var_21 = (max(-1, (0 != 1759609491)));
                            }
                        }
                    }
                }
                arr_17 [i_1] = (max((((81 ? (arr_3 [i_0] [i_1]) : (arr_9 [i_0] [i_1] [i_0] [i_1])))), (min(var_14, (arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
