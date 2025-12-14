/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3778567880;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((6726005278089259812 <= 2086156799) * (arr_3 [i_0] [i_0] [i_0]));
                arr_4 [4] |= (!38016);
                arr_5 [i_0] [i_0] = (max(var_2, var_10));
            }
        }
    }
    var_14 = var_10;
    #pragma endscop
}
