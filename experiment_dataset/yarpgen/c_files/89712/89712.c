/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (2030261098 && 12920);
                    var_20 = 38;
                    arr_11 [i_0] = (~57344);
                }
            }
        }
    }
    var_21 = (min(var_4, var_14));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_21 [i_3] = 2030261110;
                    var_22 = ((7 ? 52627 : -27));
                }
            }
        }
    }
    #pragma endscop
}
