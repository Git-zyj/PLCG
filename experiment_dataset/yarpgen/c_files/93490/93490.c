/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((112 + ((144 ? 143 : 51729))));
                var_19 = var_16;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_20 |= var_6;
                var_21 -= var_12;
            }
        }
    }

    for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4 - 1] = arr_7 [i_4];
        var_22 = (min(var_9, (var_15 ^ var_17)));
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5 - 1] [i_5 - 2] = var_2;
        var_23 = (((((((-2147483647 - 1) + 27250))) ? (((arr_14 [i_5 - 1] [i_5 - 1]) ? (arr_11 [i_5 + 1]) : var_13)) : (((var_12 ? (arr_11 [i_5]) : (arr_17 [i_5 - 2])))))));
        var_24 = ((!(arr_8 [i_5 - 2] [i_5 - 1] [i_5 - 2])));

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_25 = ((~(arr_15 [15])));
            var_26 = 12;
        }
    }
    for (int i_7 = 2; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_27 = ((-(-var_9 && var_10)));
        var_28 = (arr_22 [i_7 - 2] [i_7 - 1]);
        arr_25 [i_7] = ((((arr_21 [i_7]) ? var_14 : 7659603040728634517)));
    }
    #pragma endscop
}
