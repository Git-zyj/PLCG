/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((((max((arr_1 [i_0]), 18)) > var_11)))) <= (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = ((((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? var_11 : var_4)) / ((((arr_0 [i_0]) && -8731078204097060903))))));
                        var_18 -= ((!(((8731078204097060925 % var_14) <= (arr_6 [i_3] [i_2] [i_0])))));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = (((((min((arr_10 [i_0] [i_0] [i_0] [i_0]), 11940)))) >= ((((min(var_15, 0))) | ((2113929216 + (arr_4 [i_0])))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_19 = (var_15 / -8731078204097060925);
            var_20 = (min(var_20, ((~(39218 | -97)))));
        }
        var_21 = (~((var_13 << (-8731078204097060903 + 8731078204097060918))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_22 [i_6] = (~7475);
        var_22 = (~(arr_18 [i_6]));
    }
    var_23 = (var_9 ? (!1) : (((((~1) + 2147483647)) << ((((((21 ? var_1 : -2718981933082455585)) + 70)) - 24)))));
    #pragma endscop
}
