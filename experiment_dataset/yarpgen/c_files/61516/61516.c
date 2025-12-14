/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((max(106289950, -var_5)))));
    var_20 = var_14;
    var_21 = var_1;
    var_22 = (max(var_22, (((var_14 ? 106289950 : var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] |= (((arr_1 [i_1]) == 8));
                    arr_11 [i_0] [i_0] [i_0] = -106289951;
                }
            }
        }
    }
    #pragma endscop
}
