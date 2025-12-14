/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_1 ? (var_6 ^ 0) : ((((-6806157274396157444 ? 22 : -29885)) & var_1)))))));
    var_16 = (var_8 ? -26792 : var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_17 = 2042291977;
                arr_6 [i_1] |= (min((((arr_5 [i_0] [i_1 + 1]) ^ 10)), ((2042291977 ? (arr_2 [i_1] [i_1 - 1]) : (arr_5 [i_0] [i_1 + 3])))));
                arr_7 [i_1 + 3] = ((((((arr_1 [i_1 + 1]) ? (arr_2 [i_1 + 3] [i_1]) : (arr_1 [i_1 + 1])))) ? (arr_1 [i_1 + 3]) : ((65535 << (-19224 + 19236)))));
                var_18 = 65526;
            }
        }
    }
    #pragma endscop
}
