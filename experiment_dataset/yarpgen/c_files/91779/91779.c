/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = (var_11 ? var_11 : (((((((arr_3 [i_0]) + 9223372036854775807)) >> var_9)) << (var_11 - 65))));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_13 [i_3] [i_1] [i_4] [i_1 - 1] [i_4] = (max(((-4255266799207190156 ? 4255266799207190136 : 8360877914215431432)), 3619526188185575581));
                            var_16 = (min(var_16, var_10));
                        }
                    }
                }
            }
            var_17 = (min((max(-3619526188185575582, -3619526188185575582)), 791307897578190703));
            arr_14 [i_0] [i_0] &= ((((arr_2 [i_1 + 3]) ? (min(var_2, -4255266799207190156)) : (!var_12))));
            var_18 |= (var_10 ? ((((-4255266799207190178 <= (arr_11 [i_0]))))) : (max((((!(arr_3 [i_0])))), var_11)));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_17 [i_5] [i_5] = -8574201015260445603;
            var_19 ^= ((((max(-4255266799207190178, 4255266799207190177))) == var_0));
            var_20 ^= var_15;
        }
        var_21 = var_1;
    }
    var_22 = (min(var_22, (((-(max((((var_13 ? var_15 : var_3))), var_11)))))));
    var_23 = max((max(10, -3619526188185575574)), var_11);
    #pragma endscop
}
