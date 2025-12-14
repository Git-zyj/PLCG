/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((var_14 | var_2), var_4);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = -65535;
                    var_17 ^= (((((7 / -1) * (arr_7 [i_0] [4] [i_0] [14]))) - ((((arr_1 [i_1]) / (arr_2 [i_2] [i_2]))))));
                    var_18 = (arr_4 [i_0]);
                    var_19 = (max((max(5879958211100720734, (min((arr_3 [i_0]), (arr_5 [i_0]))))), (arr_4 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
