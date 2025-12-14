/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((~0) + 2147483647)) >> 28));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, 7826374545443332247));
                    var_16 = (~32);
                    var_17 = var_12;
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 23;i_3 += 1)
    {
        var_18 = ((!((((-1 >= 2566969525) & (((-57 + 2147483647) << (var_12 - 1105257270))))))));
        arr_12 [i_3 - 3] = ((!((min((1 ^ 2486991557), (((10640 ? 127 : 226))))))));
        arr_13 [i_3] = (((~-6070477481303696600) ? ((((!((((arr_10 [i_3]) ? 23655 : (arr_11 [i_3] [i_3])))))))) : (~2379970197861541590)));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (arr_9 [i_4] [i_4]);
        var_19 ^= (var_8 % var_2);
    }
    #pragma endscop
}
