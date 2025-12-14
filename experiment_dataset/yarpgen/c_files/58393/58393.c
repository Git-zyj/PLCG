/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = ((((((!var_7) ? (min(var_11, 6346917018865844633)) : ((-73 ? 1 : 18446744073709551615))))) ? var_4 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((((((arr_5 [i_0] [i_0]) > (arr_3 [i_0] [i_0] [i_0])))) | ((min((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_1])))))))));
                var_20 = (max(((-(((arr_3 [i_0] [i_1] [i_0]) ? 1 : (arr_0 [i_0] [i_0]))))), (!-1183690632)));
                arr_6 [0] [i_1] [0] = (((max(((max((arr_4 [i_0]), 1))), (min(13229, 4602678819172646912)))) + (arr_2 [i_0])));
            }
        }
    }
    var_21 = ((13229 != (max(((max(183, 1))), (var_14 / var_9)))));
    #pragma endscop
}
