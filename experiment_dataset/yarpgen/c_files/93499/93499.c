/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (max(((max((min((arr_0 [i_0] [i_1]), var_3)), ((min(var_6, var_8)))))), (max(17592186044415, -91301902))));
                var_13 -= (max((min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_0]))), ((min(-27590, (arr_4 [i_1]))))));
                var_14 = (min(((min((arr_2 [i_1]), (arr_4 [i_1])))), (max(((max((arr_2 [i_1]), var_11))), (max(-5674074736210777764, var_2))))));
            }
        }
    }
    var_15 = max(((min(1023, var_11))), var_4);
    #pragma endscop
}
