/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((32767 ? -27 : 2023820277176841620));
    var_11 = (var_3 == var_0);
    var_12 = var_9;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((min(1048517696, 1048517718))) ? var_3 : (1048517684 + var_5)));
        arr_4 [i_0 - 1] = ((((max((((3246449613 ? var_9 : -111))), ((-43 ? var_7 : var_4))))) ? ((((arr_2 [i_0]) ? var_4 : var_6))) : ((((min(var_9, -5388314027944238659))) ? 3246449608 : var_5))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 = var_0;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    {
                        var_14 = var_3;
                        var_15 *= (var_7 ? (var_0 ^ var_7) : ((5011683549544404187 << (var_3 - 2249690557347851692))));
                        var_16 = ((var_3 ? -114 : -1274897321));
                        var_17 ^= (((arr_12 [5] [i_4 + 1] [i_3 + 1]) ? -2337576278213568625 : (arr_12 [i_4] [i_4 - 1] [i_3 + 1])));
                    }
                }
            }
        }
        var_18 = ((+((-32768 ? (arr_13 [i_1] [i_1]) : -1217))));
        var_19 += ((-(1048517694 && var_9)));
    }
    #pragma endscop
}
