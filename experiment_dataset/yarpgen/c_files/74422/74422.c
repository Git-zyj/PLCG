/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= -234169840;
    var_16 = var_9;
    var_17 = (max((((16374 ? var_0 : var_9))), (max(var_2, var_13))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        var_18 = (max(var_18, 1));
                        arr_10 [i_0] [i_1] [i_2] [i_2 + 1] [2] = (max(57929, (max((arr_8 [i_3] [i_3] [i_3 - 2] [i_0]), 6427169010832898482))));
                    }
                    arr_11 [i_0] [i_1] [i_2] [i_2] |= (!(((13035410369262239971 ? 68719476735 : 32760))));
                }
            }
        }
    }
    #pragma endscop
}
