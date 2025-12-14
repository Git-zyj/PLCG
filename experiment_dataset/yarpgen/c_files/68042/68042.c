/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((~(arr_6 [i_0] [i_1])));
                arr_8 [i_1] [i_0] [i_0] = (max((arr_6 [i_0] [i_0 + 1]), (arr_6 [i_1] [i_1])));
                var_13 = (max(var_13, -7745789900835441571));
                var_14 = (max(var_14, (((((max(((max(-28, 27))), (((arr_5 [i_0] [i_0]) ? (arr_6 [i_0] [i_1]) : (arr_6 [i_0] [i_0])))))) ? ((min((arr_0 [i_0 - 1]), (!27)))) : ((((((27 ? (arr_2 [i_0]) : (arr_1 [i_1])))) && ((min(-33, 27)))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] = (((((arr_18 [i_6] [i_6] [i_5] [i_5 - 1] [i_6] [i_5 - 1]) == (arr_18 [i_5] [i_6] [i_5] [i_5] [i_6] [i_5 - 1]))) ? (arr_9 [i_2] [i_2]) : (((15 && 15) * (arr_18 [i_5] [i_6] [i_5 + 2] [i_5] [i_5 + 4] [i_5 + 3])))));
                                arr_20 [i_6] [i_5 - 1] [i_4] [i_5] [i_6] [i_6] = 27;
                                arr_21 [i_2] [i_6] = 43;
                                var_15 = (max(var_15, (((-28 <= ((((min(32, (arr_16 [i_4] [i_3] [i_2])))) ? (arr_13 [i_2]) : ((15 ? (arr_13 [i_3]) : (arr_16 [i_3] [i_4] [i_5]))))))))));
                                arr_22 [i_2] [i_3] [i_3] [i_4] [i_5] [i_6] [i_6] = 27;
                            }
                        }
                    }
                }
                arr_23 [i_2] [i_3] = ((3 ? (((-28 ? (arr_9 [i_2] [i_3]) : (arr_9 [i_2] [i_3])))) : ((((((arr_17 [i_2]) ? (arr_17 [i_2]) : (arr_17 [i_2])))) ? (((max(-16, 15)))) : (arr_10 [i_2])))));
                arr_24 [i_2] [i_2] [i_2] = (((-28 >= 19) ? -20 : 9));
            }
        }
    }
    #pragma endscop
}
