/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((max(var_4, ((min(0, var_7))))) - var_7))));
    var_17 = (((((((var_0 ? var_14 : var_1))) ? var_14 : var_1)) - ((0 ? 76 : 79))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0 - 4] = -179;
                var_18 = var_3;
                arr_8 [i_1] = (min((((arr_3 [i_0 - 2] [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_6 [i_0 - 3]))), (arr_2 [i_0 - 2])));
                var_19 = (((min(1, var_3)) == ((max(((max((arr_0 [i_0] [i_0]), (arr_4 [i_1])))), ((-1 ? 1 : var_9)))))));
            }
        }
    }
    var_20 = var_13;
    #pragma endscop
}
