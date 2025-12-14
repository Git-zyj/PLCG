/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;
    var_15 -= ((((max((((2143016776 ? var_8 : 99))), (min(var_0, var_12))))) ? (678524483 > 2060656791875329291) : -6240153568698404361));
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_17 -= ((((((arr_0 [i_0]) | (arr_0 [i_0])))) ? ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : ((var_4 ? (arr_0 [i_0]) : 6839651359934573002))));
        var_18 = (max(((max((arr_1 [i_0]), -50838))), ((((max(var_9, var_1))) ? ((var_3 ? 5901816267191328056 : 111)) : var_10))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (((arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 2]) % (max(11607092713774978604, (arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 1])))));
                    var_20 = (max(var_20, (arr_0 [i_2])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_21 *= var_10;
        var_22 -= ((26000 - ((min((arr_4 [i_3]), (arr_4 [i_3]))))));
        var_23 = ((!(arr_1 [i_3])));
    }
    var_24 = ((var_6 % (max(var_13, (~0)))));
    #pragma endscop
}
