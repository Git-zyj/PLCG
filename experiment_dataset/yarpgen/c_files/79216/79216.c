/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (max(-8403839421328252498, 622063147));
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((var_6 % (((arr_6 [i_1 + 1] [i_1 + 1]) ? (((-453639461 ? var_14 : 8784))) : (max(483381703367009423, (arr_2 [i_0] [i_1 - 1])))))));
                var_18 += (max((arr_3 [i_0] [i_1 + 1]), (max((arr_3 [i_0] [i_1 + 1]), 18446744073709551599))));
                arr_7 [i_0] [i_1] [i_1] = ((((((arr_0 [i_1 + 2] [i_1 - 1]) ? var_7 : (arr_0 [i_1 + 2] [i_1 + 1])))) ? (max(18279894759948838472, (arr_0 [i_1 - 1] [i_1 - 1]))) : ((((arr_0 [i_1 + 1] [i_1 + 1]) ? (arr_0 [i_1 + 1] [i_1 + 2]) : (arr_2 [i_1 + 1] [i_1 + 2]))))));
                arr_8 [0] [i_1] = ((!(((var_0 + (max(var_0, (arr_0 [0] [i_0]))))))));
            }
        }
    }
    var_19 = ((var_6 >> (var_8 + 142)));
    #pragma endscop
}
