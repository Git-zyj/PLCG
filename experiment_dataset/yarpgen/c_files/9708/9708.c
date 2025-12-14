/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(var_2, (var_19 <= -1668606113)))) << (min(var_2, var_10))));
    var_21 *= ((1351306892401271327 > var_8) << ((((-var_7 ? (max(var_18, var_1)) : -1668606134)) - 5320079451778958494)));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = ((((max((max((arr_2 [i_0 - 1]), (arr_7 [i_0] [i_0] [i_1] [17]))), (arr_0 [i_0] [i_0])))) >= (((((arr_4 [i_0 + 1] [i_0]) == (arr_1 [i_0]))) ? ((((arr_3 [i_0]) ? (arr_7 [i_2] [10] [i_1] [i_0]) : (arr_0 [i_0] [i_0])))) : (arr_3 [i_2 - 1])))));
                    var_23 = (min(var_23, ((max((((arr_5 [i_0 - 2]) ? (arr_5 [i_0 - 1]) : 237)), ((min((arr_0 [i_0 + 1] [i_2 - 1]), (arr_2 [i_0])))))))));
                }
            }
        }
        var_24 = (min(var_24, ((~(((arr_4 [i_0] [i_0 - 2]) / (arr_7 [i_0] [i_0 - 1] [i_0] [i_0])))))));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_25 = (max(var_25, (arr_0 [i_3 + 1] [i_3 - 1])));
        arr_11 [i_3] = (min((arr_6 [i_3] [15] [15] [i_3]), (max((arr_1 [i_3]), ((1 ? (arr_0 [i_3] [i_3]) : (arr_1 [i_3])))))));
    }
    var_26 = (min(((max(((-25832 ? var_8 : var_7)), (max(var_12, var_10))))), (((var_14 / var_8) ? (min(var_6, var_17)) : var_3))));
    #pragma endscop
}
