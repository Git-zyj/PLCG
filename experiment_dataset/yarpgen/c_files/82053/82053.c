/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = var_9;
    var_22 = (var_6 - -var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_23 = (arr_3 [i_1]);
                    var_24 = (((arr_0 [i_2 - 1] [i_1]) * (((!(arr_2 [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
