/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = ((((((((0 ? -4211 : 32767))) ? ((var_0 ? (-9223372036854775807 - 1) : -32747)) : var_7))) ? ((min((!var_13), (!var_14)))) : var_12));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = (max((((-32739 != (((arr_5 [i_2] [i_1] [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_0] [i_1])))))), ((((((arr_1 [i_2] [i_1]) ? var_2 : var_8))) ? (((!(arr_5 [i_0] [i_1] [i_2])))) : (arr_4 [i_0] [i_2])))));
                    arr_8 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
                    arr_9 [i_0] [i_1] |= (min((min(((max(var_13, 106))), ((var_2 ? 1015325130 : -1015325131)))), (((arr_0 [i_2]) | ((min((arr_4 [i_0] [i_2]), -32755)))))));
                    arr_10 [i_2] [i_0] = ((127 ? var_8 : ((39955 ? var_9 : (arr_4 [i_0] [i_1])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_16 [i_3] = (((arr_2 [i_3]) ? (arr_11 [i_3]) : (((arr_0 [i_0]) / ((var_9 - (arr_1 [i_3] [i_4])))))));
                    arr_17 [i_4] [i_3] [i_4] = (((((((-(arr_0 [i_0])))) / var_7)) * 5435660200866839662));
                    arr_18 [i_0] [6] [i_0] = 7112287981371575390;
                }
            }
        }
        arr_19 [i_0] [i_0] = (((min((~var_0), (((arr_3 [i_0]) ? var_8 : 42277))))) ? (max(1, (min(39970, 2943046206531510273)))) : ((min((arr_6 [i_0] [0] [i_0] [i_0]), -var_6))));
        arr_20 [i_0] = ((((((((((arr_15 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : var_1))) <= (arr_3 [i_0]))))) & (((((arr_12 [i_0] [i_0]) != var_8)) ? (((arr_13 [13] [i_0]) | 32767)) : var_12))));
    }
    var_17 = (((((min(59015, var_8)))) - var_6));
    #pragma endscop
}
