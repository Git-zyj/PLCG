/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = 45434;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        var_13 = ((~(arr_0 [i_0])));
        var_14 = ((23 || (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_15 = (max((arr_2 [i_1]), ((((arr_3 [i_1]) >= 20681)))));
        var_16 = (max(var_16, 960298679));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_17 -= (arr_8 [i_2] [13]);
                            arr_17 [i_2] [i_3] [i_6] [i_6] = (arr_6 [i_2] [i_3]);
                            arr_18 [i_5] [i_6] [i_2] = ((((((max(45428, -960298675)) * (!-960298676)))) || ((max(var_3, (arr_12 [i_3] [i_4 + 3] [9]))))));
                            arr_19 [i_2] [3] [i_6] [i_3] [i_6] = 11814833514778001507;
                            var_18 = (arr_11 [i_5] [5]);
                        }
                    }
                }
            }
            arr_20 [i_3] = (min((arr_5 [i_2]), ((-(arr_8 [i_3 - 2] [i_3 - 2])))));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 12;i_8 += 1)
            {
                {
                    var_19 = (max(var_19, 11814833514778001527));
                    var_20 = (((-((6550 ? 1639302544579505024 : 127)))));
                    var_21 = ((~((((max(4, 6631910558931550089)) >= 65535)))));
                }
            }
        }
        arr_25 [i_2] [i_2] = var_2;
        arr_26 [i_2] = (arr_7 [i_2] [i_2]);
    }
    for (int i_9 = 2; i_9 < 11;i_9 += 1)
    {
        arr_30 [i_9] = (max((((6 != 20106) ? -1639302544579505025 : (((~(arr_5 [13])))))), ((((((arr_9 [i_9 - 2] [i_9] [i_9] [i_9]) ^ var_1)) == 1400695721)))));
        var_22 = (min(212154312577402339, (((1432 ? 524287 : 41368)))));
        var_23 = ((~(((arr_8 [i_9 + 2] [i_9 + 2]) % (~23)))));
    }
    #pragma endscop
}
