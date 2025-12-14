/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (((arr_8 [i_2] [i_1] [i_0]) >= ((min(((((arr_7 [i_0] [i_0] [i_2]) <= (arr_2 [i_0])))), (((arr_4 [i_0] [i_1]) | var_4)))))));
                    var_17 = (arr_5 [i_2 - 2] [i_1] [i_0]);
                    var_18 += (!30489);
                }
            }
        }
    }
    var_19 = (min(var_19, var_15));
    #pragma endscop
}
