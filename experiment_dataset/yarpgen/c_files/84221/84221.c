/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (!-61);
                    arr_7 [i_0] [i_0] = max((max((arr_4 [i_0]), ((max(var_7, 42))))), (arr_1 [i_0] [i_1]));
                }
            }
        }
    }
    var_14 = ((((((~60) ? ((1 ? 12646 : 16777215)) : (((var_1 + 2147483647) >> (-94 + 110)))))) ? 872651461 : 12641));
    #pragma endscop
}
