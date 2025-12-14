/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (((((-(var_5 / var_1)))) ? (((((var_10 ? var_6 : var_0))) & 1002733532)) : (~var_11)));
    var_15 = ((var_1 | ((var_7 ? ((1433722439 ? var_9 : var_8)) : ((var_3 ? var_1 : var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [5] [i_1] [i_0] [6] [i_4] = (((arr_6 [i_0 - 1] [i_2] [i_0] [i_4 + 1]) ? ((~(((var_12 + 9223372036854775807) << (1092093027 - 1092093027))))) : (((+((max((arr_9 [i_0] [i_1] [i_0] [i_0]), (arr_9 [i_0] [i_1] [i_2] [6])))))))));
                                arr_15 [i_0] [i_0] = ((-(max(((((arr_6 [i_4] [i_0] [i_0] [i_0]) == 9223372036854775807))), (((arr_7 [i_1] [i_1] [i_2] [i_2]) ? -9039045227208842898 : 31))))));
                                var_16 |= ((+(max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_4]), (arr_8 [i_0] [i_1] [i_1] [12] [i_4] [4])))));
                                var_17 = ((((max((arr_6 [i_0] [i_0 - 3] [i_0] [i_0]), (arr_6 [i_0] [i_0 - 3] [i_0] [i_4 + 2])))) ? (((min(var_4, -24)) ^ (arr_0 [i_0]))) : (((((1023 ? -257323414 : (arr_6 [i_0] [i_0] [i_0] [i_3])))) ? ((min((arr_13 [i_0] [i_1]), var_1))) : (((-59 + 2147483647) >> (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [3]) - 37572))))))));
                                arr_16 [i_1] [i_1] [i_3] [i_0] = (((((min(var_6, (arr_13 [i_0] [2]))) - (arr_12 [i_4] [12] [i_3] [i_2] [5] [i_1] [7])))));
                            }
                        }
                    }
                }
                var_18 = (arr_9 [i_0] [i_0] [11] [i_0]);
                var_19 &= var_12;
            }
        }
    }
    #pragma endscop
}
