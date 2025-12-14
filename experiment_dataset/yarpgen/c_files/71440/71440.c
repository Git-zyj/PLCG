/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (max(var_17, 1420954672));
        arr_3 [i_0] = ((+(((var_13 || var_3) | (((arr_2 [i_0]) ? var_10 : (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 = (max(var_18, (((((((min(1420954668, (arr_2 [i_1])) + 9223372036854775807)) << 2874012629)))))));
        var_19 -= var_5;
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        var_20 ^= (arr_6 [i_2]);
        var_21 = (max(var_21, (!var_11)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_22 = (max(var_22, (((((min(127, (arr_7 [i_2 + 2] [i_3])))) << ((((-(arr_9 [12] [i_2]))) - 23)))))));
                    var_23 *= ((var_7 ? var_4 : (((arr_0 [10]) ? var_15 : 27545))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                arr_21 [i_5] = (17788853463540518167 & 18924);
                var_24 = ((5189571386915956607 ? 2479737326 : 0));
            }
        }
    }
    #pragma endscop
}
