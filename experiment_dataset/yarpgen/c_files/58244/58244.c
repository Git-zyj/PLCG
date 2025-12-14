/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = -211;
                var_18 = ((!((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_1]))))));
                var_19 = (min(((15142907862712073000 ? -15713 : 3303836210997478616)), var_12));
                arr_6 [i_1] [i_1] = (((arr_0 [i_0] [i_1]) ? (((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1]))))) : (min(3303880663, -20193))));
                arr_7 [i_1] [i_1] = (max((arr_1 [i_0]), (arr_1 [i_1])));
            }
        }
    }
    var_20 *= ((var_17 >> (4294967295 - 4294967269)));
    var_21 = var_0;
    #pragma endscop
}
