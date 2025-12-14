/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_6 [7] [i_0] [i_0] = ((119 ? 252 : 130023424));
            arr_7 [21] = (arr_4 [i_0]);
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_11 [2] = ((var_2 ? 1 : (((arr_0 [i_0]) ? (arr_0 [i_2]) : (arr_0 [i_0])))));
            arr_12 [i_0] [i_2] [i_2] = (!1);
            arr_13 [i_2] = (arr_5 [i_0] [i_2] [i_0]);

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_16 = (min(var_16, (((((((arr_4 [i_3]) + (max((arr_15 [i_0] [i_2] [i_2] [i_3]), 0))))) ? (arr_1 [i_2]) : -119)))));
                arr_17 [i_0] [i_2] [i_3] [i_3] = (arr_10 [i_2] [i_2]);
                var_17 = ((((max((arr_4 [i_0]), (~119)))) ? (arr_4 [i_0]) : (((var_7 | var_10) ? (min(var_10, 9223372036854775791)) : (var_10 || 65529)))));
                var_18 |= (max(30925, (((((39698 & (arr_3 [i_3] [i_0])))) ? ((var_0 ? 0 : (arr_2 [2] [i_2] [i_3]))) : ((var_9 ? var_1 : var_10))))));
            }
            arr_18 [i_0] [i_2] = (max((((!((((arr_4 [i_2]) ? (arr_15 [1] [i_2] [i_2] [i_2]) : 2340440338)))))), (arr_8 [i_0])));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_0] [1] = ((3672901754 ? 1 : ((((((arr_2 [i_0] [i_0] [i_0]) ? 0 : var_2))) ? ((var_11 ^ (arr_10 [i_0] [3]))) : ((((arr_10 [i_0] [i_0]) ? 1 : (arr_2 [i_0] [i_4] [i_0]))))))));
            var_19 = (arr_10 [10] [i_0]);
            var_20 = (((((var_6 - (arr_2 [i_0] [i_0] [i_4]))) - ((-23333 - (arr_15 [i_0] [i_0] [0] [i_4]))))));
        }
        var_21 = ((((((((arr_10 [i_0] [i_0]) >> (-4558 + 4570)))))) > (arr_14 [i_0] [i_0] [1] [i_0])));
        var_22 = (max(var_22, (((-(((arr_16 [i_0] [i_0] [i_0]) >> (((arr_10 [i_0] [i_0]) - 174)))))))));
    }
    var_23 |= var_12;
    #pragma endscop
}
