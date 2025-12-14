/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, -var_9));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 = ((((max((arr_2 [i_0 - 1]), (arr_2 [i_0 + 4])))) ? (arr_1 [i_0]) : (((arr_1 [i_0 + 1]) ? var_3 : (arr_1 [i_0 + 2])))));

        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            var_13 = (min(var_13, (arr_3 [6] [6])));
            var_14 = ((((((((arr_4 [i_0] [14]) > var_4))) <= (var_7 << var_4))) ? (arr_4 [6] [i_1 - 1]) : var_0));
            arr_6 [21] [23] [23] |= (((!1) ? ((-((-(arr_4 [18] [i_0 + 1]))))) : ((max(1, 0)))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_15 = (max(var_15, (((~(((var_5 && (~var_0)))))))));

            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                var_16 |= arr_2 [i_0];
                arr_13 [5] [1] [21] = ((((min((arr_8 [i_3] [12]), (~-42)))) && (arr_0 [i_2])));
            }
            arr_14 [i_2] = (((arr_8 [i_0] [0]) ? (min(var_5, (((arr_3 [i_0] [i_0]) - (arr_3 [i_0] [i_2]))))) : (((~-1658992474) ? (((arr_12 [1] [2] [1] [19]) & var_6)) : var_4))));
            var_17 += var_5;
            arr_15 [i_2] [i_0] = ((-360987548 ? 12 : 57));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_20 [i_0] [16] |= ((-(arr_19 [i_0 + 2])));
            var_18 = ((~(((arr_3 [i_0 + 4] [i_0 + 2]) % ((-1658992475 ? 615313380446849923 : 1243454176))))));

            /* vectorizable */
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                var_19 = (-(~var_2));

                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    arr_26 [20] [19] [8] [i_5] [i_4] [i_6 + 1] = ((((var_7 && (arr_11 [i_4] [i_4] [i_4] [i_6])))));
                    var_20 = (var_6 ? var_9 : var_2);
                }
                arr_27 [11] [i_4] [i_4] = (!126);
            }
            arr_28 [19] [i_4] [7] = ((!((((arr_2 [i_0 + 1]) % -var_3)))));

            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                arr_32 [17] [i_4] [7] [i_4] = arr_24 [i_4] [4] [i_7 - 1] [i_7 - 1];
                var_21 = (arr_16 [i_4] [i_4]);
                var_22 = ((!(arr_23 [i_0] [i_0 + 4] [6])));
            }
        }
    }
    #pragma endscop
}
