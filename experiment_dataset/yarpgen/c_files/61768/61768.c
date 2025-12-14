/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = 1;
                    var_19 = (max(var_19, var_6));
                    var_20 = (-1697179511 | 1);
                    var_21 = ((((((~(arr_5 [i_1]))) ^ (arr_1 [i_0] [i_1]))) + (arr_6 [i_0] [i_1] [i_2])));
                    arr_8 [i_1] [i_0] [i_2] = ((arr_1 [i_0] [i_1]) || 8370063752109111715);
                }
            }
        }
    }
    var_22 = (max(((min((var_13 < -7356), (var_15 > var_8)))), var_16));
    #pragma endscop
}
