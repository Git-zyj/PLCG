/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min(var_2, var_7)), ((min(var_7, 170)))));
    var_12 = (((((((121 ? var_0 : -1))) ? 52 : (~-49))) == ((-50 ? -70 : -92))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = min((min((min((arr_3 [i_0] [i_0] [8]), 48)), ((((arr_3 [1] [i_1] [i_1]) < -80))))), ((max(-46, -67))));
                arr_4 [i_0] = (((((((var_5 ? (arr_0 [i_1] [i_0]) : (arr_3 [i_0] [i_1] [i_1])))) ? ((96 ? 209 : 64)) : (((arr_3 [i_0] [3] [i_0]) + -56)))) << (((min(((198 ? (arr_1 [i_1]) : var_2)), ((var_9 | (arr_2 [i_0]))))) - 27))));
                arr_5 [i_0] = ((var_0 ? (~var_8) : ((((min(155, 1))) ? (arr_1 [i_0]) : (arr_2 [i_0])))));
            }
        }
    }
    var_14 = var_3;
    #pragma endscop
}
