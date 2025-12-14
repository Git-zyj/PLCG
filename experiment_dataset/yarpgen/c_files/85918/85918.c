/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = (((min((var_8 / var_0), var_8)) | ((max(var_7, (!var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0 - 3] [i_0] = 1;
                var_20 = (min(var_20, ((max((((arr_0 [i_0 + 1] [i_0 - 2]) + (arr_0 [i_0 + 1] [i_0 + 1]))), ((min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 - 3] [i_0 + 1])))))))));
                var_21 ^= ((arr_4 [i_1] [12] [i_1]) * (((!var_4) * ((max(var_5, (arr_0 [i_0 - 3] [i_0 - 3])))))));
                var_22 = (((7 + 1) ? (arr_4 [i_0] [i_0] [i_0 + 1]) : (arr_1 [i_1])));
            }
        }
    }
    var_23 = (min(((((min((-9223372036854775807 - 1), 1)) + var_1))), var_3));
    var_24 = (min(((var_1 & (~1))), 1));
    #pragma endscop
}
