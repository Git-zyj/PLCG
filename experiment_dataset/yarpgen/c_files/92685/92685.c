/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_12 ^= ((+((+(min((arr_0 [i_1]), 7541691343917515753))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_13 = (max(var_13, (((((((~(arr_5 [i_0] [i_1 + 2] [i_1 + 2]))) ? (min(var_11, var_4)) : var_4)))))));
                    var_14 = ((((((((((-7541691343917515731 + 9223372036854775807) >> (14342202099726839122 - 14342202099726839122)))) ? -13 : (-2147483647 - 1))) + 2147483647)) >> (((min(var_6, -var_9)) - 501454296))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] = ((21 ? 0 : 1453776213));
                    arr_12 [i_0] [i_0] [i_0] [i_1 - 1] = (min(18446744073709551594, ((-(min((arr_7 [i_0] [i_0] [i_1 + 3] [i_3]), 18446744073709551600))))));
                }
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    var_15 = (arr_1 [i_4]);
                    var_16 &= ((1453776213 & (arr_14 [i_1] [i_1] [i_1])));
                    arr_15 [i_4] [i_1] [i_1] [i_1] &= 15613;
                    var_17 = (arr_6 [i_0] [i_0] [i_4 - 1]);
                }
                var_18 -= arr_10 [i_0] [i_1];
            }
        }
    }
    var_19 += (~-61845);
    var_20 &= (~(((61845 | var_0) ? (!4294967285) : (~1453776232))));
    var_21 |= 1452;
    var_22 = var_8;
    #pragma endscop
}
