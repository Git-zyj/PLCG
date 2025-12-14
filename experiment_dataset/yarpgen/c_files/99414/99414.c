/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((min(var_1, var_11)) * (var_10 < var_0))), ((926456338 >> (((3368510940 | 759790756) - 3989798393))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (--1);
        var_13 = 0;
        arr_3 [i_0] = ((((min((((arr_1 [i_0] [i_0]) >> (-57499698 + 57499726))), 759790760))) ? (((max(0, var_6)) ? var_1 : ((8 ? var_7 : -20591)))) : (((((!var_7) || 288901237))))));
        arr_4 [i_0] [i_0] = (max((-11 && 1073741823), (((3368510959 * var_4) ? var_3 : ((max(var_8, (arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_14 = (((~(arr_0 [i_1] [i_1]))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_15 = (arr_7 [3]);
                var_16 = (min(var_16, (3535176533 || -49)));
            }
            arr_12 [i_1] [i_2] [i_1] = (((-19713 ? var_5 : var_2)));
            var_17 = (((var_3 ? (32 >= 30847) : ((var_9 ^ (arr_7 [9]))))) * (var_7 <= 1682585273));
            arr_13 [i_1] [i_2] [i_1] = (((((var_8 && (~var_10)))) | ((((3535176533 + var_10) < 1)))));
        }
    }
    #pragma endscop
}
