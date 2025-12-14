/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_7 ^ (~var_6)))) ? var_3 : (min(-1366122686847734617, var_15))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(((((((0 ? var_11 : 2147483647))) > (max(2806045719853886539, 234881024))))), (((arr_3 [i_0 + 1] [i_0 + 2] [i_1 + 1]) ? 0 : (34909494181888 * var_16)))));
                arr_7 [i_0] = (min((min((arr_5 [i_0]), (arr_5 [i_0]))), ((max(var_3, -2566140515548631967)))));
            }
        }
    }
    #pragma endscop
}
