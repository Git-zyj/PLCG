/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = 118;
        var_16 = var_5;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_17 ^= ((((var_9 >> (100 - 87))) != 11002));

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_18 = 0;
                var_19 = ((var_6 << (-14867 + 14891)));
                arr_9 [i_3] [i_3] [18] [i_3] = (var_8 < 184);
            }
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                var_20 *= ((625000238557964153 ? -37 : 240));
                arr_13 [i_1] [i_1] = ((201 ? (var_12 && var_14) : var_10));
            }
            arr_14 [i_1] [i_2] = (!-8364);
            arr_15 [i_2] = (((((8363 ? var_2 : 45500))) ? (~var_7) : ((var_14 ? 6968 : 0))));
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            var_21 = ((var_8 ? ((2569847005 ? var_9 : 189)) : 2045188084));
            arr_18 [i_5 - 1] [i_5] [i_1 - 1] |= (159 < 15244974677260714995);
            arr_19 [i_1] [2] [4] = ((5580407271159760446 * ((21 ? ((-2303958109966020039 ? 1 : 240)) : 0))));
            var_22 = (!-35);
        }
        arr_20 [i_1 + 1] [i_1] = (((159 ? var_3 : var_0)));
    }
    var_23 |= var_1;
    var_24 = var_11;
    var_25 = var_10;
    #pragma endscop
}
