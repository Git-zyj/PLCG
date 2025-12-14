/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = (max(var_2, var_6));
    var_15 = ((((min(((var_10 ? var_1 : 4)), ((min(var_1, var_7)))))) ? ((((max(-100, var_1))) * var_8)) : 1));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 = ((((min((arr_3 [i_2 - 2]), -8618))) ? (((arr_0 [i_0]) >> (var_7 - 51982))) : var_3));
                        arr_9 [i_0] [i_0] = (min((arr_2 [i_2 + 1] [i_2 - 1]), ((((16069 ? var_8 : (arr_3 [1])))))));
                        var_17 = (max((arr_4 [i_0]), ((-(arr_4 [i_0])))));
                    }
                }
            }
        }
        var_18 ^= ((-(((max(var_2, var_1))))));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            arr_13 [i_0] = ((!(arr_10 [i_0])));
            var_19 = (((((var_10 ? (arr_6 [i_0] [i_0] [i_4]) : (arr_5 [i_0] [i_4 + 1] [i_4 + 1])))) ? 1 : var_8));
            var_20 = (min(var_20, ((((((var_1 ? 16069 : var_6))) ? ((1 ? (arr_5 [i_0] [i_4 - 1] [i_4]) : (arr_12 [i_4] [i_0]))) : ((((arr_6 [i_0] [i_4] [4]) + var_6))))))));
            var_21 = (arr_4 [i_0]);
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] = ((((~var_9) ? ((123 * (arr_4 [i_5]))) : (((arr_0 [i_5]) | var_6)))));
        var_22 = (max(var_22, ((min((((-((min(23348, var_7)))))), (min(1, 67108863)))))));
        var_23 = (min((((arr_2 [i_5] [7]) || ((min(var_6, (arr_5 [1] [i_5] [i_5])))))), ((((((arr_3 [i_5]) ^ 0))) || (((-8618 ? var_3 : var_4)))))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = (((((arr_10 [i_6]) ? 310651688 : 240))) ? (max((arr_6 [i_6] [i_6] [i_6]), (arr_8 [i_6] [i_6]))) : (arr_16 [i_6]));
        arr_23 [i_6] = ((-(((arr_0 [i_6]) ? ((min(-124, (arr_5 [i_6] [i_6] [i_6])))) : (arr_8 [i_6] [i_6])))));
        arr_24 [i_6] [i_6] = ((-(min((arr_0 [i_6]), 0))));
    }
    #pragma endscop
}
