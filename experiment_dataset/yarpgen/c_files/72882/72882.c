/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = ((var_5 == (((~var_5) ? (var_0 ^ var_1) : 1))));
                arr_6 [i_1] [1] [i_1] = ((1 ? 1 : (min(var_2, -712938057))));
                var_17 += (min(33472, (min(var_2, var_11))));
                var_18 = 1;
                var_19 = (((712938058 | 712938044) * (min(11917854961241513478, var_9))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_20 -= (268157845044818493 * 32466);
                        arr_19 [1] [i_3] [i_4] = ((-32466 ? 495929781 : (arr_0 [i_2] [i_3 - 1])));
                    }
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        arr_23 [i_3] [1] = ((+(min((arr_20 [i_2] [i_2] [i_4] [i_6 - 1] [i_6]), var_11))));
                        var_21 += var_0;
                    }
                    var_22 = (arr_21 [i_2] [i_4] [i_4] [i_4] [i_4] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
