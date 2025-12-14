/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((21562 ? var_8 : (((max((min(-14696, 14695)), (14695 != -14695)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_5 [i_0] [i_0 + 1] [i_0] [i_0 - 2]) % 21052));
                                arr_10 [i_2] [i_1] = 14695;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_17 = ((~(arr_15 [i_6] [i_0] [i_0])));
                                arr_16 [i_2] [i_1] [i_2] [i_2] [i_5] [1] [i_6 - 2] = 2072026334;
                                arr_17 [i_1] [i_0] [i_2] [i_2] [i_6] = (max((((((min(-1, 0))) ? (((((arr_0 [i_0]) || (arr_2 [i_0] [i_0]))))) : (min((arr_8 [i_0] [i_2]), (arr_8 [i_2] [i_2])))))), ((((min((arr_9 [i_0] [i_2] [i_6]), (arr_5 [i_6] [i_6] [i_6] [i_6])))) ? (arr_1 [i_0]) : (((min(38927, (arr_11 [i_2] [i_1] [i_1] [i_1] [11] [i_1])))))))));
                                var_18 = 22315;
                            }
                        }
                    }
                    var_19 = 2072026334;
                }
            }
        }
    }
    var_20 = var_12;
    var_21 = (((((max(var_0, var_13)))) ? -1 : (((~-244150729) >> (((~3027) + 3032))))));
    #pragma endscop
}
