/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(65535, -13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((((!(arr_3 [20] [i_1] [i_1]))) ? (((((arr_2 [6]) >= (((arr_1 [i_0]) ? (arr_2 [i_1]) : (arr_5 [18] [i_1] [i_1]))))))) : (min((arr_5 [0] [i_0] [i_1]), (arr_3 [i_1] [i_1] [i_0])))));
                var_19 = ((((((((arr_0 [i_1] [8]) ? (arr_1 [9]) : (arr_3 [i_0] [i_1] [i_1])))) ? (arr_5 [i_1] [i_1] [i_1]) : ((((arr_1 [i_0]) ? (arr_4 [22] [i_0] [i_1]) : (arr_0 [i_0] [15])))))) - (((arr_2 [i_0]) - (arr_1 [i_0])))));
                var_20 = (max(14155, 18446744073709551613));
            }
        }
    }
    var_21 = (((((-(!var_6)))) ? (((!((max(var_16, var_0)))))) : var_12));
    var_22 = ((-(((((max(var_12, var_4))) && (((var_13 ? var_11 : var_3))))))));
    #pragma endscop
}
