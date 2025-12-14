/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [15] [i_0] = (arr_4 [i_0] [5]);
                            arr_13 [i_0] [i_1] [9] [9] = var_3;
                            var_13 = (1993792766 ? 1 : 15073503617455011380);
                            arr_14 [i_0] [4] [i_2] [i_3] = (min(36872, 68719476735));
                        }
                    }
                }
                var_14 = ((~((~((1073741696 ? var_7 : -14863))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1 + 3] [i_4] [i_4] [1] [i_1 + 3] [16] = min((min(15073503617455011380, (arr_6 [i_0] [i_1] [i_4] [i_5]))), 11849);
                                var_15 = ((+((var_5 ? (arr_9 [i_0] [i_1] [i_4] [i_5 - 1]) : (arr_6 [i_0] [i_1 - 4] [i_4] [i_5 + 1])))));
                                var_16 *= ((!(((-(min(var_0, 15073503617455011380)))))));
                            }
                        }
                    }
                }
                var_17 = ((-((32752 * (arr_6 [i_0] [i_0] [i_0] [13])))));
                arr_23 [i_1] = var_1;
            }
        }
    }
    var_18 = -1;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 12;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_35 [12] [i_9] [i_7] [i_8] [i_7] = ((!(((+(((arr_32 [i_7] [3] [i_7] [i_7] [i_7] [i_7]) % 15073503617455011380)))))));
                            arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] = var_3;
                            var_19 = (((((max(-9088603566217986874, var_7)))) == (arr_2 [i_10])));
                        }
                    }
                }
                var_20 = (max((arr_21 [i_8 - 4] [i_8 - 3] [i_8] [4] [7] [i_7]), ((15073503617455011366 ? (max(3373240456254540259, 56)) : (~var_2)))));
            }
        }
    }
    #pragma endscop
}
