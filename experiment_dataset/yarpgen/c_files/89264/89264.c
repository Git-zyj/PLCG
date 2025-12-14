/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (min(var_12, (((min((arr_0 [i_0]), var_8))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_13 = (((arr_0 [i_0]) ^ (arr_0 [i_0])));
            var_14 *= (((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_0] [i_1])));
            arr_5 [i_1] [i_1] = ((var_4 > (arr_1 [i_0] [i_0])));
            var_15 = (i_1 % 2 == 0) ? ((((((arr_4 [i_1] [i_1]) + 2147483647)) >> (((arr_4 [i_1] [i_1]) + 31973))))) : ((((((((arr_4 [i_1] [i_1]) - 2147483647)) + 2147483647)) >> (((((arr_4 [i_1] [i_1]) + 31973)) - 58396)))));
        }
        var_16 -= ((1451890038 ? -1456066140 : (-1456066156 && -1456066156)));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_9 [i_2] = (max((((arr_0 [i_2]) ? (arr_0 [i_2]) : (arr_0 [i_2]))), ((min((arr_0 [i_2]), (arr_0 [i_2]))))));
        arr_10 [5] [11] = (arr_8 [i_2]);
        arr_11 [i_2] [i_2] &= var_8;
        var_17 = (0 ? 1 : 561133884336250790);
        arr_12 [i_2] = max(var_2, (max((arr_4 [i_2] [i_2]), var_1)));
    }
    #pragma endscop
}
