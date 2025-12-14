/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((+(min((arr_1 [i_0]), (arr_1 [i_0]))))) & ((((max((arr_1 [i_0]), 122)))))));
        arr_3 [i_0] = ((+(max((arr_1 [i_0]), (arr_1 [i_0])))));
        var_11 = (min(((min((arr_0 [i_0]), 50))), (var_8 & var_0)));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_12 = (max(((max(((max(1, (arr_0 [3])))), (-109 & 36627)))), (((10206350605773414809 & (arr_5 [i_1]))))));
        arr_8 [i_1 + 1] [i_1] = (max((((245 & (arr_1 [i_1 + 1])))), (var_5 & var_8)));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_13 = (max((arr_12 [i_2]), (max((max(var_5, 1)), var_9))));
                arr_13 [i_2] = ((max(-123, var_10)) & (~var_2));
            }
        }
    }
    #pragma endscop
}
