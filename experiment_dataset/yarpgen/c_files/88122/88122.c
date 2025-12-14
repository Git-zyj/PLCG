/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min((0 != 0), ((var_9 ? var_15 : -437903702)))), (((1801342185 / 18446744073709551602) ? (((52560 ? 65520 : var_0))) : var_6))));
    var_18 = ((((var_16 + 9223372036854775807) << (-8 > 127))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [8] |= ((((((arr_0 [i_0]) * var_10))) ? var_15 : 140187732541440));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((4294967286 && 1) << (-2130191270 + 2130191278))))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_14 [i_0] = -39;
                        var_20 = (13463 | 12);
                        arr_15 [i_0] [i_1] [i_0] [i_3] = (arr_13 [i_0] [i_0]);
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_20 [i_0] = (((((430477072301933499 - (arr_4 [i_0] [i_1] [4])))) ? (arr_18 [i_0] [i_0] [i_0] [5]) : ((1 - (arr_17 [i_0] [i_0] [i_2])))));
                        arr_21 [2] [i_1] [i_0] [i_0] = -104;
                        var_21 = (~var_5);
                        var_22 = (((18446744073709551606 ^ 6033) <= (((41321 ? -26 : 1387919768)))));
                    }
                    arr_22 [i_0] = ((((((((-32767 - 1) + 2147483647)) >> (57813 - 57807)))) ? ((((var_7 != (arr_18 [i_0] [i_0] [i_2] [i_0]))))) : (9007198986305536 - 38703)));
                }
            }
        }
        var_23 = (max(var_23, ((((arr_16 [3] [i_0] [3] [i_0]) > 6)))));
    }
    var_24 = (var_13 ? (min(4832, 0)) : var_8);
    var_25 = (min(var_25, ((((1 <= 1) ? var_3 : (~62))))));
    #pragma endscop
}
