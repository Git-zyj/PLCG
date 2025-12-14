/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((0 ? var_11 : var_3));
    var_13 = ((-(max((var_7 != var_10), (var_0 - var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 |= (~(((arr_7 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_2]) ? (arr_7 [i_0 + 2] [i_1 - 1] [1] [i_0]) : (arr_7 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_0 + 2]))));
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((((max((arr_0 [i_0 + 2]), (arr_1 [i_1 + 1])))) ? var_7 : (var_9 + 2694)));
                    var_15 = 1070703164231601655;
                    var_16 = (((((2369 ? -107 : (-9223372036854775807 - 1)))) ? (((((63173 ? (arr_7 [i_0] [i_1 - 1] [i_1 + 1] [3]) : (arr_0 [i_0])))) ? ((-106 ? 1 : 3458764513820540928)) : ((111 ? 7235917312195934229 : -112)))) : (((var_1 | -74) ? 1 : (~-7235917312195934229)))));
                }
            }
        }
    }
    var_17 = (10 != var_5);
    #pragma endscop
}
