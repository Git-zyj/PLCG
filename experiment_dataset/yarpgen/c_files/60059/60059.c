/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_7 ? 60703 : (((var_11 % var_8) ? ((min(4825, var_3))) : ((min(60703, var_0))))));
    var_13 *= ((var_2 ? (60711 != var_6) : (((((28757 ? var_10 : 60711))) ? var_7 : var_3))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_14 = -var_4;
                        arr_11 [i_0] [i_0] [0] [i_3] = (arr_7 [i_1] [i_2 - 1] [10]);
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_15 -= ((((min(60703, (~4833)))) > (min((arr_3 [i_2 + 1] [i_4 - 1] [i_4 + 2]), (arr_3 [i_2 - 1] [i_2 - 1] [i_4 + 2])))));
                        var_16 = (~((((max((arr_15 [i_4] [1] [i_0] [1] [i_0] [i_0]), -4409725943820986251))) ? ((-(arr_13 [i_0] [9] [13] [9]))) : 4820)));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        var_17 = (min(var_17, (arr_6 [i_2] [i_5])));
                        var_18 |= (arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]);
                    }
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_19 = ((4820 ? (arr_2 [i_6 - 1]) : (44824 % -1945671530549384272)));

                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            var_20 = (((arr_5 [i_0 - 1]) ? (arr_18 [i_0] [5] [15] [5]) : (max(((75807178 ? 24726 : 0)), 44824))));
                            var_21 = ((!((max((arr_9 [i_0] [i_1] [i_0 + 1]), (arr_9 [i_0 + 3] [i_1] [i_0 + 1]))))));
                        }
                        var_22 ^= 4833;
                        var_23 -= 13;
                        arr_26 [i_6] [i_1] [i_6] = ((((arr_14 [i_2 + 1] [i_1 - 2] [10] [9]) * (arr_14 [i_2 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                    }
                    var_24 ^= (arr_17 [i_0] [i_0] [i_2 - 1]);

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_25 = (max(var_25, ((((((arr_16 [i_1 + 1] [i_1 + 1] [i_1 + 1] [1] [i_2]) ? (arr_16 [i_1 - 2] [i_8] [i_8] [i_8] [16]) : 219)) <= ((-(((arr_8 [i_0] [1] [i_2] [i_2] [i_0]) ^ 1)))))))));
                        arr_31 [2] [i_0] = (min(((max((var_11 || 251), (arr_9 [i_1 + 1] [i_1] [i_1])))), (((~var_10) ? (arr_29 [i_0] [i_0 - 1] [i_0] [i_1 - 1] [i_2 + 1]) : (~60715)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
