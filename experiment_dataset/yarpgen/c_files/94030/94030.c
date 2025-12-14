/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = -70;
                    arr_9 [i_1] [i_1 + 2] [i_2] [i_2] = (((arr_7 [i_1]) ? ((-591607082 ? (arr_4 [i_1] [i_1 + 2]) : -4294967284)) : -71));
                    var_21 *= 5900552651347979523;
                    arr_10 [i_1] = (i_1 % 2 == zero) ? ((min((arr_4 [i_1] [i_1]), (((((arr_4 [i_1] [i_1 - 1]) + 2147483647)) << (((((arr_4 [i_1] [i_1 - 1]) + 2888)) - 15))))))) : ((min((arr_4 [i_1] [i_1]), (((((((arr_4 [i_1] [i_1 - 1]) - 2147483647)) + 2147483647)) << (((((((arr_4 [i_1] [i_1 - 1]) + 2888)) - 15)) - 20204)))))));
                }
            }
        }
    }
    #pragma endscop
}
