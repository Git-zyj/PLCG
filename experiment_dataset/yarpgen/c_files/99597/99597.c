/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (var_4 | var_10);
    var_18 += (15105 % -7855598597891167428);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = var_1;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_20 += (min(1526204699, 42));
                        arr_10 [i_0] [i_1] [i_2] [i_0] [i_0] = var_9;
                    }
                }
            }
        }
        var_21 = (max(var_21, (arr_6 [i_0] [1] [i_0] [i_0] [i_0])));
        var_22 = (min(var_22, (((((max(((var_16 ? (arr_9 [i_0] [2] [i_0] [i_0] [2] [i_0]) : (arr_3 [14]))), (arr_7 [i_0] [4] [i_0] [4] [14])))) ? ((((var_0 < (arr_2 [16] [i_0] [i_0]))))) : (min((arr_2 [1] [i_0] [1]), var_8)))))));
    }
    #pragma endscop
}
