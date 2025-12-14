/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((153 * ((min(-52, -58)))))) && ((((~var_7) ? var_7 : (~var_8))))));
    var_20 = ((((((var_14 + 2147483647) >> (var_18 - 20)))) ? (((-6 % (((max(var_11, var_12))))))) : (((max(var_15, var_5)) * (((var_9 ? var_5 : var_2)))))));
    var_21 = ((max((((var_10 ? 262143 : -36))), var_7)));
    var_22 ^= (var_1 ^ var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_23 = var_1;
                arr_5 [i_0] = (~(((!(arr_1 [i_1])))));
                arr_6 [11] = ((43 ? ((~(((arr_2 [i_1] [i_0]) ? var_8 : (arr_4 [i_0] [i_1]))))) : (arr_2 [i_0] [i_1])));
                var_24 ^= ((-1632181506163701556 < (~21)));
            }
        }
    }
    #pragma endscop
}
