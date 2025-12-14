/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [7] [i_0] = (!(arr_0 [i_0] [i_0]));
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = max((arr_1 [0]), (!-15));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_11 = (min(var_11, (arr_8 [i_1])));
        var_12 = (arr_8 [i_1]);
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_13 *= 0;
                        var_14 = ((((((arr_17 [i_2] [i_2] [i_3 + 2] [i_5]) ? (arr_17 [i_2] [i_2] [i_3 + 2] [i_3]) : (arr_17 [i_2] [i_2] [i_3 + 2] [i_2])))) ? (((arr_11 [i_2]) ? (arr_17 [i_2] [i_2] [i_3 - 1] [i_3]) : (arr_15 [i_2] [i_2] [i_2 - 1]))) : (((~(arr_17 [i_2] [i_2] [i_3 + 2] [i_2]))))));
                        var_15 = var_7;
                        arr_20 [i_2] [i_2] [i_2] [i_2] = (arr_14 [i_2 - 1]);
                    }
                }
            }
        }
        var_16 -= (((min((arr_15 [15] [i_2 - 1] [i_2 + 1]), (arr_15 [i_2] [i_2 + 2] [i_2 + 2]))) >> (((arr_15 [17] [i_2 + 3] [i_2 - 1]) ? var_8 : 1))));
        arr_21 [i_2] [i_2] = ((((arr_6 [i_2 + 1] [i_2]) ? var_8 : 1)));
        arr_22 [i_2] = (-(((((1525971047 ? 133 : var_1))) ? var_4 : var_4)));
        var_17 = (min(var_17, (arr_13 [i_2 + 1] [i_2 + 1])));
    }
    var_18 = (min(var_18, (((((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (((min(8128250863532291511, 122)) - 122))))) ? (min((((-9223372036854775807 - 1) ? var_3 : var_6)), (var_5 ^ var_6))) : ((((min(var_4, var_4))) ? ((var_1 ? var_8 : var_3)) : var_9)))))));
    var_19 = var_5;
    var_20 = var_6;
    #pragma endscop
}
