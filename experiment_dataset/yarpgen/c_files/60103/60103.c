/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_3, ((((var_6 ? var_1 : var_11)) << (((var_9 & var_6) - 63))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [0] [i_1] [i_0] = (((arr_2 [i_0 + 3]) != ((-(arr_2 [i_0 + 3])))));
                arr_7 [i_0] [i_0] = (((!1) << ((((max(52, 49))) - 28))));
            }
        }
    }
    #pragma endscop
}
