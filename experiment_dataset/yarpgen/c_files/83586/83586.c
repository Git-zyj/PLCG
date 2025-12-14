/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((max((arr_3 [4] [4]), (arr_1 [i_1] [i_1]))) >> (((0 ^ -1647413496295789376) + 1647413496295789436)))) ^ ((((((arr_3 [i_0] [i_1]) ^ (arr_3 [i_0] [i_0]))))))));
                var_10 += (max(((1255093651 / (2004 - 120))), 4006201644));
            }
        }
    }
    var_11 = ((var_9 == ((((~12280) && var_8)))));
    #pragma endscop
}
