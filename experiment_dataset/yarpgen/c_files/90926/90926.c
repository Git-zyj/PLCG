/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (!var_10)));
    var_12 = ((((((((max(65, 17)))) * (var_1 >> var_4)))) ? var_10 : ((~((min(55, 36)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((max(173, (((((-31480 ? var_2 : 66))) ? (var_2 < -19) : (~250))))))));
                arr_5 [5] &= (min(((min(191, (arr_4 [i_0 - 4])))), ((-38 ? (((min(190, var_2)))) : 1097198717))));
                var_14 *= ((var_10 ? -var_8 : (((~193) ? (-17 != -37) : 12))));
            }
        }
    }
    #pragma endscop
}
