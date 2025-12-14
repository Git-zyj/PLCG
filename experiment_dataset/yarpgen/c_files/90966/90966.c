/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_10 / var_5);
    var_13 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = ((((arr_2 [13] [i_0 - 1]) == (arr_4 [5] [i_0 + 2] [i_2] [i_2]))));
                    arr_6 [i_2] = var_11;
                    var_15 = (min(var_15, (((var_4 >= (arr_2 [i_0 - 2] [i_0 - 1]))))));
                }
            }
        }
    }
    var_16 = (max(var_1, ((((min(53710, var_0))) ? ((max(8600, 53710))) : var_5))));
    #pragma endscop
}
