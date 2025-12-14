/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [16] [i_0] [i_0] [i_0] = ((!((min(((~(arr_8 [i_0] [i_1] [13] [i_1]))), ((var_3 ? var_11 : (arr_1 [i_0] [i_0]))))))));
                    var_17 = (max(var_17, var_11));
                }
            }
        }
    }
    var_18 *= (!8448797102071778239);
    #pragma endscop
}
