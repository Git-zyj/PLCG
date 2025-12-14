/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((12 ? -1937203441882817520 : -1937203441882817519)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_1] = ((-1937203441882817508 ? (arr_2 [i_0 + 2]) : (arr_1 [i_0 - 1])));
            arr_5 [1] [i_1] [2] = (((((arr_3 [i_0 - 1] [3]) + 9223372036854775807)) >> (-1937203441882817520 + 1937203441882817581)));
            var_19 *= (arr_3 [i_0 + 3] [i_1]);
            var_20 ^= var_10;
            var_21 = (min(var_21, (((!((!(arr_0 [1]))))))));
        }

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_22 = arr_8 [10];

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_0 + 2] [i_0 - 2] [21] [i_3] = 235;
                var_23 += 1937203441882817520;
                var_24 *= (((arr_9 [i_0 + 1]) < (~1937203441882817519)));
            }
        }
    }
    #pragma endscop
}
