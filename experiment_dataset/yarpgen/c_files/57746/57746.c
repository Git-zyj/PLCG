/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, ((((((((((arr_1 [i_0]) < 58))) * (~-200114498)))) ? (((arr_0 [i_0]) + (2048 % 2147483647))) : (((200114498 / (arr_1 [i_0 + 1])))))))));
        arr_3 [i_0] [i_0] = (((-2147483647 - 1) * (arr_0 [i_0 - 3])));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_19 = (min(var_19, (0 && -109)));
                        arr_14 [i_1] [1] [i_1] [i_3] [i_4] [i_1] = (2147483647 == var_13);
                    }
                    var_20 ^= 576581036;
                }
            }
        }
    }
    #pragma endscop
}
