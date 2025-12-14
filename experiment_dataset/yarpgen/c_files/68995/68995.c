/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((var_9 - (max(var_9, var_8)))), var_2));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (arr_5 [i_0 + 3] [i_1] [i_1])));
                    var_17 = (min((arr_4 [i_2]), ((-21699 ? (arr_4 [i_2]) : (arr_4 [i_2])))));
                    var_18 = var_3;
                    arr_6 [i_0] [14] [0] &= ((((max(((-(arr_3 [i_0]))), (((arr_0 [13]) ? (arr_3 [i_0]) : var_12))))) >= (((arr_5 [i_2] [i_1] [i_0 + 3]) ? var_4 : (arr_5 [i_2] [15] [15])))));
                    var_19 = ((((((-127 - 1) ? ((var_5 * (arr_2 [i_0] [i_2]))) : (var_3 == var_1)))) ? var_12 : (((-127 - 1) ? 157 : 1321695351469058292))));
                }
            }
        }
    }
    var_20 = var_8;
    var_21 = (min(var_21, ((min((!1321695351469058267), (((!var_8) ? (max(var_6, var_13)) : (var_1 != var_2))))))));
    #pragma endscop
}
