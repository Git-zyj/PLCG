/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 &= (((arr_3 [i_1] [i_1] [i_1]) < var_9));
                var_15 = 754892505;
            }
        }
    }
    var_16 = ((51494 + (((((var_6 ? var_0 : 14707474130873161438))) ? var_12 : (51466 != var_11)))));
    var_17 = (max(var_17, (((((var_1 ? (127 == 14707474130873161453) : (var_2 || 51493))) >> (var_7 - 7193445564431762629))))));
    var_18 &= var_6;
    #pragma endscop
}
