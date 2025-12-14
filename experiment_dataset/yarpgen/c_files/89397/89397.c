/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0 + 2] [i_0]) : 11373))) ? (((arr_0 [i_0] [2]) ? var_12 : (arr_0 [1] [11]))) : (~73))) & ((((92 ? 121 : 2664244380))))));
                arr_7 [10] [i_0] [i_1] = (((arr_4 [i_0] [i_1]) && (arr_5 [i_0] [i_0])));
            }
        }
    }
    var_14 = var_4;
    #pragma endscop
}
