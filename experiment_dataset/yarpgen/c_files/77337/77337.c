/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = -267604876;
        var_18 = ((123 / (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_2] [i_2] = var_15;
                        var_19 += (arr_7 [4] [i_1] [i_2] [i_1]);
                        var_20 = (((~3961455323) < 29756));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_21 ^= ((-2101703490 * ((((2247401767174144 % -2101703495) && 16252505816123476359)))));
        var_22 &= var_6;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_23 = ((-26596 / (((arr_5 [i_5] [i_5] [i_5]) ? (arr_6 [i_5] [i_5]) : (-1 || 2640459110986399158)))));
        arr_19 [i_5] = max((((arr_6 [i_5] [i_5]) - (arr_6 [i_5] [i_5]))), ((max((arr_1 [i_5] [i_5]), (arr_1 [i_5] [i_5])))));
    }
    var_24 ^= (((!100) ? ((min(-11139, -28407))) : var_0));
    #pragma endscop
}
