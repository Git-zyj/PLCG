/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-2239660933275680202 ? 17108389271151553044 : 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [9] [2] |= -var_4;

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] = var_3;
            arr_8 [i_0] [7] = var_13;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_16 [i_0] [i_2] [10] = (536862720 ? (arr_14 [0] [0] [i_3 - 2] [i_3] [i_1 - 1] [i_0]) : 16967434777978652815);
                        arr_17 [4] [i_1 + 1] [i_2] [i_1 + 1] = ((!(arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_3 + 3] [i_3 + 3] [i_3 - 1])));
                        arr_18 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_2] [i_3] = (arr_5 [i_0] [i_1 - 2] [i_0]);
                        var_20 ^= var_1;
                    }
                }
            }
            arr_19 [i_0] [i_0] [i_1 - 2] = var_2;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_24 [i_0] [i_0] = (((arr_23 [i_0] [i_0] [i_4]) ? (arr_23 [i_0] [i_0] [i_4]) : (arr_23 [i_0] [i_4] [1])));
            arr_25 [i_4] = (~44354);
            arr_26 [i_0] [i_0] [i_4] = ((var_8 ? 626185906 : (arr_15 [i_0] [i_0] [i_0] [i_4] [i_4])));
        }
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            arr_29 [i_5 - 1] = var_7;
            var_21 = (max(var_21, ((((80 ? 0 : 0))))));
        }
    }
    var_22 = (max(var_22, ((min(((max(80, 80))), (max(0, (1 | 2147483647))))))));
    #pragma endscop
}
