/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((var_0 ? var_1 : -106))) ? var_1 : ((max(var_6, var_8)))))) ? ((((max(0, 7546725005187657019))) ? ((var_1 ? var_7 : var_6)) : (var_6 && var_7))) : 1));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_2] = (min((min(2889942612864213545, 58117)), ((max((arr_3 [i_0 - 2]), (max(224, 243)))))));
                    var_13 += 70368677068800;
                    arr_11 [i_2] [i_2] [i_2] = (((1122019454 || ((((arr_3 [i_0]) - (arr_2 [i_0])))))));
                    var_14 += ((((((((!(arr_0 [i_2])))) < (max((arr_0 [i_2]), 168))))) <= (((((min((arr_5 [i_2]), 1))) <= (15556801460845338065 != -907075137229249448))))));
                }
            }
        }
        var_15 = (((((((((arr_6 [i_0] [i_0] [i_0]) | (arr_7 [i_0] [i_0] [i_0])))) ? 18446744073709551615 : (max((arr_3 [i_0]), 0))))) ? ((4294967295 & (max((arr_9 [i_0] [8] [i_0]), (arr_7 [i_0] [i_0] [i_0]))))) : (((((0 ? (arr_0 [i_0]) : (arr_8 [i_0] [i_0] [i_0] [i_0]))) ^ (((arr_6 [i_0] [i_0] [i_0]) | 88)))))));
    }
    #pragma endscop
}
