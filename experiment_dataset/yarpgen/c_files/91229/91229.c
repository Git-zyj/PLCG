/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = (min(-3917729171, var_3));
    var_15 = ((-((var_5 << (var_7 - 6909060627903567309)))));
    var_16 = ((6 & ((-711453456277288813 | (var_11 >> 6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((((min((arr_4 [i_1] [i_1]), (arr_0 [i_0])))) ? (((4294967289 | (1 && 65531)))) : (min(var_3, ((((arr_2 [i_0] [i_1]) ? 3879140324 : (arr_2 [i_0] [i_1]))))))));
                arr_6 [i_0] [i_1] = ((-((-var_10 ? ((((arr_4 [i_0] [i_1]) != var_0))) : -var_4))));
            }
        }
    }
    #pragma endscop
}
