/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((max(var_5, 25))) ? (var_10 * 11350169187491192008) : (var_6 & var_6))) < (((((213 ? 1 : var_3))) ? (min(var_5, var_7)) : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = -8589934591;
                arr_6 [i_0 + 1] [i_1 - 2] [i_0] = (((max((-1 * -46), (((arr_2 [i_0]) ? 11280066087080011088 : (arr_0 [i_0]))))) != ((max(((-(arr_4 [i_1] [i_1 - 3]))), ((-24744 ? 1 : -10413)))))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        var_12 += -22423;
        var_13 = ((((((((arr_8 [i_2] [i_2 - 2]) <= (arr_7 [i_2] [1]))) ? (((min((arr_7 [i_2] [12]), -20814)))) : ((198897881 ? var_4 : var_5))))) | (((((((arr_10 [i_2 - 2] [i_2]) >= 1)))) + (max(var_1, 13138161361115382466))))));
    }
    var_14 = ((1 ? -10409 : 1));
    #pragma endscop
}
