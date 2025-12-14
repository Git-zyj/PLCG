/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((((((arr_3 [i_1]) + var_11))) && ((17359 && (arr_1 [i_0] [i_0])))));
            var_12 = (min(var_12, ((((~var_8) ? (arr_1 [i_1 - 2] [6]) : (arr_4 [i_1 + 2] [i_1 + 2]))))));
            arr_7 [i_0] [i_1] [i_0] = var_2;
        }
        arr_8 [i_0] = ((4567792656095806356 ? 0 : 12335790973652675066));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_11 [i_2] |= (min((9398934563491444589 ^ var_9), ((min(var_5, (arr_9 [i_2]))))));
        arr_12 [i_2] [i_2] = ((((var_11 ? 1 : ((min(var_1, var_8))))) <= (max((var_8 + 17348), ((((arr_9 [i_2]) > var_10)))))));
    }
    var_13 = (max(var_13, (max((max(((var_9 ? var_10 : var_10)), var_10)), (((min(var_0, var_3))))))));
    #pragma endscop
}
