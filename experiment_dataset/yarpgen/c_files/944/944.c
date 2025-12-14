/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, 0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 -= ((arr_4 [i_0 - 3] [i_0 - 1]) < -1);
                arr_7 [i_0] [i_0] = (((((((8106563882867770103 ? -18 : (arr_4 [i_1] [i_0 + 1])))) ? (min(6567805361454137961, (arr_6 [i_0]))) : var_8)) | ((max(((0 ? 1 : -16095)), 5848)))));
            }
        }
    }
    #pragma endscop
}
