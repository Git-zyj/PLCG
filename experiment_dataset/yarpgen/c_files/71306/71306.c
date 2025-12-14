/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (((var_7 ? var_5 : (min(716655173, 84)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (min((714919068 * var_8), (max(3580048228, 196))));
                arr_6 [i_0] [i_0] [8] = ((((max(var_0, var_1))) ^ (~24511)));
                var_12 = (max(var_12, (((207 | ((var_7 ? var_2 : var_8)))))));
                arr_7 [i_0] = (((min(((var_8 ? var_1 : var_2)), var_6)) >= var_5));
            }
        }
    }
    var_13 = var_0;
    #pragma endscop
}
