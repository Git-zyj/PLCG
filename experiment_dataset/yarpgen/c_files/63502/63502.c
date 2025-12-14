/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (((-(max(var_0, 4109163289)))));
                    var_16 += ((((((max(3122, (arr_6 [i_0] [i_1] [i_2 - 1] [i_0])))))) % ((((min(188, 18446744073709551615))) ? ((139 ? 14542 : -1566189854899170003)) : (581917021 <= 103)))));
                }
            }
        }
    }
    var_17 = (max(var_10, (((((max(var_8, var_9))) > ((min(var_11, -32752))))))));
    var_18 = ((var_12 ? ((max(176, 48776))) : ((var_2 ? var_8 : (max(var_11, var_4))))));
    var_19 = (!var_13);
    #pragma endscop
}
