/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((0 + var_11) ? (((var_7 + 9223372036854775807) << (((min(var_10, var_4)) - 1437596689)))) : ((((var_3 || var_14) - (min(var_12, var_9)))))));
    var_21 = (min(var_21, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (min(var_22, ((((arr_4 [i_0] [i_0] [i_0]) == (arr_3 [i_0]))))));
                var_23 = ((((max((arr_4 [10] [10] [i_1]), var_13))) ? (arr_0 [i_1]) : (((arr_3 [i_0]) ^ 1))));
            }
        }
    }
    #pragma endscop
}
