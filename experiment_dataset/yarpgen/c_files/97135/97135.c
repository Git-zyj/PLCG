/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (max((max((min((arr_5 [i_1] [10]), var_14)), ((((arr_2 [i_0]) | var_1))))), ((min(var_8, (arr_4 [19] [i_1]))))));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_22 = (max(var_22, -5));
                    var_23 = arr_6 [i_0] [i_0] [i_0] [i_2];
                }
            }
        }
    }
    #pragma endscop
}
