/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = 2719674051;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = ((arr_0 [i_0] [i_0]) && (((var_1 || 1575293256) && ((min(var_1, 4461022276949591523))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (i_1 % 2 == zero) ? ((max((min((arr_0 [i_3] [i_1]), var_8)), (((7870293212200472559 >> (((arr_11 [8] [i_1] [12] [i_1] [i_1] [i_0]) - 33151)))))))) : ((max((min((arr_0 [i_3] [i_1]), var_8)), (((7870293212200472559 >> (((((arr_11 [8] [i_1] [12] [i_1] [i_1] [i_0]) - 33151)) + 28641))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = (((arr_7 [i_0] [i_1] [i_1]) ? -32749 : ((max(7293, 0)))));
                    }
                }
            }
        }
        var_15 |= (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_16 = (max(var_16, -63));
        arr_15 [i_4] [i_4] = var_7;
        var_17 = (arr_13 [i_4]);
    }
    var_18 = var_8;
    #pragma endscop
}
