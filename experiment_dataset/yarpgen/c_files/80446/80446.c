/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0] [i_0];
        arr_3 [i_0] &= -9223372036854775807;
    }

    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_11 *= (arr_5 [i_1] [i_1]);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_1] [3] [i_1] = ((var_9 || (arr_6 [i_2])));
            arr_10 [i_1] = (((arr_0 [i_1 - 1] [i_1 - 1]) >= (162 & 1)));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_3] [i_4] [i_3] [i_5] = (((max((1 < 797890570), 1)) ? (var_7 > var_3) : (arr_0 [i_1] [i_1])));
                            arr_18 [i_3] = (((arr_7 [i_4]) != var_8));
                        }
                    }
                }
                var_12 = ((((((arr_16 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1]) && (arr_16 [i_1 + 1] [i_1 - 3] [i_1 - 1] [0] [i_1 - 1] [7])))) & ((((arr_16 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1]) < (arr_16 [i_1 - 3] [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 2] [i_1]))))));
            }
        }
        arr_19 [i_1] = (-(((arr_1 [i_1 - 2]) - (arr_16 [i_1] [i_1 - 2] [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 2]))));
    }
    #pragma endscop
}
