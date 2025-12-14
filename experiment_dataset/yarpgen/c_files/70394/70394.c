/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 18446744073709551606;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_12 *= ((((((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (((-32729 + 2147483647) << (9415978907972281511 - 9415978907972281511))) : (~var_6)));
                var_13 = ((-9223372036854775807 ? (arr_0 [i_1 + 1] [i_1 - 3]) : (max(((((arr_2 [i_1] [i_1] [i_1 - 3]) ? (arr_1 [i_0]) : (arr_1 [i_0])))), -2508495788102150511))));
                var_14 = ((((max((arr_2 [i_1 + 1] [i_1 - 3] [i_1 + 1]), -6251298292163804074))) ? ((max((arr_2 [i_1 + 1] [i_1 - 3] [i_1 + 1]), 179))) : (((arr_2 [i_1 + 1] [i_1 - 3] [i_1 + 1]) % (arr_2 [i_1 + 1] [i_1 - 3] [i_1 + 1])))));
            }
        }
    }
    #pragma endscop
}
