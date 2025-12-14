/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_1] [i_0]) : (arr_1 [i_0] [i_1])))) && (((1 ? 16 : 0))))))));
                arr_6 [i_0] = (min(((((!var_13) >= (min(var_0, 315))))), (((arr_1 [i_0] [i_1]) ? (arr_5 [i_0] [i_1]) : (arr_1 [i_0] [i_0])))));
                var_21 = (min(var_21, (((((((68 >> (-1 + 16))))) ? (max((arr_1 [i_0] [15]), var_16)) : (min((arr_4 [i_0]), (arr_4 [i_0]))))))));
            }
        }
    }
    var_22 = var_14;
    var_23 = max((((var_19 * (58 / var_12)))), (((2512934741 ? 297221095634802705 : 16384))));
    var_24 -= (~((5 ? var_11 : (var_14 ^ var_9))));
    #pragma endscop
}
