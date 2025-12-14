/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = (min(var_11, 65535));
    var_20 = -71;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = (12 - 19612);
                    var_22 = (max(var_22, ((((!var_14) * (((((arr_7 [i_2]) ? var_14 : 45939)) & (arr_0 [i_0]))))))));
                    var_23 = 17;
                    arr_9 [i_2] [i_1] [i_0] [i_0] = (arr_2 [9] [i_1]);
                    var_24 *= ((!53339) < (!933479163));
                }
            }
        }
    }
    #pragma endscop
}
