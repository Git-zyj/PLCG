/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 -= ((((((arr_2 [i_0]) ? -514042594 : (arr_3 [i_0])))) == ((((min(var_6, (arr_2 [i_0])))) ? (!-724034082932993296) : (~-724034082932993288)))));
                var_19 = (min(var_19, ((min((min((724034082932993297 | var_7), (~var_14))), (arr_1 [i_0]))))));
            }
        }
    }
    var_20 = (-724034082932993288 < -724034082932993278);
    var_21 = (724034082932993296 >= -724034082932993291);
    var_22 = ((((min(var_4, 64668))) < -724034082932993291));
    #pragma endscop
}
