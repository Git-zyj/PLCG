/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = 4662;
                    var_15 = (((+((4644 ? (arr_4 [i_1]) : var_8)))));
                    arr_11 [i_2 + 2] [i_0] [i_2] = ((((min(var_12, (min(var_12, var_3))))) ? (((!var_7) ? var_14 : (arr_4 [i_0]))) : (255 & 14)));
                }
            }
        }
        var_16 = (((~11) >= 11));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_17 += ((((((!(arr_0 [i_3]))))) + ((3975986484 ? 254751175 : var_2))));
        arr_14 [20] = ((18446744073709551615 ? (arr_4 [i_3]) : (var_0 % var_8)));
        var_18 += (!5266343095864244078);
    }
    var_19 = ((!((min(65535, (65535 % 13444162180626460594))))));
    var_20 = (min(var_20, ((min(-4398046511103, ((((~3630819695) | (~65525)))))))));
    var_21 -= var_11;
    /* LoopNest 3 */
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                {
                    var_22 = (((var_7 ? var_9 : (arr_2 [i_4]))) * (((((((arr_13 [i_4] [i_4]) / -4548652561144817140)) == (((min(var_6, var_11)))))))));
                    var_23 = (arr_17 [i_4 - 2]);
                }
            }
        }
    }
    #pragma endscop
}
