/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_1] = 1759977938;
                    var_15 = (((max(1, (var_12 || var_10))) || ((!(arr_2 [i_1 - 2])))));
                    var_16 = (((0 * -28) < var_6));
                    var_17 = -28;
                }
            }
        }
    }
    var_18 |= var_9;
    var_19 = var_10;
    #pragma endscop
}
