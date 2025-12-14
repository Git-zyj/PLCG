/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99814
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
                arr_4 [i_0] [10] [10] = min(((((6 ? 6 : var_7)) | (~var_14))), (((~(arr_1 [i_0])))));
                var_19 = (min((min((((!(arr_0 [i_1])))), (min(var_2, 6)))), (min((arr_2 [i_1] [i_1]), (arr_2 [i_0] [i_1])))));
            }
        }
    }
    var_20 = ((var_5 ? (var_14 * var_9) : var_10));
    #pragma endscop
}
