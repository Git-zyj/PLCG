/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_5 ? var_7 : 0)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((max((((!(arr_6 [i_0 + 1] [i_0 + 1] [i_1] [i_2])))), (((((arr_4 [i_0] [i_2]) <= 93)) ? (14 > 0) : (44 || 127))))))));
                    var_15 = ((((~(arr_7 [i_0] [i_1] [i_2]))) == (arr_4 [i_0 - 1] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
