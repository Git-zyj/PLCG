/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((min(74, var_10))), (var_7 ^ 4294967295)));
    var_15 = (((-113 ? ((var_6 ? var_6 : 434760405) : (var_12 <= var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((((arr_3 [2] [i_0]) + 3497165744)) + ((18241 ? var_11 : 797801558))))) ? var_3 : ((min(((max(94, (arr_3 [i_0] [i_1 - 2])))), (((arr_4 [i_1] [i_0]) ? (arr_0 [i_0] [i_1]) : var_6)))))));
                var_16 += ((arr_1 [i_0]) ^ (min(-24675, 734387524)));
            }
        }
    }
    #pragma endscop
}
