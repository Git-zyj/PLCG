/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = ((~(((155 <= 255810732996962628) ? 16348708721186965301 : (arr_3 [i_0] [i_1])))));
                arr_6 [i_0] [i_0] &= (((arr_0 [i_0]) / (((max((arr_3 [i_1] [8]), (((var_9 != (arr_5 [i_0] [6]))))))))));
            }
        }
    }
    var_11 = (~var_9);
    var_12 = 2098035352522586339;
    var_13 = var_7;
    #pragma endscop
}
