/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((((max(var_5, var_6)) * (var_10 == var_8)))), ((var_4 ? 18446744073709551605 : -944211760112228791))));
    var_18 = ((((((~10066) ^ var_15))) ^ (min((min(var_10, 66)), 2975883042))));
    var_19 = (max(((max(-10071, var_13))), var_10));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 += (min(((((((max(-8564, 30)))) == var_0))), ((min((arr_8 [i_2 - 2] [i_1] [i_0] [i_0]), var_9)))));
                    var_21 &= 21926;
                    arr_9 [i_1] = (--8573);

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [3] [i_0] [i_0] = 8563;
                        arr_14 [i_0] [i_1] [i_2] [i_3] = (max((arr_3 [i_0] [i_0]), (arr_10 [i_1 - 1])));
                        var_22 = (min(var_22, (arr_7 [i_0] [i_0])));
                        arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] = (~732341972);
                        arr_16 [i_0] [i_0] [i_2 - 2] [i_3] = 2975883042;
                    }
                }
            }
        }
        var_23 = (min(var_23, var_16));
        var_24 = ((~(max(var_13, (((arr_6 [i_0] [i_0] [i_0] [i_0]) - 952307229))))));
        arr_17 [8] [i_0] = ((2975883054 != (min(8555, 1319084228))));
    }
    #pragma endscop
}
