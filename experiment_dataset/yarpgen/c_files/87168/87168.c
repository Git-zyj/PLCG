/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (min((min(-7180246122661796257, (arr_0 [i_0 - 1] [i_0 - 3]))), (((((var_12 && (arr_3 [i_0]))))))));
                    arr_8 [i_2] [i_1] [i_0] = (~var_11);
                }
            }
        }
    }
    var_17 = (((((1 ? var_9 : 54093)) != 32767)));
    var_18 = (max(var_8, ((1 ? 103 : -6))));
    #pragma endscop
}
