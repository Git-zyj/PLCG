/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 + 1] [i_0 + 1] = 0;
                var_13 += (((arr_0 [i_0 - 1] [i_0 + 1]) && ((((arr_0 [i_0 - 1] [i_0 + 1]) / 4294967295)))));
                var_14 = (min(var_14, (((~(max(4294967285, 30)))))));
            }
        }
    }
    var_15 = var_5;
    var_16 = ((-21176 ? (((!6141) & var_2)) : 0));
    #pragma endscop
}
