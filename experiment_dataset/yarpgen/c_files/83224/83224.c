/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= -8882;
    var_16 = -1047;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (min(-var_5, -8882));
                var_18 = (max((((((-(-127 - 1)))) ? (arr_6 [i_0] [i_0]) : var_10)), ((var_13 - (var_6 > var_14)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_10 [i_2] = ((-(9223372036854775807 != -18)));
        var_19 = (((~0) ? 27932 : (arr_7 [i_2])));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_20 = (((((arr_8 [i_3]) ? var_11 : (arr_7 [i_3]))) != (((arr_8 [i_3]) ? 58 : var_14))));
        arr_13 [i_3] = var_8;
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_21 = var_7;
                    var_22 = 50953;
                }
            }
        }
        var_23 = (min(var_23, (((-(min(63, 2265583719)))))));
        var_24 = (min(793665844, 4294967295));
    }
    #pragma endscop
}
