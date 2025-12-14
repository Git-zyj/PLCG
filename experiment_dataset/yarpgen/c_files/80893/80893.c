/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((((!((max(201, (arr_0 [i_2 + 1] [i_0])))))) && 54));
                    var_12 -= max((min(162, 119)), (((((-2229 ? var_10 : 137)) > (110 + 133)))));
                }
            }
        }
    }
    #pragma endscop
}
