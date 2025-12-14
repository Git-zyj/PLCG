/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((~((~(51907 & 0)))));
                arr_6 [i_1] [i_1] [i_1] = (arr_3 [i_1 - 1]);
                arr_7 [i_1] [i_1] = ((((((min((-127 - 1), var_6))) ? (((~(arr_0 [i_0])))) : var_6)) << (((((arr_0 [i_1]) ? var_6 : var_10)) - 3861851890))));
            }
        }
    }
    var_11 = (max(var_11, var_7));
    #pragma endscop
}
