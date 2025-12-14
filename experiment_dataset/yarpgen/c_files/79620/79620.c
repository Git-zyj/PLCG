/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (max((((arr_3 [i_1] [i_1 - 1] [i_1]) ? var_4 : (arr_6 [i_1] [i_1 - 1]))), (((arr_6 [i_1] [i_1 - 4]) ? (arr_4 [i_1] [i_1 - 1] [i_1]) : (arr_6 [i_1] [i_1 - 1])))));
                var_13 = (((((~(-2438504747463883922 | var_6)))) ? (var_10 == 2982811024243581576) : (max((max(var_5, (arr_3 [i_0] [10] [i_0]))), (~2438504747463883921)))));
                var_14 *= ((var_9 >= ((var_5 * (arr_1 [i_1 + 1])))));
                var_15 = (max((var_9 | 2438504747463883900), (-2438504747463883939 & -2438504747463883926)));
            }
        }
    }
    #pragma endscop
}
