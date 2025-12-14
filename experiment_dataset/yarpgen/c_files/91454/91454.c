/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 850528737));
    var_13 = 229;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((var_3 ^ -32) ? ((-((232929849 ? -1817504437 : var_1)))) : (arr_2 [i_0] [i_1] [1]))))));
                var_15 = (((max(1, var_1))) ? (max(232929844, 0)) : (arr_0 [i_0]));
            }
        }
    }
    var_16 = (min(var_16, var_11));
    #pragma endscop
}
