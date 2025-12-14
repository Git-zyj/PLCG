/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [0] [0] [i_0] &= max(((((max(1, var_1))) || (arr_5 [i_0] [i_1]))), var_2);
                arr_7 [i_0] [i_0] [i_0] = ((arr_2 [i_0] [i_0]) ? var_2 : (arr_2 [i_0] [i_0]));
            }
        }
    }
    var_14 = var_4;
    #pragma endscop
}
