/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = (((((var_10 ? var_3 : (var_4 || var_4)))) ? var_6 : (min(var_1, var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = (~var_0);
                    arr_8 [i_2 - 1] [i_1] [i_0] [i_0] = (-127 - 1);
                    var_14 *= (((max((arr_2 [i_2 + 2] [i_2] [i_2 - 1]), var_2)) <= (-1 * 11364454003616286041)));
                    arr_9 [i_0] [i_0] [i_0] = var_10;
                    var_15 = (arr_3 [i_2 + 2] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
