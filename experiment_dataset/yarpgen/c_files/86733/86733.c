/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [6] = (arr_0 [10] [i_1]);
                arr_7 [i_0] [i_0] = (!(((arr_2 [2] [i_1] [i_1]) > (arr_2 [i_1] [i_1] [i_0]))));
                arr_8 [i_0] = (max((max(139, ((var_8 / (arr_2 [i_0] [i_0] [i_1]))))), (arr_4 [i_0] [i_0])));
                var_15 *= (arr_0 [1] [1]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_11 [1] = ((63 == (arr_1 [i_2])));
        var_16 = (((arr_10 [i_2]) ? var_9 : (arr_0 [i_2] [i_2])));
    }
    var_17 = var_7;
    #pragma endscop
}
