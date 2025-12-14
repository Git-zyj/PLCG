/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 *= ((min(((var_4 ? 14696825078671451170 : (arr_3 [i_0] [i_1]))), var_10)));
                    var_12 = ((16533 % (((((1822424942868239055 ? var_0 : (arr_2 [12] [i_1])))) ? 69 : ((var_0 << (var_2 - 14449376422607590902)))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] = ((-(arr_9 [7])));
        var_13 = (min(var_13, (((max((arr_4 [5] [5] [i_3]), ((min(1822424942868239055, 131)))))))));
    }
    #pragma endscop
}
