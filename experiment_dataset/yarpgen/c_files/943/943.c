/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_10 = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 -= ((((-(arr_2 [2]))) << ((((arr_2 [4]) >= var_7)))));
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((-(max(var_5, var_2))));
                }
            }
        }
    }
    var_12 = var_8;
    var_13 = ((((max(617040844, var_9))) - var_8));
    #pragma endscop
}
