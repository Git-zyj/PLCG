/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2200836850;
    var_13 = min((((-(1200472845 ^ var_0)))), ((var_7 << (15062486549453999411 - 15062486549453999396))));
    var_14 = (min(var_14, (((((((var_9 ? -17195 : var_3)) % var_6)) <= (min(var_4, (max(var_1, 15062486549453999411)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = ((((((var_3 ? var_4 : var_11)) / 15)) | (((-(!var_6))))));
                var_16 = (((((arr_2 [i_1 + 3]) ? (((((arr_4 [i_0]) == (arr_0 [i_1 - 2]))))) : 11410346349088901253)) != ((((arr_1 [i_1 + 1] [i_1 - 2]) | (arr_1 [i_0] [i_1 + 3]))))));
                arr_6 [i_0] [i_1] [i_1 - 1] = 11410346349088901255;
                var_17 = (max((((!(arr_5 [i_1])))), 95));
                arr_7 [i_1] [i_1] [i_1] = (min(((((var_1 ? var_10 : var_5)) >> (var_2 + 1258728049))), (((~(arr_1 [i_1 + 2] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
