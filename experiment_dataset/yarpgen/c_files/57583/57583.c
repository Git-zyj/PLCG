/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [19] [i_2] = (min(((max((((arr_1 [18]) ? 216275626 : 3194193925)), (~-117)))), (((arr_0 [i_0] [i_1]) ? -7861239943036249708 : (arr_4 [i_0])))));
                    var_11 = (min(var_11, (((-7861239943036249705 ? -7861239943036249698 : (arr_4 [i_0]))))));
                }
            }
        }
    }
    var_12 = (min(((~(min(17385181825671091836, 15757453069145624687)))), 10853));
    #pragma endscop
}
