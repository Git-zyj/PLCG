/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 ^= 2142223646269029330;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [0] [i_2] [i_0] = (~-84);
                        arr_11 [5] = ((((~(arr_2 [i_1] [i_3]))) + (min((arr_2 [i_0] [i_0]), (arr_2 [0] [i_1])))));
                        arr_12 [i_3] = 2142223646269029324;
                        var_16 = (min((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : 2142223646269029330)), (((((min(1, -2142223646269029345))) ? ((min(1, 14))) : ((23422 ? (arr_4 [i_0] [i_3]) : (arr_5 [3] [i_2] [i_2] [i_2]))))))));
                    }
                }
            }
        }
        var_17 -= ((min(65371, 64)));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_18 = ((((min(-2110587879, (~-1179971032)))) ? (((1 ? 2142223646269029324 : 8752155783967646686))) : (18446744073709551615 - -1)));
        arr_16 [i_4] = ((-((~(max((arr_13 [i_4]), 2146602014))))));
    }
    var_19 = (min(290482911, ((-21884 ? -908046203 : 3630664207097465267))));
    #pragma endscop
}
