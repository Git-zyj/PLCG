/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (min((max((((var_11 & (arr_4 [i_0])))), (min(13964432183532918099, 1)))), ((min((max(3072, (arr_1 [i_1]))), ((max(0, 39))))))));
                arr_6 [3] = (arr_5 [i_0] [i_0] [i_1]);
                var_19 = (min(var_19, ((((((arr_0 [i_1]) > (arr_4 [i_1]))) ? (!var_14) : (arr_4 [i_1]))))));
            }
        }
    }
    var_20 = max(((((~18446744073709551615) ? (4294967283 <= 702494658) : (~0)))), (((38 ^ 2) ? var_14 : (~var_12))));
    var_21 = ((3592472637 ? var_10 : (min((var_11 && 74), ((var_15 ? var_10 : var_3))))));
    var_22 = 12;
    #pragma endscop
}
