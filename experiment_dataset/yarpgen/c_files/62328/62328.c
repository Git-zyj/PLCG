/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (min(var_5, (min(14472361289069642842, -1961686021))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 = var_1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_12 = (min(var_12, var_2));
                        arr_10 [i_2] [i_2] [i_1] [i_2] = ((!((min((arr_0 [i_3] [i_0]), (arr_0 [i_3] [i_1]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                {
                    arr_15 [i_0] [i_4] [11] = (arr_7 [0] [i_4] [i_5] [i_5]);
                    var_13 = (max(var_13, ((((((-11131526830232552519 ? 0 : (max(3974382784639908773, var_4))))) ? (max((arr_6 [i_4] [i_4]), 188)) : -1)))));
                    var_14 = -82;
                    arr_16 [i_4] = (arr_7 [i_5 + 1] [i_5 - 1] [i_5 + 1] [3]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] [i_6] = (((((~((var_8 ? -27163 : (arr_11 [i_6])))))) ? 3609156197 : ((~(min(var_7, 16874212208226866071))))));
        var_15 = (min((var_7 <= var_7), ((32736 ? var_9 : (arr_5 [i_6] [i_6])))));
        arr_20 [i_6] [i_6] = var_9;
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = max(((((arr_1 [i_7]) ? (arr_7 [i_7] [i_7] [i_7] [i_7]) : var_5))), 3312491866717130643);
        var_16 = var_1;
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        arr_27 [i_8] = var_7;
        var_17 *= var_1;
        arr_28 [17] = ((((((arr_1 [i_8]) >> (var_8 - 1044748262)))) ? ((-(max(var_1, 1961686020)))) : (arr_2 [i_8] [14])));
    }
    var_18 = ((62886 ? 1961686020 : -18322));
    var_19 = (~var_0);
    var_20 = ((((~1961686008) | var_7)));
    #pragma endscop
}
