/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((~var_9), (var_3 * -16)));
    var_14 = ((var_6 ^ ((((!(((2759092138 ? var_2 : 5013711644949013484)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (((arr_8 [i_0] [i_1] [i_1 + 2]) ? 9361578864829395417 : (((255 ? var_3 : -19)))));
                    var_16 = ((+(max((arr_8 [i_0] [i_1 + 3] [i_2]), var_7))));
                    arr_9 [i_0] [7] [i_1] [i_2] = (min((arr_0 [i_2]), (max(1, var_10))));
                    var_17 = (min(var_17, 26041));
                    var_18 = (max(var_18, ((max((max((((arr_4 [i_1]) ? 1970260109420300832 : var_9)), 12930)), 0)))));
                }
            }
        }
    }
    var_19 |= ((var_6 && ((max(8118476706884259076, ((var_7 ? var_7 : 1)))))));
    #pragma endscop
}
