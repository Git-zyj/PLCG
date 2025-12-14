/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (arr_4 [i_0] [i_1] [i_0]);
                var_20 += var_14;
                var_21 = ((((arr_4 [i_0] [1] [i_1]) ? (arr_4 [i_1] [i_1] [i_0]) : (arr_4 [i_0] [i_1] [i_1]))));
                arr_6 [i_0] = (arr_3 [1] [8]);
                arr_7 [i_0] [i_1] [i_1] = 54;
            }
        }
    }
    var_22 ^= (((((((min(var_3, 2939281287323415909))) ? var_17 : var_14))) ? ((-1977555280 ? 15507462786386135706 : var_14)) : var_11));
    #pragma endscop
}
