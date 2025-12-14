/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (~var_13)));
    var_19 = (var_13 ^ 1);
    var_20 = ((-112 ? 1 : 523012423502218336));
    var_21 = var_16;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((-(max((~1), 1))));
        arr_3 [i_0] = ((var_10 ? (arr_1 [i_0]) : 65262));
        arr_4 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] |= (1 * 3531075289767604875);
        var_22 = (max((arr_5 [i_1]), (((arr_5 [i_1]) / (arr_5 [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_18 [i_3] [i_2] = var_16;
                        arr_19 [i_4] [i_3] [i_1] [i_4] = 1;
                    }
                }
            }
        }
        arr_20 [15] [15] = ((1 ? (-127 - 1) : (~9223372036854775790)));
    }
    #pragma endscop
}
