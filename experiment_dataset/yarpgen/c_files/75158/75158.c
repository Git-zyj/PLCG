/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [16] [16] [i_1] [i_4] = 0;
                                var_14 = (min(var_14, 18446744073709551615));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_1] [17] [i_1] [i_0 - 1] = 37;
                                var_15 = 254;
                                var_16 *= 1;
                                var_17 = 255;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_33 [i_10] [i_7] [i_8] [i_7] = 255;
                            var_18 = -1804207995;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_19 |= 1;
                            var_20 = 240;
                            arr_39 [i_11] [i_7 + 1] [i_7 - 1] [7] = (-32767 - 1);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_21 = 0;
                            arr_44 [i_13] = 2;
                            arr_45 [i_8] [i_13] |= 253;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
