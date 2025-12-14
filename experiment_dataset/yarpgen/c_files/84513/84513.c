/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((148 ? 12153766580052519627 : 11195043227685224469));
    var_11 = var_9;
    var_12 = ((var_4 ? var_7 : ((((min(2739960435792708390, 1748480533))) ? ((3526808317 ? 1745861398 : 18)) : (((2 ? 16603671 : -50)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 += ((1473545569433630744 ? (arr_2 [10] [i_1] [i_1]) : var_1));
                arr_4 [i_0] [i_0] [i_0] = (((((((((arr_2 [i_0] [i_1] [i_1 - 1]) - -606178494))) ? 142 : 1153661859))) + ((min(11195043227685224469, 10502893398162822729)))));
            }
        }
    }
    #pragma endscop
}
