/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_8 ? (max(var_4, var_4)) : (~31392))));
    var_13 = (min(var_13, ((max(((var_11 ? (max(-1218618447, -31393)) : (var_4 && var_1))), (((31393 == (~31393)))))))));
    var_14 = (min(var_14, var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((((arr_1 [14]) ? 1 : var_2)), (max((!-31416), ((var_1 << (((arr_0 [i_0]) - 36754))))))));
                var_15 = (((arr_1 [i_1]) ? 35798 : ((((((0 ? 0 : 35798))) && ((4294967274 || (arr_2 [i_0] [15] [i_0]))))))));
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}
