/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (min(var_16, 4294967295));
        arr_2 [13] [13] = ((((max(((1 ? var_8 : var_4)), ((min((arr_0 [3]), (arr_0 [i_0]))))))) ? (-2147483647 - 1) : ((((arr_1 [i_0] [i_0]) >= -2051188313)))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_17 = 21;
        var_18 ^= (((!(arr_1 [7] [i_1 + 1]))));
    }
    var_19 = ((!((min(var_15, var_14)))));
    var_20 = (min(var_20, var_6));
    var_21 = (((((-(min(var_2, var_15))))) ? (!-var_10) : var_13));

    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                {
                    arr_12 [i_2] [i_2] = (-127 - 1);
                    var_22 = (min(var_22, (var_13 * 20)));
                }
            }
        }
        var_23 = max((arr_7 [i_2] [i_2] [i_2 + 1]), (arr_11 [i_2] [16] [i_2]));
        var_24 = (max(var_1, (((arr_7 [i_2] [i_2 + 1] [i_2]) ? (-32767 - 1) : (arr_6 [i_2 + 1])))));
    }
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        arr_17 [11] = ((((!(arr_16 [i_5 - 2]))) ? (max(((-(arr_15 [i_5]))), ((((arr_16 [i_5 + 3]) != 4294967295))))) : (((arr_15 [i_5]) ? ((var_4 ? var_10 : (-2147483647 - 1))) : -116))));
        arr_18 [8] = (((((((arr_14 [3]) ? 4294967295 : 0))) ? (arr_13 [i_5]) : (arr_16 [i_5 - 2]))));
    }
    #pragma endscop
}
