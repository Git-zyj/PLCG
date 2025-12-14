/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = ((~(((arr_7 [i_0] [i_0 + 1] [i_2 - 1] [i_0]) ? 2147483647 : (arr_2 [i_0 - 3])))));
                            arr_10 [i_1] [i_1] [i_0] = var_3;
                            var_18 = ((((min((arr_8 [i_0] [17] [17] [i_1]), ((((arr_0 [i_3] [i_2 - 2]) <= 23424)))))) ? var_7 : (((!((max(1, (arr_3 [i_0])))))))));
                            arr_11 [i_0 + 1] [i_2 + 3] [i_2] [i_2] [i_2] [i_2] = var_16;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [1] [i_4 - 1] [i_4 - 1] [i_5] [i_4 - 1] = ((min((min(311460274, -311460291)), var_9)) & ((242 ? (min(1576826602, 127)) : -9)));
                            var_19 = (arr_13 [i_1] [i_4]);
                        }
                    }
                }
                arr_19 [i_0] = ((((((((0 >> (247 - 220)))) ? (((arr_9 [i_0] [i_0] [i_1]) ? (arr_1 [i_0 + 2]) : (arr_16 [i_0] [i_0] [i_0] [i_1] [i_1] [8]))) : ((max((arr_2 [i_0 + 2]), var_16)))))) ? 311460298 : (((-17791 + 2147483647) >> (((max((arr_14 [1] [i_1] [15] [15]), (arr_15 [i_0 + 3] [i_0] [i_0] [i_1]))) - 956322989))))));
                arr_20 [3] = 311460297;
                arr_21 [i_0] [i_1] = (17811 <= var_16);
            }
        }
    }
    var_20 = max(((((min(-363443252, 28888))) ? 0 : 1)), ((~((var_7 ? var_11 : 28888)))));
    #pragma endscop
}
