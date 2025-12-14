/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 += -var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = -1289568371;
        var_21 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_22 = min((arr_3 [i_1] [i_1]), (min((arr_0 [i_1]), (arr_2 [17] [i_1]))));
        var_23 += ((0 ? 1 : 560575591));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_24 = ((((min(16178853542472592088, 20664))) ? (arr_6 [i_2] [i_2]) : (arr_3 [i_3] [i_3])));
                    var_25 = (((83 | 38543) ? ((var_14 & (arr_15 [i_2] [i_2] [i_4]))) : (((~(arr_16 [i_2] [i_3] [i_3]))))));
                }
            }
        }
        var_26 = min(1446211808, ((-(((!(arr_7 [i_2])))))));
    }
    var_27 = (min(var_27, var_11));
    #pragma endscop
}
