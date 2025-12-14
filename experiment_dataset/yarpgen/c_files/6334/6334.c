/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [18] [i_0] = (((~-13) || (((~(arr_3 [i_1]))))));
                arr_7 [i_0] = (((max((arr_3 [i_0 + 1]), (arr_2 [i_0 - 1]))) ^ (arr_3 [i_1 - 1])));
                var_19 = min(var_6, -502376692);
                arr_8 [i_0] = 274485412;
            }
        }
    }
    var_20 = var_11;
    var_21 = (~var_6);
    #pragma endscop
}
