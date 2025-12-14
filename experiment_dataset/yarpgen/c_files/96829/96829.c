/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = arr_0 [i_0];
                var_13 = ((~(((arr_3 [i_0] [i_1]) ? (arr_3 [6] [i_1]) : (arr_3 [i_0] [i_1])))));
                arr_5 [i_1] [i_1] = ((((906201175 ? 24877 : 24880))) ? (min(-4058187726655780244, (arr_0 [i_0]))) : ((((((arr_2 [i_0]) == 945688052)) ? (((((-127 - 1) && (arr_1 [i_1] [i_0]))))) : (((arr_1 [i_0] [i_1]) - (arr_2 [i_1])))))));
                var_14 = (min(var_14, (~-90)));
                var_15 = (((((((((arr_4 [i_1] [i_0]) ? (arr_1 [i_1] [i_1]) : 25975))) != (-9223372036854775807 - 1))))) + ((9182999797865068333 & (arr_4 [i_0] [i_1]))));
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
