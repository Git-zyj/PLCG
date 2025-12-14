/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!-16380);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = ((+(((arr_3 [i_0 + 1]) ? (arr_3 [i_0 - 1]) : (arr_2 [i_0 + 1])))));
                var_16 = (min(var_16, ((((98 - 118) > (arr_5 [i_0 + 1] [i_0 + 1]))))));
                arr_6 [i_0] [i_0] [i_0] = (min((((var_5 <= var_11) & (arr_4 [i_0 - 1] [i_0 - 1] [i_0]))), -6136));
            }
        }
    }
    var_17 = (((((-32754 ? var_13 : ((var_9 ? var_9 : var_10))))) ? (((!(((18446744073709551615 ? 224 : 1)))))) : (((min(var_3, var_8))))));
    #pragma endscop
}
