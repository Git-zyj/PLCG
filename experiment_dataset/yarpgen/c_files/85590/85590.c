/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = -var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [7] = (~(max(40, (~64))));
                var_19 = ((-(((~-5673702211042753944) ? 13028 : (~18300)))));
                arr_7 [i_0] = (max(((~(max(-2036372876, (arr_0 [i_0] [i_0]))))), (max(25999, 2036372876))));
            }
        }
    }
    #pragma endscop
}
