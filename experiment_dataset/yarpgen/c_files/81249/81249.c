/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (((((((max((-2147483647 - 1), var_12))) ? (-76 & 137102621765440427) : ((2645863968 ? 10685106787405730582 : 42))))) ? ((((~(arr_0 [1]))))) : (((arr_1 [i_1]) ? 8897048144665112385 : (arr_1 [i_0])))));
                var_15 = (((((910323550 ? (min((arr_4 [13] [i_0]), 2147483647)) : 2147483647))) ? (arr_0 [15]) : 2375710873));
            }
        }
    }
    var_16 = ((((min(4544274860068499600, (~1)))) ? var_7 : (!var_0)));
    var_17 = ((-((max(var_4, var_10)))));
    #pragma endscop
}
