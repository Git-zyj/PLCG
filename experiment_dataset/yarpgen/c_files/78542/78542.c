/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= min((var_12 - var_17), (max(var_11, var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_20 *= (arr_3 [i_0] [i_0]);
                arr_4 [i_0] [i_0] [i_0] = (min((max((arr_3 [i_0] [i_1 + 1]), var_8)), ((((((var_7 ? (arr_1 [i_0] [i_1 - 1]) : var_13))) ? var_15 : (19509 * 19487))))));
                var_21 = 18139100887180363606;
            }
        }
    }
    #pragma endscop
}
