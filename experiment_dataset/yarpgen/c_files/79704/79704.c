/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_0));
    var_15 = ((748829405 & ((((!(~var_11)))))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_16 |= ((-(((-7097 * (arr_1 [i_0 + 1] [10]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [17] [i_2] [4] = (arr_6 [i_2] [i_1] [i_1] [i_0]);
                    arr_9 [6] [1] [8] [6] &= (var_13 + var_5);
                }
            }
        }
        var_17 = 0;
        arr_10 [i_0 - 2] = 8885112492136786328;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_20 [16] [i_4 + 2] [i_3] [16] &= ((+(((((arr_7 [15]) / var_7)) ^ 1))));
                        arr_21 [i_3] [14] [i_4 - 1] = var_0;
                        var_18 = ((!(arr_11 [i_5] [i_0] [i_0])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
