/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 126;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 *= var_8;
                    arr_6 [i_0] [i_1] [i_1] [i_2] = (max((~30719), (var_3 ^ var_8)));
                    var_20 -= (max(((max(-31, (arr_5 [i_1] [8])))), -3));
                    arr_7 [i_1] = (!var_10);
                    var_21 *= ((53 ? -121 : -1647529221));
                }
            }
        }
    }
    #pragma endscop
}
