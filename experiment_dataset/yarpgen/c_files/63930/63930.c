/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min(2955720201, 0)), (max(25082, 4241559174))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (min(-45, (min((max(53408122, -26385)), ((max(-26915, -90)))))));
                    arr_7 [i_0] [i_0] [i_2] = (~1553888317);
                }
            }
        }
    }
    var_22 = min(((max(32759, 53408122))), 57168);
    #pragma endscop
}
