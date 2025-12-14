/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((min(5503023161273707942, var_4)));
    var_19 = 25709;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((var_8 ? (arr_2 [i_1]) : var_10)))));
                    var_21 = min((max((arr_0 [i_1 - 1]), (arr_7 [i_1 + 3] [i_2 - 1] [i_2 - 1]))), (arr_0 [i_1 - 1]));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_22 |= 20122;
                        arr_16 [11] = (min(27, -37));
                        var_23 = ((((-103903042 ? -7648192529723533611 : 5399515491640953436)) / ((max((arr_14 [5]), 7648192529723533610)))));
                        var_24 = (((arr_6 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 3]) > (((var_0 * -101) * (!var_11)))));
                    }
                }
            }
        }
        var_25 = (min(var_25, (arr_13 [i_0] [i_0] [i_0] [i_0])));
        arr_17 [i_0] = ((((!((((arr_4 [i_0]) ? (arr_8 [i_0] [5] [i_0]) : 61817))))) ? (arr_7 [i_0] [i_0] [i_0]) : ((var_6 ? 65535 : (arr_15 [1] [15] [16] [i_0] [0] [i_0])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_21 [i_6] |= 10965;
        var_26 = (((((-1 ? (arr_20 [0]) : 67))) || (arr_20 [i_6])));
    }
    var_27 |= var_3;
    #pragma endscop
}
