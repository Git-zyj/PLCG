/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max((((min(1, -1)))), (min((min(var_6, var_1)), (max(var_4, 7)))));
    var_12 = (max(var_12, ((min(((max(var_8, var_6))), (((min(var_6, -11)))))))));
    var_13 = (min(((max(var_7, 3234661405))), (((max(var_3, var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((min(var_6, (arr_0 [i_1]))));
                var_14 = 1;
                var_15 = (max(var_15, (((min(247, 1))))));
            }
        }
    }
    var_16 = (min((max(var_8, ((min(var_0, 1))))), 313531277));
    #pragma endscop
}
