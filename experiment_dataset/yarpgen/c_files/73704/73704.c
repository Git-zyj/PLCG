/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(-var_4, var_3)) & var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 + 2] = var_9;
                var_12 = (((6283347242719064705 * ((((1 || (arr_5 [i_1 - 2]))))))));
            }
        }
    }
    #pragma endscop
}
