/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= 3675260893;
    var_20 = (max(((-((var_11 ? 0 : 63977)))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((7 ? var_7 : ((var_5 + (arr_2 [16] [3] [11]))))) != (((59 & var_3) ? 293007453 : (arr_0 [i_0] [i_1])))));
                var_21 = (min(var_21, (((((((arr_4 [i_1] [5] [i_1]) ? (arr_1 [i_1]) : (arr_4 [13] [i_1] [i_1])))) ? (max((arr_1 [i_0]), var_13)) : ((var_6 ? (arr_1 [i_1]) : var_17)))))));
                var_22 = ((0 ? (46 + -293007454) : (((var_9 ? -293007454 : (arr_3 [i_0] [5] [10]))))));
                var_23 = arr_3 [i_0] [i_0] [i_0];
                arr_7 [i_0] [3] [18] = var_12;
            }
        }
    }
    #pragma endscop
}
