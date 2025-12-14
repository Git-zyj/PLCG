/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 226;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1 - 1] [i_1] [9] = ((var_8 ? -255 : (((((max(var_12, -105))) && (arr_5 [i_1 + 1] [i_0 - 2]))))));
                var_21 ^= 201;
                arr_7 [i_0] [i_0] [i_0 - 1] = -1169177090;
            }
        }
    }
    var_22 = max((((((45 ? 13359 : var_9))) & (max(7, var_16)))), var_9);
    var_23 = var_8;
    var_24 = (min(var_24, ((max(var_8, ((((max(var_1, 255)) >= ((max(0, var_10)))))))))));
    #pragma endscop
}
