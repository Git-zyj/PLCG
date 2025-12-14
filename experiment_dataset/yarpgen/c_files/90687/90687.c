/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_13 = (arr_1 [i_0]);
            var_14 |= ((var_9 && (((max((arr_3 [i_0]), (arr_3 [i_0])))))));
            arr_4 [i_0] [i_0] [i_0] = (min((arr_1 [i_0]), (min((arr_3 [i_0]), (arr_1 [i_1])))));
            arr_5 [i_0] [i_1] = (arr_2 [10] [10] [i_0]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = (((arr_3 [i_0]) ? (arr_7 [i_0]) : ((min((arr_0 [i_2]), (min((arr_3 [i_0]), (arr_7 [i_2]))))))));
            arr_9 [i_2] |= (arr_7 [i_0]);
            arr_10 [i_0] = arr_1 [i_0];
            var_16 = (((((arr_2 [i_0] [i_0] [i_0]) + 5))));
            var_17 = (min(var_17, (arr_7 [i_0])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_13 [i_3] [i_3] [i_3] = (((arr_11 [2]) ? 4294967291 : -70));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_18 = ((2110037993 ? (arr_8 [i_0] [i_3]) : (arr_2 [i_4] [15] [i_0])));
                var_19 = (((arr_3 [i_3]) ? 88 : (((-20 < (arr_11 [i_0]))))));
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_20 *= 2184929302;
                var_21 = ((~(arr_0 [i_0])));
                var_22 = (((arr_15 [i_5] [i_3] [i_5] [i_5]) ? (arr_17 [4] [i_5] [i_5] [i_5]) : (arr_17 [14] [i_3] [i_3] [i_3])));
            }
        }
        arr_18 [i_0] [i_0] = 36293;
    }
    var_23 = (min((min(-var_0, (min(19, var_0)))), 80));
    #pragma endscop
}
