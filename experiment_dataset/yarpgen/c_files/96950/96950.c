/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (2473786695 ^ 3670830458757591221);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = 1628911947;
                arr_4 [i_0] [i_1] [i_1] = var_4;
                arr_5 [i_0] [i_0] [i_0] = (min(((((arr_2 [i_1 + 2] [i_1 + 1] [i_1 + 2]) ? var_6 : var_8))), (((1969480322208275554 / 1) * var_8))));
            }
        }
    }
    #pragma endscop
}
