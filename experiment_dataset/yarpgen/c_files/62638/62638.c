/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = ((~(!var_13)));
                var_15 = arr_1 [i_1];
                var_16 *= ((~(min((arr_4 [i_1 + 2] [i_1 + 2] [i_0 + 1]), -11))));
                arr_5 [i_1 - 1] [i_0] = (0 || 1);
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = ((-(max((arr_2 [i_2] [i_2] [i_2]), (arr_0 [i_2])))));
        var_18 = (max(9977106148056530607, (arr_1 [i_2])));
        var_19 = var_0;
        arr_8 [i_2] = (((((0 >= (min(var_9, (arr_1 [i_2])))))) >= 243));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_20 = ((!((min((max(var_7, var_11)), (arr_4 [i_3] [i_3] [i_3]))))));
        var_21 = ((-(arr_3 [i_3])));
        arr_11 [i_3] |= ((((((((8469637925653021007 / (arr_3 [i_3])))) ? 2377256590 : (!var_7)))) <= (arr_1 [i_3])));
    }
    var_22 = (min(var_22, (max(var_7, 1678458145))));
    var_23 = (1357862656 - 12);
    var_24 = (max(var_12, var_5));
    #pragma endscop
}
