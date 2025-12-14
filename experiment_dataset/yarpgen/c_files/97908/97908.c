/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((((((858112440 ? 858112440 : 4294967295))) ? 4 : ((4186212070 >> (var_3 - 1587044982)))))) ? 2589640810 : 1942775358);
    var_13 = var_10;

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = min((((arr_2 [i_2 - 3]) ? (arr_2 [i_2 - 3]) : var_11)), (min((arr_2 [i_2 - 3]), (arr_2 [i_2 - 3]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (-(4294967295 + 4294967295));
                                arr_13 [i_4] [i_3] [i_2 + 3] [i_4] [i_4] = (((-((var_0 ? 0 : 370145640)))) & (min(((108755232 >> (((arr_0 [i_1] [i_3]) - 2371248695)))), -var_8)));
                            }
                        }
                    }
                }
            }
        }
        var_16 ^= max(((-(((arr_5 [i_0]) & (arr_10 [9] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]))))), ((-(max((arr_6 [i_0 + 1]), var_4)))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_17 = ((var_10 || 3436854855) ? (arr_10 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]) : (((arr_1 [i_5 + 1] [i_5 - 1]) * 108755232)));
        arr_17 [i_5 - 1] = (((3894983082 & var_11) <= var_6));
        var_18 = arr_0 [i_5] [6];
    }
    #pragma endscop
}
