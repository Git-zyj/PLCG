/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (min(var_19, ((((arr_0 [i_0]) >= (arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((405548628299473328 ? 8619543272968592758 : 18041195445410078288));
                    var_21 = (min(var_21, ((((arr_4 [i_0]) ? -1337499858 : 116)))));
                    var_22 &= var_6;
                    arr_7 [i_1] [i_1] = ((15029206924551308609 ? 0 : (arr_1 [i_1 + 1] [i_1 - 1])));
                }
            }
        }
        var_23 = var_11;
        var_24 += var_6;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_25 -= var_2;
        var_26 = (max(var_26, (15762598695796736 && 109)));
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        arr_15 [i_4] = (((((-(arr_14 [i_4])))) - (min(((var_14 ? (arr_1 [i_4] [0]) : (arr_5 [12] [i_4] [i_4]))), ((min(524287, (arr_6 [9] [i_4] [i_4] [i_4]))))))));
        var_27 = ((~((((max(var_15, var_11))) ? var_9 : (arr_13 [i_4 + 2])))));
    }
    var_28 = (min(var_28, var_16));
    #pragma endscop
}
