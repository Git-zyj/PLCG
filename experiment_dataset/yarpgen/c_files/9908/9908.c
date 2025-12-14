/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, 26202));
                    arr_8 [i_1] [i_0] [i_1] [i_0] = 36660;
                    arr_9 [i_0] [i_1] [i_2] = (-114 && -3607481724678800066);

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        var_11 -= (9223372036854775807 < 26194);
                        var_12 = (-2742103255522105703 || 26194);
                        var_13 = (9223372036854775807 * (((((-9223372036854775807 - 1) < 42166)))));
                        arr_13 [i_0] [i_0] = ((-2137269341 >= (17539 < 9223372036854775807)));
                    }
                    for (int i_4 = 3; i_4 < 8;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 7;i_5 += 1)
                        {
                            arr_19 [i_5] [i_5] [i_5] [i_1 - 1] |= ((((1 + (-9223372036854775807 - 1))) ^ 1));
                            var_14 = -411156264;
                        }
                        arr_20 [i_0] [i_4] [i_2] [i_1] [i_1] [i_0] = (-17 & 6);
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_15 = -1619794314;
                        arr_23 [i_6] [i_6] [i_6] [i_0] = (-9223372036854775807 - 1);
                        arr_24 [i_0] [i_1] [i_2] [i_0] = 42166;
                    }

                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        var_16 |= ((49 > (1 <= 16331)));
                        var_17 &= (((-9223372036854775807 - 1) <= 9223372036854775800));
                    }
                }
            }
        }
        var_18 = -26195;
        var_19 &= 1116879276413048216;
        var_20 |= (10 + 50);
        var_21 = 0;
    }
    var_22 ^= (((-9223372036854775807 - 1) >= 30716));
    #pragma endscop
}
