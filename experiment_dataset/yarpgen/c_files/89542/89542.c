/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 104;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 1] = (max((max(var_19, var_5)), (((8 ? -31250 : -31250)))));
                    arr_8 [i_0 - 2] [i_0 - 2] = (max(var_13, (0 | -8830537602623077373)));
                }
            }
        }
    }
    var_21 = (-127 - 1);
    var_22 = (((-39 + 2147483647) << (48899 - 48899)));
    #pragma endscop
}
