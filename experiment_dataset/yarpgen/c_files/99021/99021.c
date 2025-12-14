/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = var_7;
                arr_7 [12] |= (max((min((arr_2 [i_0] [i_0 + 2]), ((0 ? 2287828610704211968 : (arr_2 [i_0] [10]))))), 16158915463005339648));
                var_19 = (max(var_19, ((((arr_2 [i_0] [i_1]) + ((((((arr_4 [i_0]) ? 21331 : (arr_5 [i_1])))) ? (((arr_0 [i_1]) / 16158915463005339656)) : -1)))))));
            }
        }
    }
    var_20 = (~var_12);
    var_21 = (max((max(var_17, var_17)), var_11));
    var_22 = (min((var_16 != 0), (!-var_1)));
    #pragma endscop
}
