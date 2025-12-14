/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_7, 62759586));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = var_9;
                arr_5 [i_0] = var_3;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((~(arr_4 [i_0] [i_1])));
                    arr_9 [i_2] = ((-var_7 ? var_4 : 15187025934199127362));
                    arr_10 [i_0] [i_0] [5] [i_2] = 1;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            arr_17 [i_4] [i_1] = ((~(arr_14 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1])));
                            arr_18 [i_4] = ((arr_14 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1]) <= (arr_14 [13] [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1]));
                            var_12 ^= ((var_7 ? (arr_3 [i_0]) : 32));
                            var_13 = var_2;
                        }
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            var_14 = (min(var_14, (var_8 <= 20)));
                            var_15 = (((62 <= 3259718139510424253) ? -114 : (4089404214 * -41)));
                            arr_22 [i_5] [i_3] [i_2] [i_1] [i_5] = 3259718139510424253;
                        }
                        var_16 = (min(var_16, 5419));
                    }
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        var_17 = ((~(arr_2 [i_6 + 2])));
                        var_18 = 0;
                    }
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        var_19 = 239;
                        var_20 = (!var_8);
                    }
                }
                var_21 -= ((!((max((arr_25 [i_0]), (arr_4 [16] [i_1]))))));
                arr_28 [i_0] [i_1] = var_5;
            }
        }
    }
    var_22 = var_6;
    var_23 = (1023 <= 4294967295);
    #pragma endscop
}
