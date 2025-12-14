/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_5;
    var_18 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (i_1 % 2 == zero) ? ((((((var_12 / (((var_7 >> (((arr_5 [i_0] [i_1 - 1] [i_2]) - 16316)))))))) ? (((((var_10 << (((arr_4 [i_0 - 1] [i_1]) - 6296762286650858922))))) ? (arr_5 [1] [i_1] [i_2]) : var_7)) : (max((min((arr_1 [i_0]), (arr_0 [i_0 + 3] [i_0 + 3]))), var_2))))) : ((((((var_12 / (((var_7 >> (((arr_5 [i_0] [i_1 - 1] [i_2]) - 16316)))))))) ? (((((var_10 << (((((arr_4 [i_0 - 1] [i_1]) - 6296762286650858922)) - 9125280396600960628))))) ? (arr_5 [1] [i_1] [i_2]) : var_7)) : (max((min((arr_1 [i_0]), (arr_0 [i_0 + 3] [i_0 + 3]))), var_2)))));
                    var_20 = (min(var_20, ((((((arr_7 [i_0 + 2] [12] [i_2] [i_2]) + 9223372036854775807)) >> (((arr_2 [i_0 + 3] [i_1 + 1]) - 107)))))));
                    var_21 |= ((max(var_8, (arr_2 [i_2] [14]))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_22 = (((((1 ? (((~(arr_0 [4] [i_3])))) : (arr_7 [i_0] [i_1 + 1] [14] [i_3])))) ? (arr_7 [i_0 - 2] [i_0 + 1] [i_2] [i_3]) : (arr_6 [i_0 - 3] [i_1 + 1] [i_2])));
                        var_23 = (min(var_23, (((!((max((((!(arr_0 [i_2] [i_2])))), (arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_1 - 1])))))))));
                        var_24 = ((1 * (((arr_3 [i_1]) / (((arr_9 [i_1] [i_1 - 1] [i_1]) ? var_8 : (arr_0 [i_0 - 3] [1])))))));
                        var_25 = (((min((((!(arr_6 [1] [i_1 + 1] [1])))), var_13))) ? ((-(arr_2 [i_0 - 2] [i_1 - 1]))) : var_16);
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_26 = -var_8;
                        var_27 = (min(var_27, (((!(((arr_5 [i_1] [i_1] [i_4]) >= (min(var_14, var_9)))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
