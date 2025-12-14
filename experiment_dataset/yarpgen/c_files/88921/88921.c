/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (((((((((var_13 || (arr_0 [i_1]))))) | (arr_1 [6])))) ? ((21314 ? -8825165759004645391 : 685126747)) : ((((3550 ? (arr_4 [i_0] [i_1] [i_1]) : 17179869183)) + ((max(-685126748, 1309752793)))))));
                var_16 = (max(var_16, (((((max(98, (arr_0 [0])))) || (arr_3 [8]))))));
                var_17 = (((arr_4 [i_0] [3] [i_1]) ? var_7 : (min(var_1, (arr_2 [i_0])))));
            }
        }
    }
    var_18 = (max(((~(4 / 9223372036854775807))), (((var_2 / ((max(24, var_6))))))));
    #pragma endscop
}
