/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 *= ((3246868061680264966 ? (((!var_1) & (min(var_2, 23368)))) : (!4347)));
                arr_7 [i_0] [i_0] = (((min(var_4, (min(5045848627004446182, var_0)))) & ((((arr_1 [i_1]) % (arr_1 [9]))))));
                arr_8 [0] = (((var_1 + 23368) >= (!4913385611704739399)));
            }
        }
    }
    var_12 = ((((((!43166) == (-4583 > var_3)))) < -6208));
    #pragma endscop
}
