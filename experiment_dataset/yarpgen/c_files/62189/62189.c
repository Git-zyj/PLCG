/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_7 * 0);
    var_19 = (min(((min(379723664603443614, 50373))), (1683479543857644148 * 17406469839690505920)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((~224) < -var_13));
        var_20 ^= ((-8847000501271073844 ? 523384114 : 1));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    {
                        var_21 += (min((((arr_3 [i_4 - 2]) / ((var_16 ? 524287 : var_11)))), ((((max(0, -36)))))));
                        var_22 = (((arr_7 [i_3]) ? 1040274234019045685 : (arr_11 [i_4] [i_3 - 2] [i_1] [2] [i_1])));
                        var_23 = (((((1993386125 ? (max(63453114629939223, 8660476157333476626)) : (~210)))) ? (((var_17 ? (arr_5 [i_3 + 2] [i_3 + 2] [i_4 - 2]) : (((-104 + 2147483647) << (var_10 - 3835754028846952958)))))) : (((arr_10 [i_3] [i_3 - 1] [i_4] [i_4] [i_4]) ? (arr_10 [i_1] [i_3 - 1] [i_4] [i_4] [i_4]) : (arr_11 [i_3] [i_3 - 1] [i_4] [i_4] [7])))));
                        arr_12 [i_3] [4] [i_3] [i_4 + 1] = ((((-1652115405 / (arr_10 [i_3 - 1] [i_3 + 1] [6] [i_4 + 1] [i_4 - 2]))) % ((var_8 ? 216024411677828553 : 32))));
                        var_24 = (arr_6 [i_4 - 1]);
                    }
                }
            }
        }
        arr_13 [i_1] &= (min(var_3, 32055));
        arr_14 [i_1] = ((((min((arr_9 [6] [i_1]), (216024411677828536 | var_9)))) ? (arr_10 [i_1] [i_1] [5] [i_1] [i_1]) : (arr_0 [3])));
    }
    #pragma endscop
}
