/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, ((max((max((25 & 231), (((arr_2 [i_2 + 1] [i_1 + 2]) ? var_3 : (arr_2 [i_0] [i_0]))))), (!21))))));
                    var_11 = var_5;
                    var_12 = (max(var_12, ((((((((((arr_6 [i_0] [i_1 + 2] [i_2]) ? (arr_0 [i_0]) : var_8))) ? (arr_0 [i_0]) : (arr_2 [i_1] [i_0])))) || ((((arr_2 [20] [i_1]) ? var_5 : 33423360))))))));
                    var_13 = 3505649200;
                }
            }
        }
    }
    var_14 = (min((((((var_1 ? 0 : var_5))) ? var_5 : (var_1 / var_8))), (((var_4 ? var_6 : var_4)))));
    #pragma endscop
}
