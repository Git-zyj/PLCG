/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_7 ? 0 : (~-2666)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = ((!((min(-2639, 2668)))));
                            var_16 = ((var_9 * (17044689569874646300 <= 16)));
                        }
                    }
                }
                var_17 -= var_1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_18 = var_11;
                    var_19 = ((~((-14112227869845910646 ? (arr_17 [i_5] [4] [i_5] [i_5]) : (((arr_15 [i_5]) ? 64 : var_3))))));
                    var_20 = (max(var_20, (((1 ? (!var_8) : (17044689569874646291 % 65535))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            {
                var_21 = ((-((var_4 ? var_9 : (arr_13 [i_7])))));
                var_22 = (((arr_11 [i_7] [i_7]) ? (20008 - var_2) : ((161 ? (arr_11 [i_7] [1]) : (arr_11 [i_7] [i_8 - 1])))));
            }
        }
    }
    var_23 |= 24099;
    #pragma endscop
}
