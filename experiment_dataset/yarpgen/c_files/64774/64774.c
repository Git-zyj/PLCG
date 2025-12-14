/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = (-var_1 ? var_12 : (((~(arr_3 [i_0] [i_0 - 3])))));
                            arr_9 [13] [i_0] [i_0] = 0;
                            arr_10 [i_0] [i_1] = (min((arr_8 [i_1] [i_1] [i_2] [i_3 - 1] [i_3] [i_3]), (((~-632907849958192323) ? (arr_4 [i_0] [i_2] [i_0]) : 16383))));
                            arr_11 [i_0] [8] [i_0] [i_0] &= (((((((min(100, 1))) ? (arr_4 [i_0] [14] [i_2]) : (arr_1 [i_0 + 1])))) ? (arr_5 [i_1] [i_1]) : (arr_3 [6] [i_3])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_14 = arr_15 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0];
                                arr_19 [i_6] [i_5] [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_8 [i_6 - 1] [i_6 - 2] [i_6] [i_6] [i_6] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_32 [i_8] [i_10 + 1] [i_9] [i_8] = (min(16375, -18397));
                                var_15 = (max((16383 > -1524), ((var_12 ? 100 : 87))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_16 = (1713907011 - 625762638392106401);
                                var_17 *= min(-524272, (arr_40 [i_13 + 1] [i_13] [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13] [i_13]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
