/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(-112, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = (arr_0 [i_0]);
                var_14 = (((((71 - 127) ? (((arr_3 [i_0] [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_3 [i_0] [2] [i_0]))) : (max((arr_3 [i_0] [i_1] [i_1]), (arr_0 [i_0]))))) > (((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_1]) : (arr_0 [i_0])))));
                var_15 = ((((min(1, (arr_1 [i_0])))) ? (min(24, (max(377952983, (arr_2 [i_0] [i_0]))))) : ((max((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))), 115)))));
            }
        }
    }
    var_16 += ((329142583 <= 1789619309) ? ((((max(var_2, var_9))))) : (((((var_8 ? var_2 : var_0))) ? ((71 ? 0 : var_7)) : (((min(var_6, var_12)))))));
    var_17 |= var_3;
    #pragma endscop
}
