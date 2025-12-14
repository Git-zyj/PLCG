/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (((min((min((arr_1 [i_0]), 0)), ((1 ? 4294967295 : 1))))) ? ((-124 ? 0 : (var_1 + var_16))) : var_16);
                var_19 = (((((var_14 ? (arr_3 [i_1] [i_1 - 1] [i_1]) : (arr_3 [i_1] [i_1 - 1] [i_1])))) ? ((min(var_11, (-32767 - 1)))) : (26091 > 511)));
                arr_5 [i_0] [i_0] [i_0] |= (max(4, ((((((666520395862982083 ? 4294967292 : 147))) ? -var_10 : 1)))));
            }
        }
    }
    var_20 = ((-(1 - 18)));
    #pragma endscop
}
