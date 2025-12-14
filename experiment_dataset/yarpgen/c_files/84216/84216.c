/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((((arr_0 [i_1]) ? ((63 ? -99 : 1)) : ((99 - (arr_6 [i_2] [i_1 + 1] [i_0]))))));
                    var_17 += (arr_7 [i_0] [i_1] [i_1]);
                    var_18 = (min(-1, 2214498622));
                }
            }
        }
    }
    var_19 = (var_12 + 62);
    var_20 = (~194);
    #pragma endscop
}
