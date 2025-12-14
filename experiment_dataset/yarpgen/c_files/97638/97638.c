/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [23] = ((-((18446744073709551615 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_1])))));
                var_18 -= ((-(arr_3 [i_0] [i_1])));
                var_19 = (min(((((((65529 ? 65523 : 4294967295))) && 10541))), (arr_3 [i_1] [i_0])));
                var_20 -= var_12;
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
