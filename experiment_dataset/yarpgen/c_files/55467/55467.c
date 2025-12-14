/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, var_9));
                    var_16 -= var_8;
                }
            }
        }
        arr_8 [i_0] = ((+(((var_9 - var_0) ? ((var_10 ? 51234 : 7)) : (max(7, -16367))))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_11 [i_3] [8] = (max((arr_4 [i_3] [i_3]), 5543027133122519151));
        arr_12 [i_3] = ((((min((0 - 29360128), var_10))) ^ var_6));
        var_17 = (max((min(((var_4 ? (arr_3 [i_3] [12] [i_3]) : var_11)), var_1)), (((-16348 < ((-4708965147355209038 ? 29504 : (arr_5 [10] [i_3] [i_3] [i_3]))))))));
    }
    var_18 = (max(7, var_1));
    var_19 &= (min((max(16366, ((var_1 ? var_3 : 7)))), ((((var_4 ? var_14 : -11746))))));
    #pragma endscop
}
