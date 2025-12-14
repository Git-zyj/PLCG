/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (min(-64, -68));
                arr_6 [i_0] = (max(((max(var_7, (arr_0 [i_1 - 1])))), (((arr_0 [i_1 + 1]) ? var_16 : (arr_0 [i_1 + 1])))));
            }
        }
    }
    var_17 = (min((min(((3 ? -92 : -23)), 45)), var_9));
    #pragma endscop
}
