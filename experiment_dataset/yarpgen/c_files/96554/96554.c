/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = 4611123068473966592;
                arr_9 [1] [i_1] [i_1] &= (((arr_2 [i_1] [i_0 + 2]) && (-4611123068473966568 || 12288)));
                var_14 = (max(var_14, (((2006600017 ? (arr_3 [6]) : (arr_5 [i_0]))))));
                arr_10 [i_0] [i_0] [i_0] = ((((((4 ? 18896 : (arr_4 [i_0] [i_0] [i_1]))))) || -7522185509053017907));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_15 = (max(var_15, (((((168 ? 25026 : 4611123068473966602)))))));
                    arr_13 [i_0] [i_1] [i_0] [i_2] = (((arr_11 [1] [i_0 + 1] [8] [i_0 + 1]) ? (-27706 > 4611123068473966592) : ((((min(183, (arr_1 [i_0] [6])))) ? -4611123068473966560 : (arr_6 [i_0] [i_0])))));
                }
            }
        }
    }
    var_16 = (+((((var_7 != 1) > (min(-27715, 3721318610351318836))))));
    var_17 = var_0;
    var_18 = var_11;
    #pragma endscop
}
