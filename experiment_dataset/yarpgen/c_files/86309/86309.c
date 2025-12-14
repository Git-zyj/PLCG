/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((-5999 > ((max(var_12, var_4))))) ? (((((var_11 ? var_5 : 5))) ? (min(var_10, var_2)) : (((var_8 >> (var_11 + 68)))))) : var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = max(((((max((arr_4 [i_0 + 1] [i_0] [i_0 + 1]), (arr_3 [2])))) ? 1 : ((((arr_3 [i_0 + 1]) | var_6))))), (arr_5 [i_0 + 1]));
                arr_7 [i_1] [i_1] [i_1] = (arr_1 [i_1] [i_0]);
            }
        }
    }
    var_17 = ((-(((var_6 + 281474976645120) ? (min(var_13, -51)) : (((var_1 ? var_7 : var_0)))))));
    #pragma endscop
}
