/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (((arr_3 [i_0]) ? (arr_4 [16] [16] [i_2]) : ((((arr_5 [i_0]) * (arr_3 [i_0]))))));
                    var_18 = (max(var_18, 1838567601));
                }
            }
        }
    }
    var_19 = (min(var_19, var_3));
    #pragma endscop
}
