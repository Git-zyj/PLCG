/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_11 [i_1 + 1] = 0;
                    var_15 = (max(var_15, (((2383333003198323679 ? ((5855748450646903413 ? 67 : -2383333003198323669)) : (arr_1 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_16 = var_12;
    var_17 = (min((max(((min((-127 - 1), -16384))), (768076916928445219 ^ 2459))), ((((2296835809958952960 ? var_11 : -1))))));
    var_18 = (min(11026653126359176789, 9));
    #pragma endscop
}
