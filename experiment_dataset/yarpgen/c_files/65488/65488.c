/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (~-var_10);
                var_16 = ((((((arr_1 [i_0] [i_1]) & ((((arr_0 [i_1]) != (arr_3 [i_1 + 1] [i_0]))))))) ? ((-(arr_3 [i_0 + 3] [i_1 - 2]))) : (((+((min((arr_4 [i_1]), var_11))))))));
                arr_5 [i_0 - 1] [i_1] [i_1 + 1] = ((min((arr_2 [i_0 + 2]), var_1)));
                var_17 = (min(var_10, (var_1 % var_4)));
                var_18 &= ((-(((max(var_5, (arr_4 [i_1]))) + (arr_0 [i_0 - 3])))));
            }
        }
    }
    var_19 ^= ((!(min((!var_10), (!-118)))));
    #pragma endscop
}
