/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((min((!var_14), -var_4))), (min(var_2, ((min(-32749, 1864044790)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [1] |= (arr_2 [i_0] [0]);
                var_17 = (~32749);
                arr_5 [i_0] [i_1] = ((-32749 ? -1191112338388819247 : (((((((min(-32752, 32755))) + 2147483647)) >> (!1813553287586560013))))));
            }
        }
    }
    #pragma endscop
}
