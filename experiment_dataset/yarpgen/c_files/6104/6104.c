/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(0, -270163624));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((!(arr_3 [i_0 + 1] [i_0]))) && (arr_3 [i_0 - 1] [i_0])));
                arr_7 [i_0] [i_0] = arr_3 [i_0] [i_1];
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
