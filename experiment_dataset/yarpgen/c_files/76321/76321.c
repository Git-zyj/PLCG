/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [10] [i_1] [i_1] = (((min(0, (0 > 0))) * ((((((((arr_5 [i_0]) ? 57834 : 0))) && (arr_4 [i_1] [i_0])))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (max(((((arr_6 [i_0] [i_1 + 1] [i_2 - 2] [i_0 - 2]) >= 1256678683401606203))), ((-(arr_8 [i_1 - 1] [9] [i_1 - 1])))));
                    arr_11 [i_0] [i_1] [i_0] = (1910951026 || -832950941);
                    arr_12 [i_0] [i_1] [i_1] [i_2 - 3] = ((!(((((min(0, (arr_0 [1])))) & ((((arr_2 [i_1] [i_1]) != (arr_1 [i_0])))))))));
                }
            }
        }
    }
    var_11 = var_8;
    var_12 = (var_7 / var_7);
    var_13 = (max(var_7, 832950940));
    var_14 = (min(((var_6 ? var_4 : (var_4 | var_9))), -var_2));
    #pragma endscop
}
