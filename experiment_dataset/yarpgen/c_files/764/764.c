/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (!9492943790964679691);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_1] [i_1] |= (var_12 ^ var_8);
            var_16 = var_9;
            var_17 = ((-(arr_3 [i_0] [i_1])));
        }
        var_18 = ((((65535 == (arr_1 [6]))) ? (0 <= -120) : (((arr_3 [22] [i_0]) - var_10))));
    }
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2 - 4] = (max(-12294205527003966198, ((max(-67, 8)))));
        arr_11 [i_2 + 1] [i_2] = (max((arr_7 [i_2 + 2]), (arr_0 [i_2])));
        var_19 = var_5;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    {
                        var_20 ^= (arr_20 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1]);
                        arr_23 [20] = ((~(var_14 >= 2038349038)));
                    }
                }
            }
        }
        arr_24 [i_3] = var_13;
        var_21 = ((var_14 | (~6283750867011859359)));
    }
    #pragma endscop
}
