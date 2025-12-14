/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = ((!((((~3) ? (18446744073709551607 || var_11) : (((((arr_0 [i_0]) + 2147483647)) << (751811157 - 751811157))))))));
                var_15 = max(((var_7 ? 9154833747291113412 : (arr_3 [i_0] [i_0]))), (arr_1 [i_0]));
            }
        }
    }
    #pragma endscop
}
