/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (((-49 ? 9044 : ((((arr_3 [i_0] [i_0]) > 646731232))))));
        var_16 = ((((((arr_0 [i_0]) ? 16646144 : (arr_3 [i_0] [i_0])))) ? (((~(min(42837, var_6))))) : (min(var_10, ((((arr_3 [i_0] [i_0]) ? var_3 : -17)))))));
        var_17 = min((max((arr_2 [i_0]), (-127 - 1))), (arr_2 [i_0]));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_18 = (min(((((var_2 == var_5) ? (((-1080754588 ? var_2 : 27))) : (-9223372036854775807 - 1)))), (28 | -52)));
                arr_9 [i_1] [i_1] [i_2] = (arr_8 [i_2] [i_2] [14]);
                var_19 = ((((min(-1510860373, (arr_7 [i_1 - 1] [i_1] [i_1 - 1])))) ? (arr_7 [i_1 - 2] [i_1 + 1] [i_1 + 1]) : (arr_5 [i_1 - 2])));
                var_20 = (max((((arr_6 [i_1 - 3]) ? (arr_6 [i_1 - 3]) : var_13)), (arr_8 [i_2] [i_2] [i_1 - 1])));
            }
        }
    }
    #pragma endscop
}
