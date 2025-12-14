/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_6;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] [i_1] = (var_11 ? (arr_0 [i_1 - 1] [i_1 - 2]) : (arr_0 [i_1 - 2] [i_1 - 2]));
            var_13 = (min(var_13, 0));
            arr_5 [i_0] [i_0] = (((arr_2 [i_1 - 2]) ? ((((arr_3 [8] [19]) ? (arr_0 [i_0] [i_1]) : 29631))) : ((var_7 ? (arr_0 [19] [3]) : var_4))));
        }
        for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_2] [i_2] = (((((~(arr_7 [i_0] [i_0] [i_0])))) ? ((15432615564043202105 ? (1578669991 / var_8) : (max((arr_8 [i_0] [i_0] [i_0]), var_3)))) : (((-((min(-372, 1))))))));
            var_14 = var_5;
            var_15 = (min(var_15, ((max((max((arr_0 [i_0] [i_0]), (arr_0 [i_2 - 3] [i_2 - 3]))), (((!((max((arr_8 [i_2] [i_0] [i_0]), var_5)))))))))));
            arr_10 [i_2] [i_0] [i_0] = (((((var_8 ? (arr_6 [i_2 - 1]) : (arr_1 [i_2 - 3])))) ? ((-(((arr_6 [0]) ? 0 : var_3)))) : ((var_6 ? ((1 ? (arr_6 [i_2]) : 0)) : (((arr_2 [i_0]) | 4))))));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_16 = min(((22 ? (max(1023, 18446744073709551615)) : var_7)), var_2);
                        var_17 = 5427670064655048404;
                        arr_18 [i_0] [i_3] [i_5] = ((-(max((arr_3 [i_0] [i_3]), var_6))));
                    }
                }
            }
        }
    }
    var_18 = var_5;
    var_19 = (min(var_11, (max(var_0, (var_1 & var_11)))));
    var_20 = (max(-2109667351, var_9));
    #pragma endscop
}
