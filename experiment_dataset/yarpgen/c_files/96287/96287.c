/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_3;
    var_12 = (min(((max(((23485 ? var_2 : -311472070)), var_3))), (max((42056 * var_0), (var_1 / var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (min((((arr_1 [i_1]) | 197)), (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])))));
                arr_8 [i_0] = (min(var_8, (((-361657493 + 2147483647) << (42033 - 42033)))));
                var_14 = (min(((6531 ? (arr_2 [i_1] [i_1]) : var_2)), (((2074038137 ? 197 : 101)))));
            }
        }
    }
    var_15 &= (((((-(max(var_3, var_10))))) ? -var_7 : var_3));
    #pragma endscop
}
