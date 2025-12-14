/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(88, (max(-1953127726, 1))));
    var_19 = (max(0, -74));
    var_20 = (~(min(-1, var_7)));
    var_21 &= min(1, ((-(min(11, 65535)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 -= ((min((min((arr_0 [18] [i_2]), (arr_3 [i_0] [i_0]))), -var_1)));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((min(((max(var_14, var_16))), (max(11954, (arr_4 [i_1]))))));
                    var_23 = (min(((min((min(-1, 59206)), 0))), (~6837727178023007981)));
                    arr_9 [i_1] [i_1] = ((max(var_15, (arr_0 [i_0] [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
