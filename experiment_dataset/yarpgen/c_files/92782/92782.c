/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_4;
        var_11 += ((~((1 ? ((((!(arr_1 [0]))))) : ((1 ? var_0 : (arr_0 [2])))))));

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            var_12 = var_0;
            var_13 = (((max((((arr_3 [i_1] [i_0]) ? (arr_3 [i_0] [i_1]) : 58549)), (arr_4 [i_1 - 3] [i_1])))) ? (2436390618 * 1) : var_8);
            var_14 = ((0 | (arr_0 [i_0])));
        }

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_15 = (((((4294967290 ? 14029 : (-127 - 1)))) <= (arr_4 [i_2 + 2] [i_2 + 2])));
                var_16 = (~var_8);
                var_17 |= var_10;
            }

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_18 += (arr_6 [i_2 + 1] [i_2 + 1] [i_4]);
                var_19 -= (arr_7 [i_4]);
            }
            arr_13 [i_0] [i_0] = (arr_3 [i_2] [i_0]);
            arr_14 [i_0] [i_0] [i_0] = (((arr_8 [i_2 + 2] [i_0] [i_0]) ? var_5 : (arr_4 [i_2 + 2] [i_2 + 2])));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_20 = (arr_10 [i_5] [i_5] [i_0] [i_0]);
            var_21 = var_9;
            var_22 += (((arr_9 [8]) ? (((arr_5 [i_0] [1]) >> ((10340754431514945088 ? 9 : 311730347)))) : (min(0, var_1))));
        }
        var_23 += (0 * 8714492303695989641);
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_24 += ((((((1 >= (arr_3 [i_6] [i_6]))))) ? 16682427678105404909 : ((var_5 ? 65535 : (arr_8 [i_6] [16] [i_6])))));
        var_25 += 65521;
    }
    var_26 = ((((var_10 ? var_10 : 4095)) % ((var_8 ? ((min(116, 37554))) : (-68 > var_6)))));
    #pragma endscop
}
