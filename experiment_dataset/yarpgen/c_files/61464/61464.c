/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((18888 ? ((~(min(65378, 9223372036854775795)))) : (((32767 & (arr_0 [i_0] [i_0]))))));
        var_15 = (min(((((arr_0 [i_0] [i_0]) >= -106))), (min((((622941573 ? (-2147483647 - 1) : 0))), 2827666080164582127))));
        var_16 = (!212);
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_17 = ((((-622941574 ? var_11 : (-457909862107461572 > 158))) > (((!(arr_7 [i_1]))))));

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        var_18 = ((!(arr_10 [i_1 - 1] [i_2] [i_2] [i_4])));
                        var_19 = (min(var_19, ((((127 ^ 14306) + (var_3 - var_6))))));
                    }
                    arr_13 [i_1] [i_2 + 2] [i_1] = (min(((-122 ? (arr_9 [i_1] [i_2 - 1] [i_3] [5]) : ((255 ? var_3 : 1)))), var_13));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_20 |= (((~-622941574) ? (var_5 & 130023424) : ((((45745 && (arr_15 [i_1] [i_2] [i_3] [8])))))));
                        arr_16 [i_1] [i_1] [i_3] = 97;
                        arr_17 [i_1] [i_3] [i_3] [i_3] = (~2477098846040295379);
                    }
                }
            }
        }
    }
    #pragma endscop
}
